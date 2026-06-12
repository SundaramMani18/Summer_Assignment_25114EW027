#include <stdio.h>
int main() {
    int b,dec=0,i=1;
printf("Enter binary number:");
scanf("%d", &b);
   while (b > 0) {
        dec=dec+(b % 10)*i;
        b=b/10;
        i=i*2;
    }
printf("Decimal number:%d\n",dec);
return 0;
}