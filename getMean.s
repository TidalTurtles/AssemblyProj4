
.text

.global getMean_

#step one add all values in rdi, rsi, rdx, rcx

getMean_:

  mov %rdi, %rax  #put first value in eax(return position) so you don't forget

  #now add the rest

  add %rsi, %rax  #add a + b

  add %rdx, %rax  #add a+b+c

  add %rcx, %rax  #add a+b+c+d

  #finish adding now will need to divide by 4
  #idiv on linux uses specified registers
  # idiv = eax / specified

  cdq             #from example in class, sign extends so division possible? I think
  mov $4, %ecx
  idiv %ecx
   

  #result is in eax so done

  ret

