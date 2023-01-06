![img](https://assets.imaginablefutures.com/media/images/ALX_Logo.max-200x150.png)
>  File I/O quizes


#### Question #0
Why? #AlwaysAskWhy
* [ ] Because this will be the second opened file descriptor for my process
* [ ] I don’t care I never ask why, just let me access the tasks!
* [X] Because most of the time, I will already have stdin (value 0), stdout (value 1) and stderr (value 2) opened when my program starts executing.
* [ ] Because this will be the first opened file descriptor and we start counting starting from 1
* [ ] Because this will be the first opened file descriptor and in CS we start counting starting from 0
* [ ] Because this will be the third opened file descriptor for my process

#### Question #1
What happens if you try to write “Best” to the standard input on Ubuntu 14.04 LTS?

* [ ] The text will be printed on the terminal but I can’t pipe it
* [ ] Segmentation fault
* [ ] Nothing
* [X] The text will be printed on the terminal on the standard output
> #### Tips:
> Just try it:)

#### Question #2
What is the ```oflag``` used to open a file in mode read + write?

* [X] ```O_RDWR```
* [ ] ```O_WRONLY```
* [ ] ```O_RDONLY```

#### Question #3
What system call would you use to write to a file descriptor? (select all correct answers)
* [X] write
* [ ] fprint
* [ ] printf

#### Question #4
is open a function or a system call? (select all valid answers)
* [ ] it’s a library call
* [X] it’s a function
* [X] it’s a sytem call
* [ ] it’s a kernel routine
* [ ] it's a function provided by the kernel

#### Question #5
What is the ```unistd``` symbolic constant for the standard output?
* [ ] STDERR_FILENO
* [ ] STDIN_FILENO
* [X] STDOUT_FILENO

#### Question #6
What is the ```unistd``` symbolic constant for the Standard error?
* [X] STDERR_FILENO
* [ ] STDIN_FILENO
* [ ] STDOUT_FILENO

#### Question #7
Which of these answers are the equivalent of ```O_RDWR``` on Ubuntu 14.04 LTS? (select all correct answers):
* [X] 2
* [X] (O_WRONLY << 1)
* [ ] 3 | 2
* [ ] (O_RDONLY << 1)
* [ ] (O_RDONLY && O_WRONLY)
* [ ] 0 
* [ ] 3
* [ ] O_WRONLY
* [ ] (O_RDONLY & O_WRONLY)
* [ ] (O_RDONLY + O_WRONLY)
* [ ] 1
* [X] 1 << 1
* [ ] O_RDONLY
* [X] 3 & 2
* [ ] (O_RDONLY | O_WRONLY)
> ### Tips:
>Use printf or read the headers to see the definitions/values of these macros.

#### Question #8
What is the unistd symbolic constant for the standard input?
* [ ] STDERR_FILENO
* [X] STDIN_FILENO
* [ ] STDOUT_FILENO

#### Question #9
Most of the time, on a classic, modern Linux system, what will be the value of the first file descriptor you will get after opening a new file with ```open``` (if ```open``` succeeds of course):
* [ ] 2
* [ ] 6
* [ ] 4
* [ ] 1
* [ ] 0
* [ ] 5
* [X] 3

#### Question #10
What is the return value of the system call ```open``` if it fails?

* [ ] 98
* [ ] 0
* [X] -1

#### Question #11
What is the correct combination of ```oflags``` used to open a file with the mode write only, create it if it doesn’t exist and append new content at the end if it already exists?
* [X] ```O_WRONLY | O_CREAT | O_APPEND```
* [ ] ```O_WRONLY```
* [ ] ```O_WRONLY | O_CREAT | O_EXCL```
* [ ] ```O_RDWR | O_CREAT | O_APPEND```

#### Question #12
Without context, on Ubuntu 14.04 LTS, ```write``` is a … (please select all correct answers):
* [ ] library call
* [X] executable
* [X] system call
* [ ] kernel routine
* [ ] game

#### Question #13
When I am using ```O_WRONLY | O_CREAT | O_APPEND``` -> the | are bitwise operators.
* [X] True
* [ ] False

#### Question #14
What is the ```oflag``` used to open a file with the mode read only?
* [ ] ```O_RDWR```
* [ ] ```O_WRONLY```
* [X] ```O_RDONLY```
