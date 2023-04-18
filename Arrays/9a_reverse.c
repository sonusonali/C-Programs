//Write a C program to reverse an array?
#include<stdio.h>
int main()
{
int arr[5],i,n=5;
for(i=0;i<n;i++)
{
printf("enter array");
scanf("%d",&arr[i]);
}
//int k=n;
for(i=0;i<n/2;i++)
{
int temp = arr[i];

arr[i] =arr[n-i-1];
arr[n-i-1] = temp;
}
 for( i=0;i<n;i++)
{
//printf("enter array after deleting");
printf("array after reversing :%d\n",arr[i]);
}}
/*
enter array5
enter array4
enter array7
enter array1
enter array2
array after reversing :2
array after reversing :1
array after reversing :7
array after reversing :4
array after reversing :5

*/