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
