//Write a C program to increment all elements of an array by one?
#include<stdio.h>
int main()
{
int arr[10],i;
for(i=0;i<10;i++)
{
scanf("%d", &arr[i]);
}
for(i=0;i<10;i++)
{
arr[i] = arr[i]+1;
printf("%d",arr[i]);
}
}
/*
1
2
4
3
5
6
7
8
9
0
23546789101
*/
