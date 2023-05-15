#include<stdio.h>
#include<conio.h>
#include<string.h>
char op[2],arg1[5],arg2[5],result[5];
void main()
{
  FILE *fp1,*fp2;
  fp1=fopen("input.txt","r");
  fp2=fopen("output.txt","w");
while(!feof(fp1))
  {

fscanf(fp1,"%s%s%s%s",op,arg1,arg2,result);
if(strcmp(op,"+")==0)
    {
fprintf(fp2,"\nMOV R0,%s",arg1);
fprintf(fp2,"\nADD R0,%s",arg2);
fprintf(fp2,"\nMOV %s,R0",result);
    }
if(strcmp(op,"*")==0)
    {
fprintf(fp2,"\nMOV R0,%s",arg1);
fprintf(fp2,"\nMUL R0,%s",arg2);
fprintf(fp2,"\nMOV %s,R0",result);
    }
if(strcmp(op,"-")==0)
    {
fprintf(fp2,"\nMOV R0,%s",arg1);
fprintf(fp2,"\nSUB R0,%s",arg2);
fprintf(fp2,"\nMOV %s,R0",result);
    }
if(strcmp(op,"/")==0)
    {
fprintf(fp2,"\nMOV R0,%s",arg1);
fprintf(fp2,"\nDIV R0,%s",arg2);
fprintf(fp2,"\nMOV %s,R0",result);
    }
if(strcmp(op,"=")==0)
    {
fprintf(fp2,"\nMOV R0,%s",arg1);
fprintf(fp2,"\nMOV %s,R0",result);
    }
    }
fclose(fp1);
fclose(fp2);
getch();
  }

/*
  Aim of the project:
The aim of the project is to develop a simple compiler or interpreter for a basic programming language.

Objectives:
The objectives of the project may include:

To implement a lexer to tokenize the input code.
To parse the input code and generate a syntax tree.
To implement a code generator that converts the syntax tree to machine code.
To handle errors and report them to the user.
Algorithm:
The given code uses a simple algorithm to generate machine code for each instruction. The steps involved are:

Read an instruction from the input file.
Determine the operation to be performed (addition, subtraction, etc.).
Generate the corresponding machine code using the arguments and result of the instruction.
Write the generated code to the output file.
Repeat steps 1-4 until the end of the input file is reached.
Flowchart:
A flowchart is a graphical representation of an algorithm. The flowchart for the given code may look like this:

Start -> Open input file -> Read instruction -> Determine operation -> Generate machine code -> Write to output file -> Repeat until end of file -> Close input and output files -> End

Result:
The result of the code is the generated machine code for the input instructions, written to the output file "output.txt". This machine code can then be executed on a machine to perform the desired operations.

Discussion:
The given code is a basic implementation of a compiler or interpreter, and it has some limitations and drawbacks. For example, it only supports a limited set of operations, and it does not handle errors or report them to the user. Additionally, the generated code may not be optimal or efficient, as it always uses register R0 for intermediate calculations.

However, the code provides a starting point for developing a more advanced compiler or interpreter, and it demonstrates some important concepts such as lexical analysis, parsing, and code generation.
*/
