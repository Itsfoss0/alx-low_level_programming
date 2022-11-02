#include "main.h"
/**
 *main - displays the contents of an elf header
 *@argc:arguement count
 *@argv:argurment vector
 *Description: ./elf_header elf_file
 *Return:0 - success
 */
int main(int argc, char *argv[])
{
	int fd, read_l, c;
	Elf64_Ehdr *header;

	if (argc != 2)
	{dprintf(STDERR_FILENO, "Usage: ./elf_header elf_file\n");
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		dprintf(STDERR_FILENO, "Error in memory allocation\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(98);
	}
	read_l = read(fd, header, sizeof(Elf64_Ehdr));
	if (read_l == -1)
	{
		dprintf(STDERR_FILENO, "Can't read file %s\n", argv[1]);
		exit(98);
	}
	elf_validation(header->e_ident);
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	printf("  ABI Version:                       ");
	printf("%i\n", header->e_ident[EI_ABIVERSION]);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);
	free(header);
	c = close(fd);
	if (c)
		dprintf(STDERR_FILENO, "Error: Can't close fd\n"), exit(98);
	return (0);
}
/**
 *elf_validation - validates whether a file is of elf format
 *@e_ident:file desc
 */
void elf_validation(unsigned char *e_ident)
{
	if (e_ident[0] == 0x7f && e_ident[1] == 'E' && e_ident[2] == 'L' && e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: File not an ELF\n");
		exit(98);
	}
}
/**
 *print_magic - prints an elf's magic no.
 *@e_ident:file description
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	i = 0;
	while (i < EI_NIDENT - 1)
	{
		printf("%02x ", e_ident[i]);
		i++;
	}
	printf("%02x\n", e_ident[i]);
}
/**
 *print_class - prints an elf's class
 *@e_ident:pointer to string
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("This class is invalid\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 *print_data - prints an elf's data
 *@e_ident: pointer to string
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("Unknown data format\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}
/**
 *print_version - prints an elf's version
 *@e_ident:string pointer
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           ");
	if (e_ident[EI_VERSION] == EV_CURRENT)
		printf("%i (current)\n", EV_CURRENT);
	else
		printf("%i\n", e_ident[EI_VERSION]);
}
/**
 *print_osabi - prints an elfs osabi
 *@e_ident:string pointer
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}
/**
 *print_type - prints an elfs type
 *@e_type:status int
 *@e_ident:pointer to string
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type = e_type >> 8;

	printf("  Type:                              ");
	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (Unknown type)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}
/**
 *print_entry - prints an elf's entry
 *@e_entry:e_entry address
 *@e_ident:pointer to char string
 */
void print_entry(unsigned int e_entry, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_entry = lit_to_big_endian(e_entry);

	printf("  Entry point address:               ");
	printf("%#x\n", (unsigned int)e_entry);
}
/**
 *lit_to_big_endian - converts hexes in little endian to big endian
 *@x:int to convert
 *Return:value in unsigned int
 */
unsigned int lit_to_big_endian(unsigned int x)
{
	return (((x >> 24) & 0x000000ff) |
		((x >> 8) & 0x0000ff00)  |
		((x << 8) & 0x00ff0000)  |
		((x << 24) & 0xff000000));
}
