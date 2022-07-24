
.text

.global getMean_


getMean_:

   #first arg in edi
   #return value will need to be in eax

   mov %edi, %eax   # first arg moves from edi to eax
   
   add %esi, %eax   # add arg1(in eax) and second (in esi)

   add %edx, %eax   # add 3rd now

   add %ecx, %eax   # lastly add the 4th


   ret  #return to the C progrma

