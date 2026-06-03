#include<stdio.h>
int main(){
int n, num, d, total = 0;
printf("Enter a number: ");
scanf("%d", &n);
num = n;
while(num != 0)
{d = num % 10;
total = total + d*d*d;
num = num / 10;}
if(total == n)
printf("armstrong number");
else
printf("Not an armstrong number");
return 0;
}