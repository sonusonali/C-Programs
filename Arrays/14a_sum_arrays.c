//Write a C program to find sum of array elements?
#include<stdio.h>
int main()
{
int arr[10],i,sum=0;
for(i=0;i<10;i++)
{
scanf("%d", &arr[i]);
}
for(i=0;i<10;i++)
{
sum = sum+arr[i];
//arr[i] +=arr[i];

}
printf("%d",sum);
}
/*
1
2
3
4
5
6
7
8
9
0
45
*/