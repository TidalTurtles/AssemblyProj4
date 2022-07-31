// This project it to pass 4 numbers to the assembly file
// then return the mean of the lot. Also do the same in C to 
// check the answer. 

// Bonus points for random 4 numbers. (will try last)

#include<stdio.h>  //standard in/out header
#include<time.h>   //time implimented for random number

//call to the assembly program
extern int getMean(int *q, int w, int e, int r) asm ("getMean_");

int main(void){

   //test 1, worked
   //int q = 2, w = 2, e = 2, r = 2;

   //test 2, worked
   //int q =10, w = 20, e = 30, r = 40;

   //special test, make q,w,e,r random numbers
   srandom(time(NULL));
   int q = random() % 11;  //sets to random num between 0-10
   int w = random() % 11;  //sets to random num between 0-10
   int e = random() % 11;  //sets to random num between 0-10
   int r = random() % 11;  //sets to random num between 0-10

   //see if random worked
   printf("\n Q=%d, W=%d, E=%d, R=%d \n\n", q, w, e, r);

   //easy calc for mean
   //told always 4 numbers and that hardcoding it is okay
   int meanFromC = (q+w+e+r) / 4;
   
   //call the assembly program with numbers.
   int assemblyMean = getMean(&q, w, e, r);

   //Print all results and hope they match
   printf("\n The result from the Assembly program was %d \n\n", assemblyMean);

   printf("The result from the C program was %d \n\n", meanFromC);



   return(0);

}

