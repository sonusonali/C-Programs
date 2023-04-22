//Write a C program to rearrange the array alternatively?
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

for(i=0;i<n-1;i+=2)
{
int temp = arr[i];
arr[i] = arr[i+1];
arr[i+1] = temp;
}

for(i=0;i<n;i++)
{
printf("array %d\n",arr[i]);
}
}
/*
n elements
6
enter array
7
enter array
5
enter array
3
enter array
2
enter array
9
enter array
0
array 5
array 7
array 2
array 3
array 0
array 9
*/
