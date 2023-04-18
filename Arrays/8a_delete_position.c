// deleting the array at a position
#include<stdio.h>
int main()
{
int arr[10],i, pos,n=5;
for(i=0;i<n;i++)
{
printf("enter array");
scanf("%d",&arr[i]);
}
pos = 1;

for(i=pos-1;i<n-1;i++)
{
arr[i] = arr[i+1];
}
n--;

for( i=0;i<n;i++)
{
//printf("enter array after deleting");
printf("enter array after deleting :%d\n",arr[i]);
}}
/*
enter array5
enter array4
enter array1
enter array8
enter array9
enter array after deleting :4
enter array after deleting :1
enter array after deleting :8
enter array after deleting :9

*/