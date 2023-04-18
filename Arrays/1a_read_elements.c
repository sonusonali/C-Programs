// Write a C program to read 10 elements and display the elements using
same array?
#include<stdio.h>
int main()
{
int i,arr[10],n;
printf("n elements\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter array\n");
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
printf("array %d\n",arr[i]);
}
}
/*
n elements
5
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
array 1
array 2
array 3
array 4
array 5
*/