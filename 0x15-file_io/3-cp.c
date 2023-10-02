#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - copies content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, or one of the error codes on failure
 */
int main(int argc, char *argv[])
{int fd_from, fd_to, read_res, write_res;
char buffer[1024];
if (argc != 3)
{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97); }
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98); }
fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99); }
while ((read_res = read(fd_from, buffer, 1024)) > 0)
{write_res = write(fd_to, buffer, read_res);
if (write_res != read_res)
{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(fd_from);
exit(99); }}
if (read_res == -1)
{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98); }
if (close(fd_from) == -1)
{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
exit(100); }
if (close(fd_to) == -1)
{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
exit(100); }
return (0); }
