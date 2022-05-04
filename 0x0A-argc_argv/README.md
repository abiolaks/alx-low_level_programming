# Understanding Arguments to main
	The declaration of main looks like this
	int main(int argc, char *argv[]);

This indicate that main is a function returning an integer.

There are at least two argument to main: argc and argv.

* argc : These count the arguments supplied to the program.
* argv : is a pointer to an array of string.

# Understanding __attribute__ ((unused))
This solve the issue of the compiler issuing waring of unused variable and function in the program.

	warning: unused variable '<variable_name>'
	warning: unused function '<function_name>'

	int  __attribute__ ((unused)) myfunction(int parm1, long parm2) { … }
	long __attribute__ ((unused)) myvariable;

## Task to solidify the understanding of the arguments to main

Tasks					Description
0-whatsmyname.c			This program prints its name followed by new line

	
