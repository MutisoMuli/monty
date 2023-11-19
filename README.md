# Monty language
___
[![standard-readme compliant](https://img.shields.io/badge/readme%20style-standard-brightgreen.svg?style=flat-square)](https://github.com/Innocentsax/standard-readme)

<p align="center">
<img src="https://payload148.cargocollective.com/1/11/353777/5270131/Dogs.jpg">
</p>

Monty is a scripting language initially compiled into Monty byte codes, featuring a distinctive stack with specialized instructions for stack manipulation. The objective of this project is to develop an interpreter capable of executing Monty ByteCodes files.

This is a C programming language interpreter designed to handle both stacks and queues (Last In, First Out, and First In, First Out, respectively). Its purpose is to interpret Monty bytecode files. [Monty](http://montyscoconut.github.io/) is a language designed to bridge the divide between scripting and programming languages.

## Requirements

The acceptable editors for this project are vi, vim, and emacs. The compilation of all files will be done on Ubuntu 20.04 LTS using gcc, employing the options -Wall -Werror -Wextra -pedantic -std=c90. Each file should conclude with a new line. The project requires a mandatory README.md file at the root of the project folder.

The code must adhere to the Betty style, which will be assessed using betty-style.pl and betty-doc.pl. Usage of a maximum of one global variable is permitted. Each file should contain no more than 5 functions. The C standard library is allowed.

A header file named monty.h should include prototypes for all functions. Don't forget to push your header file. All header files must be include guarded.

## Compilation

To compile this project, you can use the following command:

gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty

## Allowable opcodes and what they do


|opcode  |  functionality|
| --- | --- |
| push | add element to the 'top' of stack and 'end' of queue  |
| pop  | remove element from 'top' of stack and 'end' of queue |
|pall  |print every member of the structure|
| pint | prints the member value at the top of stack |
| swap | swaps the order  of the 1st and 2nd elements in stack |
| add | add top two member values |
| sub | subtract the top element from the 2nd top element |
| div | divide the 2nd element by the top element |
| mul | multiply the top two elements of the stack |
| mod | the remainder when the 2nd element is divided by the top element |
| comment | there is the ability to parse comments found in bytecode ->'#'|
| pchar | print character at the top of the stack |
| pstr | print the character at the top of the stack|
| rotl | moves element at the top to the bottom of the stack |
| rotr | the bottom of the stack becomes the top |
| queue, stack | toggles the doubly link list implementation style |
| nop | opcode should do nothing |




Examples:
`$ cat testfile.m`

`push 1`

`push 2`

`push 3`

`pall`

`$ ./monty testfile.m`

`3`

`2`

`1`

`$`

---

`$ cat testfile.m`

`push 1`

`push 2`

`push 3`

`pall`

`rotl`

`pall`

`$ ./monty testfile.m`

`3`

`2`

`1`

`2`

`1`

`3`

## Exit Status
Exits with status `EXIT_FAILURE`

## Styling
All files have been written in the Betty Style.

## Author
© **MutisoMuli** - [Github Account](https://github.com/MutisoMuli) Email:[mulimutiso525@gmail.com](mailto:mulimutiso525@gmail.com)
