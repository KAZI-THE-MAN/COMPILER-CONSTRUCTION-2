//Q7.Program a C program to compute the FIRST of a given grammar.
#include<stdio.h>
#include<ctype.h>
int main()
{
 int i,n,j,k;
 char str[10][10],f;
 printf("enter the number of productions\n");
 scanf("%d",&n);
 printf("enter grammar\n");
 for(i=0;i<n;i++)
 scanf("%s",&str[i]);
 for(i=0;i<n;i++)
 {
 f=str[i][0];
 int temp=i;
 if(isupper(str[i][3]))
 {
repeat:
 for(k=0;k<n;k++)
 {
 if(str[k][0]==str[i][3])
 {
 if(isupper(str[k][3]))
 {
 i=k;
 goto repeat;
 }
 else
 {
 printf("First(%c)=%c\n",f,str[k][3]);
 }
 }
 }
 }
 else
 {
 printf("First(%c)=%c\n",f,str[i][3]);
 }
 i=temp;
 }
}

/*
Aim of the Project:
The aim of this project is to generate the first set of a given context-free grammar using a C program.

Objective:
The objective of this project is to help computer science students understand the concept of first sets in compiler design and how to implement it using a C program.

Algorithm:

Read the number of productions from the user.
Read the grammar productions from the user.
For each production:
a. Get the left-hand side non-terminal symbol.
b. If the first symbol of the right-hand side production is a non-terminal symbol, find the first set of that non-terminal symbol.
c. Print the first set of the current non-terminal symbol.
Repeat step 3 for all productions.
Flowchart:

sql
Copy code
Start
|
|__> Read the number of productions
|
|__> Read the grammar productions
|
|__> For each production:
        |
        |__> Get the left-hand side non-terminal symbol
        |
        |__> If the first symbol of the right-hand side production is a non-terminal symbol, find the first set of that non-terminal symbol
        |
        |__> Print the first set of the current non-terminal symbol
|
|__> End
Result:
The result of the program is the first set of each non-terminal symbol in the given context-free grammar.

Discussion:
The given code implements the first set generation algorithm for a given context-free grammar using C programming language. It reads the grammar from the user and generates the first set for each non-terminal symbol.

The first set of a non-terminal symbol is the set of terminals that can appear as the first symbol in any string derived from that non-terminal symbol. This is an important concept in compiler design and is used to build the parsing table for LL(1) parsers.

The code uses a nested loop to find the first set of non-terminal symbols that appear on the right-hand side of a production. It uses the isupper() function from the ctype.h library to check whether a symbol is a non-terminal or a terminal.

The code is a basic implementation of the first set generation algorithm and can be improved in many ways, such as handling epsilon productions and left recursion, and supporting more complex grammars.
*/
