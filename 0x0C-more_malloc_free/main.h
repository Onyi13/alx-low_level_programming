#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
int is_digit(char *str);
void error_exit(void);
#endif /* MAIN_H */
