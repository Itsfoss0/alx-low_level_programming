# More on mallocs and free function in c 
Before we have a look at static and dynamic memory allocation, What exactly is memory allocation in the first place? 

Memory allocation is the process of allocating physical or virtual memory space to computer programs and services. Memory allocation is divided into two.

1. Static memory allocarion.
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
</table>

<details>
<summary>Dynamic memory allocation in C using <code>malloc()</code></summary>

So What exactly is <code>malloc()</code> and why is it important?
The <code>malloc()</code> function is used to allocate a certain amount of memory durign execution of a program. 
It will request a block of memory ( as specified in the malloc call) from the heap and once the request is granted, the Operating system will reserve the requested block of memory and malloc will return a pointer to the reserved space.

When the amount of memory is no longer needed anymore, you need to return it to the operating system by calling <code>free()</code>
</details>