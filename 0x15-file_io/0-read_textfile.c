#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/*
 * Project Description:
 * This program defines a function
 * read_textfile that reads a text file,
 * prints it to the POSIX standard output,
 * and returns the actual number
 * of letters read and printed.
 * The function handles file opening, reading,
 * and writing errors, as well as
 * cases where the filename is NULL.
 * Prototype: ssize_t read_textfile
 * (const char *filename, size_t letters);
 */
ssize_t read_textfile(const char *filename, size_t letters);
int main(int ac, char **av)
{ssize_t n;
if (ac != 2)
{dprintf(2, "Usage: %s filename\n", av[0]);
exit(1); }
n = read_textfile(av[1], 114);
printf("\n(printed chars: %li)\n", n);
n = read_textfile(av[1], 1024);
printf("\n(printed chars: %li)\n", n);
return (0); }
ssize_t read_textfile(const char *filename, size_t letters)
{int fd;
char *buffer;
ssize_t read_bytes;
ssize_t write_bytes;
if (filename == NULL)
{
return (0); }
fd = open(filename, O_RDONLY);
if (fd == -1)
{perror("Error opening file");
return (0); }
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{perror("Error allocating memory");
close(fd);
return (0); }
read_bytes = read(fd, buffer, letters);
if (read_bytes == -1)
{perror("Error reading file");
close(fd);
free(buffer);
return (0); }
write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
if (write_bytes == -1 || write_bytes != read_bytes)
{perror("Error writing to standard output");
close(fd);
free(buffer);
return (0); }
close(fd);
free(buffer);
return (read_bytes); }
