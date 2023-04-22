//Array element 5 which is repeated move to last
#include<stdio.h>
void mov_all_last(int arr[], int size, int num)
{
int i,j=0;
for(i=0;i<size;i++)
{
if(arr[i]!=num)
{
arr[j++]=arr[i];
}
}
while(j<size)
{
arr[j++] = num;
}
}
int main()
{
int i,arr[10],num = 5,n;
printf("n elements\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter array\n");
scanf("%d",&arr[i]);
}
//int size = sizeof(arr)/sizeof(arr[0]);
mov_all_last(arr,n,num);
for(i=0;i<n;i++)
{
printf("array %d\n",arr[i]);

}
return 0;
}
/*
n elements
6
enter array
1
enter array
2
enter array
5
enter array
5
enter array
3
enter array
4
array 1
array 2
array 3
array 4
array 5
array 5
*/
