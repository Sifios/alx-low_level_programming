#include "hash_tables.h"

/**
 * my_hash_djb2 - Hash function implementing the djb2 algorithm.
 * @my_str: The string to hash.
 *
 * Return: The calculated hash.
 */

unsigned long int my_hash_djb2(const unsigned char *my_str)
{
    unsigned long int my_hash;
    int my_count;

    my_hash = 5381;
    while ((my_count = *my_str++))
        my_hash = ((my_hash << 5) + my_hash) + my_count;

    return (my_hash);
}
