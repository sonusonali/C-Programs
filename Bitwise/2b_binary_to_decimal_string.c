//binary to decimal
#include<stdio.h>
#include<string.h>
int main()
{
int rem,decimal=0,base=1,a=2,b=6,k;
char binary[100];
printf("enter number");
scanf("%s",&binary);
printf("%s\n", binary);

char str[10] ;
int i,j=0;
for(i=a;i<b;i++)
{

str[j]=binary[i];

j++;
}

//printf("%s\n",str);
k = strlen(str) - 1;
 

    for (i = 0; str[i] != '\0'; i++, k--) {
        if (str[i] == '1') {
            decimal |= (1 << k);
// printf("Decimal equivalent of  is %d\n", decimal);
        }
    }

    printf("Decimal equivalent of %s is %d\n", str, decimal);
}
/*
enter binary1011
11
*/