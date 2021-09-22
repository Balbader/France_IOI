# Notes for the C programming language:

## Ternary Operators

Takes 3 conditions: 

. The initial condition<br>
. The result in case it is true<br>
. The result in case it is false<br>

```c
int main()
{
    int age = 25;
    age = 25 ? printf("He is 25") : printf("He is not 25");
}
```


## Preprocessor

In C, during the compilation, the code is first read by a preprocessor:<br>
It is a software that will read the source code and apply modifications on it,
before it is actually compiled.<br>
The preprocessor will run 2 tasks:<br>
. Delete all comments from the source code<br>
. Execute all lines starting with a #<br>
`#include <stdio.h>`



