# 0x1A-hash_tables 🔐
###  A Hash table is a container (Dictionary type) that allows efficient storage and retrieval of elements (called values) from other objects, called keys.


A hash table consists of an array of entries, which will be the structure that stores the information, and a hash function. The scatter function allows to associate the element stored in an entry with the key of that entry. It is therefore an important algorithm for the proper functioning of the structure.
taken from: http://www.hci.uniovi.es/Products/DSTool/hash/hash-queSon.html


## This Repository Contains:

| Task | Function Prototype |
| ------ | ------ |
| function that creates a hash table. |```hash_table_t *hash_table_create(unsigned long int size)```|
| function implementing ```.djb2``` algorithm. |```unsigned long int hash_djb2(const unsigned char *str)```|
| function that gives you the index of a key. | ```unsigned long int key_index(const unsigned char *key, unsigned long int size)```|
| function that adds an element to the hash table. | ```int hash_table_set(hash_table_t *ht, const char *key, const char *value)```|
|  function that retrieves a value associated with a key | ```char *hash_table_get(const hash_table_t *ht, const char *key)```|
|function that prints a hash table| ```void hash_table_print(const hash_table_t *ht)``` |
|function that deletes a hash table | ```void hash_table_delete(hash_table_t *ht)```|

## By 🦋
Estefania Ruiz

## To 📚
Holberton School