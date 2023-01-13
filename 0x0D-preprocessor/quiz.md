![img](https://assets.imaginablefutures.com/media/images/ALX_Logo.max-200x150.png)
> Preprocessor and macros quizes

#### Question #0

This is the correct way to define the macro SUB:
```c
    #define SUB(a, b) a - b
```
* [ ] No, it should be written this way:
```c
    #define SUB(a, b) (a) - (b)
```
* [ ] Yes
* [ ] No, it should be written this way:
```c
    #define SUB(a, b) (a - b)
```
* [X] No, it should be written this way:
```c
    #define SUB(a, b) ((a) - (b))
```

#### Question #1
The macro ```__FILE__``` expands to the name of the current input file, in the form of a C string constant.

* [X] True
* [ ] False

#### Question #2
This portion of code is actually using the library stdlib.
```c
#include <stdlib.h>
```
* [ ] True
* [X] False

#### Question #3
```NULL``` is a macro

* [X] True
* [ ] False

#### Question #4
What is the ```gcc``` option that runs only the preprocessor?

* [ ] -p
* [ ] -preprocessor
* [X] -E
* [ ] -P
* [ ] -a
* [ ] -cisfun
* [ ] -pedantic

#### Question #5
The preprocessor generates assembly code

* [ ] True
* [X] False

#### Question #6
The preprocessor generates object code

* [ ] True
* [X] False

#### Question #7
Why should we use include guards in our header files?

* [ ] Because we said so, and we should never ask why.
* [X] To avoid the problem of double inclusion when dealing with the include directive.


#### Question #8
What are the steps of compilation?

* [ ] 1.preprocessor 2.compiler 3. linker 4. assembler
* [ ] 1.compiler 2. preprocessor 3. assembler 4. linker
* [X] 1.preprocessor 2.compiler 3. assembler 4. linker

#### Question #9
What does the macro ```TABLESIZE``` expand to?
```c
#define BUFSIZE 1020
#define TABLESIZE BUFSIZE
#undef BUFSIZE
#define BUFSIZE 37
```
* [ ] nothing
* [ ] 1020
* [X] 37

#### Question #10
This code will try to allocate 1024 bytes in the heap:
```c
#define BUFFER_SIZE 1024
malloc(BUFFER_SIZE)
```
* [X] True
* [ ] False

#### Question #11
The preprocessor removes all comments

* [X] True
* [ ] False

#### Question #12
What will be the last 5 lines of the output of the command ```gcc -E ``` on this code?
```c
#include <stdlib.h>

int main(void)
{
    NULL;
    return (EXIT_SUCCESS);
}
```
* [X] 
```c
int main(void)
{
 ((void *)0);
 return (0);
}
```

* [ ]
```c
int main(void)
{
 0;
 return (0);
}
```
* [ ]
```c
int main()
{
 0;
 return (0);
}
```
* [ ]
```c
int main(void)
{
 '\0';
 return (0);
}
```

#### Question #13
What will be the output of this program? (on a standard 64 bits, Linux machine)
```c
#include <stdio.h>
#include <stdlib.h>

#define int char

int main(void)
{
    int i;

    i = 5;
    printf ("sizeof(i) = %lu", sizeof(i));
    return (EXIT_SUCCESS);
}
```
* [ ] sizeof(i) = 8
* [X] sizeof(i) = 1
* [ ] sizeof(i) = 4
* [ ] It does not compile
* [ ] Segmentation Fault
* [ ] sizeof(i) = 5

#### Question #14
The preprocessor links our code with libraries.

* [ ] True
* [X] False
