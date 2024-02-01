#include "hash_tables.h"
/**
 * key_index - Gets the index of a key in a hash table array.
 * @key: The key to get the index for.
 * @size: The size of the hash table array.
 * Return: The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{unsigned long int hash = hash_djb2(key);
unsigned long int index = hash % size;
return (index); }
