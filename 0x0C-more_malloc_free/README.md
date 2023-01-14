![img](https://assets.imaginablefutures.com/media/images/ALX_Logo.max-200x150.png)
> More on dynamic memory management 

## Intro
In this session, we will explore the dynamic memory allocation and deallocation in C programming. We will discuss the use of the malloc and free functions, the advantages and disadvantages of dynamic memory allocation, and various pitfalls to watch out for. Hang on as we dive deep into the world of malloc and free and learn how to effectively manage memory in C programming.
## About 
Before we have a look at static and dynamic memory allocation, What exactly is memory allocation in the first place? 

Memory allocation is the process of allocating physical or virtual memory space to computer programs and services. It divided into two.

1. Static memory allocation.
2. Dynamic memory allocation. 

## Dynamic VS static memory allocation in C.
Below are the major difference between the two.

<table>
<tr>
<th>Dynamic Memory allocation</th>
<th>Static Memory allocation</th>
</tr>
<tr>
<td>Memory is allocated at run time</td>
<td>Memory is allocated at compile time</td>
</tr>
<tr>
<td>Memory can be increased while executing program</td>
<td>Memory can't be increased while executing program</td>
</tr>

<tr>
<td>Used in Linked List</td>
<td>Used in Arrays </td>
</tr>

<tr>
<td>Allocation is done from the Heap Memory</td>
<td>Allocation is done from the Stack Memory</td>
</tr>

<tr>
<td>Allocated memory can be released and used again if not required anymore</td>
<td>Memory allocated cannot be reused</td>
</tr>

<tr>
<td>More Efficient memory management method</td>
<td>Less Efficient memory managenent method</td>
</tr>
</table>

<details>
<summary>Dynamic memory allocation in C using <code>malloc()</code></summary>

So What exactly is <code>malloc()</code> and why is it important?

The <code>malloc()</code> function is used to allocate a certain amount of memory durign execution of a program. 
It will request a block of memory ( as specified in the malloc call) from the heap and once the request is granted, the Operating system will reserve the requested block of memory and malloc will return a pointer to the reserved space.

When the amount of memory is no longer needed anymore, you need to return it to the operating system by calling <code>free()</code>

The prototype for the malloc funtion is <code>void *malloc(size_t size);</code> where <code>size</code> is the amount of memory you want to allocate in bytes

The malloc funtion returns a void pointer, which begs the next question, [Should I cast the result of malloc?](https://stackoverflow.com/questions/605845/do-i-cast-the-result-of-malloc)
</details>

<details>
<summary>Memory allocation using <code>calloc()</code></summary>
<a href="https://www.youtube.com/watch?v=U2MqRhKzOgg">How to use calloc </a>
<br/>
The basic syntax when using calloc is 

<code>ptr = (cast-type*)calloc(n, element-size);</code>

</details>

<br>

## Resources 
[Difference between calloc and malloc ](https://www.geeksforgeeks.org/difference-between-malloc-and-calloc-with-examples/)

## Man/Help

- exit(3)
- calloc
- malloc
- free 

## Learning objectives 
* [X] How to use the ```exit``` function
* [X] What are the functions ``calloc``` and ```realloc``` from the standard library and how to use them

## Quizes
[Quiz](./quiz.md)