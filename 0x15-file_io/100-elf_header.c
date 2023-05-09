#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <elf.h>

/**
 * print_error - stderr error message printed and exits with code 98.
 * @message: The error message to be printed.
 */
void print_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * print_field - Prints a field name and its value.
 * @name: The name of the field.
 * @value: The value of the field.
 */
void print_field(const char *name, int value)
{
	printf("%s: %d\n", name, value);
}

/**
 * print_field_hex - Prints a field name and its hexadecimal value.
 * @name: The name of the field.
 * @value: The hexadecimal field value.
 */
void print_field_hex(const char *name, unsigned long value)
{
	printf("%s: %#lx\n", name, value);
}

/**
 * display_elf_header - Displays the ELF header information.
 * @header: Points to ELF header structure.
 */
void display_elf_header(const Elf64_Ehdr *header)
{
	int i;

	printf("Magic:   ");

	for (i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	print_field("Class", header->e_ident[EI_CLASS]);
	print_field("Data", header->e_ident[EI_DATA]);
	print_field("Version", header->e_ident[EI_VERSION]);
	print_field("OS/ABI", header->e_ident[EI_OSABI]);
	print_field("ABI Version", header->e_ident[EI_ABIVERSION]);
	print_field("Type", header->e_type);
	print_field_hex("Entry point address", header->e_entry);
}

/**
 * main - Displays the information from the ELF file.
 * @argc: The number of arguments.
 * @argv: An array of argument strings.
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		print_error("Invalid number of arguments");
	}

	filename = argv[1];
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		print_error("Failed to open the file");
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		print_error("Failed to read the ELF header");
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	header.e_ident[EI_MAG1] != ELFMAG1 ||
	header.e_ident[EI_MAG2] != ELFMAG2 ||
	header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Not an ELF file");
	}
	display_elf_header(&header);

	close(fd);
	return (0);
}
