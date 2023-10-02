#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/*
* Displays information contained in the 
* ELF header at the start of an ELF file.
*/
int main(int argc, char **argv)
{int fd;
unsigned char e_ident[16];
if (argc != 2)
{fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
exit(98); }
fd = open(argv[1], O_RDONLY);
if (fd == -1)
{fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(98); }
if (read(fd, e_ident, 16) != 16)
{fprintf(stderr, "Error: Can't read ELF header\n");
close(fd);
exit(98); }
if (e_ident[0] != 0x7F || e_ident[1] != 'E' || e_ident[2] != 'L' || e_ident[3] != 'F')
{fprintf(stderr, "%s is not an ELF file\n", argv[1]);
close(fd);
exit(98); }
printf("Magic:   ");
for (int i = 0; i < 16; i++)
printf("%02x ", e_ident[i]);
printf("\n");
close(fd);
return (0); }
