#!/bin/bash

# Compile each .c file in the current directory to .o object files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the static library from all the .o object files
ar rc liball.a *.o

# Update the library archive
ranlib liball.a

# Clean up by removing the .o object files
rm *.o
