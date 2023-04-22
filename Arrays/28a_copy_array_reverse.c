//Write a C program to copy one array to other in reverse order?
#include<stdio.h>
int main()
{
int i,arr1[10],arr2[10],n,j=0;
printf("n elements\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter array\n");
scanf("%d",&arr1[i]);
}
for(i=0;i<n;i++)
{
arr2[i] = arr1[n-i-1];

}
for(i=0;i<n;i++)
{
printf("array %d\n",arr2[i]);
}
}
/*
n elements
6
enter array
1
enter array
4
enter array
3
enter array
2
enter array
8
enter array
9
array 9
array 8
array 2
array 3
array 4
array 1
*/
