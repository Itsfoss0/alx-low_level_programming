![img](https://assets.imaginablefutures.com/media/images/ALX_Logo.max-200x150.png)
> Hash tables

## Intro
Hash tables are a fundamental data structure that are used in a wide range of applications, from databases to web browsers to programming languages. They are designed to efficiently store and retrieve data, and they are an essential tool for any developer who wants to write efficient and scalable software. In this session, we'll take a deep dive into hash tables, exploring how they work and how they can be used to solve common problems in computer science.

## Resources
1. [Data Structures - Hash Tables](https://www.youtube.com/watch?v=MfhjkfocRR0)
2. [Hash function](https://en.wikipedia.org/wiki/Hash_function)
3. [Hash table](https://en.wikipedia.org/wiki/Hash_table)
4. [All about hashtables](https://www.digitalocean.com/community/tutorials/hash-table-in-c-plus-plus)
5. [Why hash tables and not arrays](https://stackoverflow.com/questions/31930046/what-is-a-hash-table-and-how-do-you-make-it-in-c)

## Learning objectives
After going through the above resources, you should be able to explain the following conepts to anyone. 

* [X] What is a hash function
* [X] What makes a good hash function
* [X] What is a hash table, how do they work and how to use them
* [X] What is a collision and what are the main ways of dealing with collisions in the context of a hash table
* [X] What are the advantages and drawbacks of using hash tables
* [X] What are the most common use cases of hash tables

## More info
### Data structures
Please use these data structures for the project. 
```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

### Python dictionaries
Python dictionaries are implemented using hash tables. When you will be done with this project, you will be able to better understand the power and simplicity of Python dictionaries. So much is actually happening when you type ```d = {'a': 1, 'b': 2}```, but everything looks so simple for the user. Python doesn’t use the exact same implementation than the one you will work on today though. If you are curious on how it works under the hood, here is a good blog post about [how dictionaries are implemented in python 2.7](http://www.laurentluce.com/posts/python-dictionary-implementation/)

Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table. [Read more](https://stackoverflow.com/questions/2061222/what-is-the-true-difference-between-a-dictionary-and-a-hash-table)