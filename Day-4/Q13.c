#include <stdio.h>
int main() {
int n, a=0, b=1, p, i=0;
printf("Enter terms: "); 
scanf("%d", &n);
printf("Fabonacci series are:");
while (i < n) {
printf("%d", a);
p = a + b;
a=b;
b = p;
i++;}
return 0;
}