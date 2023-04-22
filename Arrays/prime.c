//Add prime numbers in an array
#include<stdio.h>
int isprime(int n)
{
int i;
if(n<2)
{
return 0;
}
for(i=2;i*i<=n;i++)
{
if(n%i == 0)
{
return 0;
}
}
return 1;
}
int main()
{
int arr[10],size=3,i,sum=0;

printf("enter array 1:\n");
for(i=0;i<size;i++)
{
scanf("%d", &arr[i]);
}
for(i=0;i<size;i++)
{
if(isprime(arr[i]))
{
sum= sum+arr[i];
}}
printf("%d", sum);
}
/*
enter array 1:
2
3
5
10
*/