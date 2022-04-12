# Understanding Functions, nested Loops in C.
Looping construct play a crucial role in giving the computer the ability to execute a given task repeatedly.

And as such, Every programming language has  looping constructs. Some of which in C are listed below:

* for loop
* while loop
* do while loop 

A simple loop has the following construct

_loop_construct
	intializer
	condition
	increment

Follow by the statement to be executed by the loop.

__For loop__ takes the following construct in C.

	for (declare and initialize variabe; condition; increment)
	{
		statement goes here
	}

for a __while loop__:

declare and initiaze variable

while(condition)
{
	 statement to be executed goes here
}

For the __do while loop__:

intializer
do
{
	statement to be executed goes here
} while (condition).

## What are nested loops and how to use them
__nested loops__ are loops within a loop. it is an inner loop in the body of an outer loop.

### Understanding how the nested loops works
The first pass or iteration of the outer loop trigger the execution of the inner loop- and one important thing to note that the statements in the inner loop execute to completion. for every pass of the outer loop. This  done for each iteration. The break and contine statement can be use to break out of the loop or continue and execution.

Example of __nested loops construct__

outer_loop
{
	inner loop
	{
		statement to be executed
	}
	outer statement to be executed
}
Recall the the both loops will have to have a conditon, initializer and increment.

## What is Function and how do you use functions
Function is the logical grouping of codes that perform a specific task.

In C the a function has the following 

* may  have a return type of nothing( if nothing it start with the word void).

* A function has a name- this allow us to be able to identify and call the function in the program

* functions may take parameter or not

* The parameter in the function mush be declare with data types

__contruct for a function in c__:

return_type/or_void function_name(data type argument list)
{
	statements
}

### The Difference Between a Declaration and a definition of a function
__function declaration__entails the function name, the return and the argument list. It is also refers to as the function prototype. It gives the neccessary information that the compiler needs to use the program.

__funcion definition__ entail give all that goes in to the method body. The logical code executed by  the compiler.
It entails the body of the functions and the function declaration.

### Prototye: 
This is also the function declaration.
It gives information about a function to the compiler. and this information are needed to call or use the function. 

* It gives the return type of a function
* It specify the number of argument passed and the data type expected. The naming of the parameters can be optional.
* It also specify the order of the argument.

Function protype exist jsut to tell the compilier the existence of the function.

## Scope of Variables
simply refers to a variable lifetime in the program. It is the block of code in the entire program where the variable is declared used and can be modified

## Understanding  the gcc flags option

* -Wall : This enables all the warnings about constructions that some
           users consider questionable, and that are easy to avoid (or
           modify to prevent the warning),

* -Werror : This makes all warnings into Errors.

* -pedantic : Issue all the warnings demanded by strict ISO C and ISO
           C++; reject all programs that use forbidden extensions, and
           some other programs that do not follow ISO C and ISO C++.
           For ISO C, follows the version of the ISO C standard
           specified by any -std option used.

* -Wextra :This enables some extra warning flags that are not enabled
           by -Wall. (This option used to be called -W.  The older
           name is still supported, but the newer name is more
           descriptive.)

* -  std=gnu89 :  Determine the language standard.   This option is currently
           only supported when compiling C or C++.


## Description of what the program below does.

0-putchar: This program display _putchar to the stdout
