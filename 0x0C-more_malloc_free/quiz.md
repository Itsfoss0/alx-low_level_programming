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

