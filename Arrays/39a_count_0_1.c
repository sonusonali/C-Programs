//count 0 and 1's of an array
#include<stdio.h>
int main()
{
int i,n,count0 = 0, count1=0;
int array[10] = {1,0,1,0,1,0,1,0,1,0};
/*printf("n elements\n");
scanf("%d",&n);
for(i=0;i<10;i++)
{
printf("enter array\n");
scanf("%d",&array[i]);
}*/
for(i=0;i<10;i++)
{
if(array[i] == 0){
count0++;
}
else if(array[i] == 1)
{
count1++;
}
}
printf("count 0 =%d",count0);
printf("count 1 =%d",count1);
for(i=0;i<10;i++)
{
printf("array %d\n",array[i]);
}
}
/*
count 0 =5count 1 =5array 1
array 0
array 1
array 0
array 1
array 0
array 1
array 0
array 1
array 0
*/