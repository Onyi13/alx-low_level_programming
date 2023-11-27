#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the
 * POSIX standard output.
 * @filename: The name of the file to be read.
 * @letters: The number of letters to read and print.
 * Return: The actual number of letters it could read and print.
 * If the file can not be opened or read, return 0.
 * If filename is NULL, return 0.
 * If write fails or does not write the
 * expected amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
if (filename == NULL)
return (0);
FILE *file = fopen(filename, "r");
if (file == NULL)
return (0);
char *buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{fclose(file);
return (0); }
ssize_t bytesRead = fread(buffer, sizeof(char), letters, file);
ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
free(buffer);
fclose(file);
if (bytesRead != bytesWritten)
return (0);
return (bytesRead); }
