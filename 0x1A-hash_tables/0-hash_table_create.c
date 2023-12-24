#include "hash_tables.h"

/**
 * my_hash_table_create - A function that creates a hash table
 * @new_size: Size of the array
 *
 * Return: If an error occurs - NULL
 *         otherwise - a pointer to the new hash table
 **/
hash_table_t *my_hash_table_create(unsigned long int new_size)
{
    hash_table_t *my_table;
    unsigned long int i;

    /* allocate space for the hash table */
    my_table = malloc(sizeof(hash_table_t));

    if (my_table == NULL)
        return (NULL);

    my_table->size = new_size;
    my_table->array = malloc(sizeof(hash_node_t *) * new_size);

    if (my_table->array == NULL)
        return (NULL);

    for (i = 0; i < new_size; i++)
    {
        my_table->array[i] = NULL;
    }

    return (my_table);
}