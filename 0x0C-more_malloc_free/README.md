# More on mallocs and free function in c 

So What exactly is <code>malloc()</code> and why is it important?
The <code>malloc()</code> function is used to allocate a certain amount of memory durign execution of a program. 
It will request a block of memory ( as specified in the malloc call) from the heap and once the request is granted, the Operating system will reserve the requested block of memory and malloc will return a pointer to the reserved space.

When the amount of memory is no longer needed anymore, you need to return it to the operating system by calling <code>free()</code>

<details>
<summary>Dynamic memory allocation in C</summary>

</details>