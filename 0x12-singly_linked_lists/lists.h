/** function prototypes here**/

int _putchar(char);
size_t print_list(const list_t *h);


/** structures here **/
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 * Description: singly linked list node structure
 *              for the ALX project
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
