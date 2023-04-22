// Binary to decimal
#include<stdio.h>
int main()
{
int binary,decimal=0,base=1,rem;
printf("enter binary");
scanf("%d",&binary);
int temp= binary;
while(temp)
{
rem = temp%10;
decimal += rem*base;
base *=2;
//binary>>=1;
temp = temp/10;
}
printf("%d",decimal);
}
/*#include <stdio.h>
#include <string.h>

int main() {
    char binary[32];
    int decimal = 0;
    int i, j;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    j = strlen(binary) - 1;
 

    for (i = 0; binary[i] != '\0'; i++, j--) {
        if (binary[i] == '1') {
            decimal |= (1 << j);
 printf("Decimal equivalent of  is %d\n", decima);
        }
    }

    printf("Decimal equivalent of %s is %d\n", binary, decimal);

    return 0;
}*/
/*
enter binary1011
11
*/