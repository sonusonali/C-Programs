//copy one array to another
#include<stdio.h>
int main()
{
int i,arr1[10],arr2[10],n,j=0;
printf("n elements\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter array1:\n");
scanf("%d",&arr1[i]);
}
for(i=0;i<n;i++)
{
arr2[i] = arr1[i];

}
for(i=0;i<n;i++)
{
printf("array 2 is:%d\n",arr2[i]);
}
}
/*
n elements
3
enter array1:
2
enter array1:
1
enter array1:
3
array 2 is:2
array 2 is:1
array 2 is:3
*/
