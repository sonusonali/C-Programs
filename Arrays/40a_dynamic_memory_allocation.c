//Write a C program to allocate memory dynamically?
#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;

printf("enter n value ");
scanf("%d", &n);
int *array = (int*)(malloc(n*sizeof(int)));
if(array == NULL)
{
printf("array is empty\n");
}
for(int i=0;i<n;i++)
{
printf("enter array \n");
scanf("%d",&array[i]);
}
for(int i=0;i<n;i++)
{
printf("array is %d\n",array[i]);
}
}
/*
enter n value 5
enter array
1
enter array
2
enter array
3
enter array
4
enter array
5
array is 1
array is 2
array is 3
array is 4
array is 5
*/