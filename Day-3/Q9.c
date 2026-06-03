#include <stdio.h>
int main(){
int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 2)
 printf("Not prime");
    else if (n % 2 == 0)
    printf("Not prime");
    else if (n % 3 == 0)
    printf("Not prime");
    else
    printf("Prime");
    return 0;
}