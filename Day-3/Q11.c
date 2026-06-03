#include <stdio.h>
int main() {
    int a, b;
    printf("Enter the first numbers: ");
    scanf("%d" , &a );
    printf("Enter the second numbers: ");
    scanf("%d" , &b );
    while (a != b) {
    if (a > b)
     a = a - b;
  else
      b = b - a;
    }
    printf("gcd = %d", a);
    return 0;
}