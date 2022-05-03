# Understanding C Static Library

## Static Libraries
Are collections of object files that are linked into a program during the linking phase of compilation and thus are not needed during runtime.

## Creating Static library
* compile all the required c source file into an object files.
* put all function prototype in an header file
* using the ar tool to create a library , with the library name and the listing of all the require object files. 
	
	ar -rc static_library_name object_files_listing

you can use 
	ar -t option library_name 
to list all the object files in the library

* Index using the ranlib and view the index using the nm command.

* link to the main program using the L. option
	eg gcc main.c -L. library_name
