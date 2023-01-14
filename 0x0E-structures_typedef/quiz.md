![img](https://assets.imaginablefutures.com/media/images/ALX_Logo.max-200x150.png)
> Structures and Typedef quizes

#### Question #0
The general syntax for a struct declaration in C is:
```c
struct tag_name {
   type member1;
   type member2;
   /* declare as many members as desired, but the entire structure size must be known to the compiler. */
};
```
* [ ] Maybe
* [X] True
* [ ] False

#### Question #1
Those two codes do the same thing:
```c
typedef struct point point;
struct point {
   int    x;
   int    y;
};
point p = {1, 2};
```
```c
typedef struct point point;
struct point {
   int    x;
   int    y;
};
point p = { .y = 2, .x = 1 };
```
* [ ] False: the members of the structures will not have the same values
* [X] True
* [ ] False: the second does not compile

#### Question #2
You should write documentation for all the structures you create

* [X] As soon as I write my structure.
* [X] True
* [ ] I’ll do it 5 minutes before the deadline when I try Betty on my header file


#### Question #3
Given this code

```c
struct point {
   int x;
   int y;
};
struct point my_point = { 3, 7 };
struct point *p = &my_point;
```
To set the member y of my variable my_point to 98, I can do (select all valid answers):
* [ ] p.y = 98;
* [X] my_point.y = 98;
* [ ] my_point->y = 98;
* [X] p->y = 98;
* [X] (*p).y = 98;
