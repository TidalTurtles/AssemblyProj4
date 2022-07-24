// This project it to pass 4 numbers to the assembly file
// then return the mean of the lot. Also do the same in C to 
// check the answer. 

// Bonus points for random 4 numbers. (will try last)

#include<stdio.h>  //standard in/out header

//call to the assembly program
extern int getMean(int q, int w, int e, int r) asm ("getMean_");

int main(void){

   //test 1
   int q = 2, w = 2, e = 2, r = 2;

   //easy calc for mean
   //told always 4 numbers and that hardcoding it is okay
   int meanFromC = (q+w+e+r) / 4;
   
   //call the assembly program with numbers.
   int assemblyMean = getMean(q, w, e, r);

   //Print all results and hope they match
   printf("The result from the Assembly program was %d \n\n", assemblyMean);

   printf("The result from the C program was %d \n\n", meanFromC);



   return(0);

}

