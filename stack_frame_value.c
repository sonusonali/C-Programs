//compare the program with static_stack.c program for difference between static and stack
#include<stdio.h>
void f1()
{
int b=0;
printf("b = %d\n", b);
b++;
} 

int main()
{
f1();
f1();
f1();
f1();
}
/*
$ ./stack_frame_value
b = 0
b = 0
b = 0
b = 0
*/