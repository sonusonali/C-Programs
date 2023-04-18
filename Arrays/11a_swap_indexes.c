//Write a C program to swap two elements in an array at particular position
#include<stdio.h>
int main()
{
int arr[5],i,index1,index2;
for(i=0;i<5;i++)
{
printf("enter array\n");
scanf("%d", &arr[i]);
}
printf("enter index1 and index 2");
scanf("%d %d",&index1,&index2);
int temp = arr[index1];
arr[index1] = arr[index2];
arr[index2] = temp;
for(i=0;i<5;i++)
{
//printf("enter array\n");
printf(" after swapping %d\n", arr[i]);
}
}
/*
enter array
4
enter array
2
enter array
1
enter array
3
enter array
7
enter index1 and index 21
2
 after swapping 4
 after swapping 1
 after swapping 2
 after swapping 3
 after swapping 7
*/