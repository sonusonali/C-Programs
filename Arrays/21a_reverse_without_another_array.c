//Write a C program to reverse an array without using second
array?
#include<stdio.h>
int main()
{
int arr[10],n=5,i;
for(i=0;i<n;i++)
{
scanf("%d", &arr[i]);
}
for(i=0;i<n/2;i++)
{
int temp = arr[n-i-1];
arr[n-i-1]= arr[i];
arr[i] = temp;
}
for(i=0;i<n;i++)
{
printf("reverse is %d", arr[i]);
}}
/*
1
2
3
4
5
reverse is 5reverse is 4reverse is 3reverse is 2reverse is 1
*/