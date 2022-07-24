// This project it to pass 4 numbers to the assembly file
// then return the mean of the lot. Also do the same in C to 
// check the answer. 

// Bonus points for random 4 numbers. (will try last)

#include<stdio.h>  //standard in/out header

//commented out to build C file first
//extern int intAddSub(int q, int w, int e, int r) asm ("GetMean_");

int main(void){

   //test 1
   int q = 2, w = 2, e = 2, r = 2;

   //easy calc for mean
   //told always 4 numbers and that hardcoding it is okay
   int meanFromC = (q+w+e+r) / 4;

   printf("The result from the C program was %d \n\n", meanFromC);

   return(0);

}

