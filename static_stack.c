//output for static keyword
#include<stdio.h>
void f1()
{
static int b=0;
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
$ ./static_stack
b = 0
b = 1
b = 2
b = 3
*/