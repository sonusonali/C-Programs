//alternate array
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

for(i=0;i<n;i=i+2)
{
printf("array %d\n",arr[i]);
}
}
/*
n elements
5
enter array
1
enter array
2
enter array
3
enter array
4
enter array
5
array 1
array 3
array 5
*/