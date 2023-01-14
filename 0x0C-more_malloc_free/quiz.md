![img](https://assets.imaginablefutures.com/media/images/ALX_Logo.max-200x150.png)
> More on dynamic memory management quizes

#### Question #0
What is wrong with this code?

```c
int cp(void)
{
    char *s;

    s = malloc(12);
    strcpy(s, "Best School");
    return (0);
}
```
* [ ] You can’t call ```strcpy``` with a string literal
* [ ] You don’t have enough space to store the copy of the string “Best School”
* [X] There is no comment
* [X] ```malloc``` can fail so we should check its return value all the time before using the pointers returned by the function.

#### Question #1
You can do this:
```c
char *s;

s = strdup("Best School");
if (s != NULL)
{
    free(s);
}
```
* [X] Yes
* [ ] No

#### Question #2
You can do this:
```c
char str[] = "Best School";

free (str);
```
* [ ] Yes
* [X] No

#### Question #3
If I want to copy the string “Best School” into a new space in memory, I can use this statement to reserve enough space for it (select all valid answers):

* [ ] malloc(11)
* [X] malloc(strlen(“Best School”) + 1)
* [ ] malloc(sizeof(“Best School”) + 1)
* [ ] malloc(strlen(“Best School”))
* [X] malloc(sizeof(“Best School”))
* [X] malloc(12)

#### Question #4
malloc returns a pointer

* [X] True
* [ ] False

#### Question #5
To allocate enough space for an array of 10 integers (on a 64bit, Linux machine), I can use:

* [X] malloc(10 * sizeof(int))
* [ ] malloc(64 * 10)
* [ ] malloc(10 * int)
