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


### Including Files

The `#include` can be written as follow:

. `#include <name of the library to be included>`<br>
. `#include "name of the file to be included"`<br>


NOTE: 

Use of `<>` for libraries<br>
Use of `""` for files<br>

```c
#include <stdio.h>
#include "lib/includes/libftstruct.h"
```


### Defining symbols and macros

`#define` :

```c
#define MAX_PLAYERS  (200 * 1000)
#define INIFINITY (1000 * 1000 * 1000)
```
The use of `(  )` in the definition of macros can be necessary 
on the position of the macro.<br>

The following instruction:
```c
double average_absent_players = (double) absent_players / MAX_PLAYERS;
```
will become:
```c
double average_absent_players = (double) absent_players / (200 * 1000);
```
NOTE: without the `(  )` the result would be different.

