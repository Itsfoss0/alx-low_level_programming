<h1 align='center'>Preprocessor and Macros in C</h1>
<hr/>

In this session we will take a look at Macros and  peek under the hood what happens during the preprocessing phase of compilation  of a C program. 

Lets have a look at the following 

1. [Understanding the C compilation process](https://www.youtube.com/watch?v=eW5he5uFBNM)
2. [Object like macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Object-like-Macros.html#Object-like-Macros)
5. [Function  like macros ](https://www.ibm.com/docs/en/i/7.2?topic=directive-function-like-macros)
4. [Macro Arguments](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Macro-Arguments.html#Macro-Arguments)
5. [Preprocessor Directive](https://www.youtube.com/watch?v=X6HiYbY3Uak)
6. [The C preprocessor](https://www.cprogramming.com/tutorial/cpreprocessor.html)
7. [The standard Predefined macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Standard-Predefined-Macros.html#Standard-Predefined-Macros)
8. [Include guard](https://en.wikipedia.org/wiki/Include_guard)
9. [Common predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Common-Predefined-Macros.html#Common-Predefined-Macros)


<details>
<summary>General Learning Objectives</summary>
<br/>
After going through the above resources, you should be able to explain to anyone the following without the help of Google
<li>What are macros and how to use them</li>
<li>What are the most common predefined macros</li>
<li>How to include guard your header files</li>
</details>
<details>
<summary>Exercises</summary>
Attempt the following exercise. 
<table>
<tr>
<th>Exercise</th>
<th>Solution</th>
</tr>
<tr>
<td>Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.</td>
<td><a href="0-object_like_macro.h">Solution</a><td>
</tr>
<tr>
<td>Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.</td>
<td><a href="1-pi.h">Solution</a></td>
</tr>
<td>Write a program that prints the name of the file it was compiled from, followed by a new line.</td>
<td><a href="2-main.c">Solution</a></td>
<tr>
<td>Write a function-like macro ABS(x) that computes the absolute value of a number x.</td>
<td><a href="3-function_like_macro.h">Solution</a></td>
</tr>
</table>
</details>