#include <stdio.h>
int main(){
int i=2;
int n, a=0, b=1,p;
printf("Enter n:");
scanf("%d", &n);
for  (i; i<n; i++) {
p = a + b;
 a= b;
 b= p;
}
if (n == 1)
printf("Not exist\n");
else
printf("The %dth Fibonacci term = %d", n, b);
    return 0;
}