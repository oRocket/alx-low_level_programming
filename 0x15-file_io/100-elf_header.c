#include "main.h"
#include <elf.h> /* ELF header definition */
#include <sys/types.h>
#include <sys/stat.h>

void display_elf_header(Elf64_Ehdr *header)
{
	int i;
	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("  Class:                             %s\n",
			header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
			header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Invalid");

	printf("  Data:                              %s\n",
			header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" :
			header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big-endian" : "Invalid");

	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);

	printf("  OS/ABI:                            %s\n",
			header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
			header->e_ident[EI_OSABI] == ELFOSABI_HPUX ? "HP-UX" :
			header->e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "NetBSD" : "Unknown");

	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

	printf("  Type:                              %s\n",
			header->e_type == ET_NONE ? "None" :
			header->e_type == ET_REL ? "Relocatable" :
			header->e_type == ET_EXEC ? "Executable" :
			header->e_type == ET_DYN ? "Shared object" :
			header->e_type == ET_CORE ? "Core" : "Unknown");

	printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[])
{
	const char *elf_filename;
	int fd;
	Elf64_Ehdr header;
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	elf_filename = argv[1];

	fd = open(elf_filename, O_RDONLY);
	if (fd == -1)
	{
		perror("Error");
		exit(98);
	}

	if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		perror("Error");
		close(fd);
		exit(98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		exit(98);
	}
	printf("ELF Header:\n");
	display_elf_header(&header);
	close(fd);
	return (0);
}
