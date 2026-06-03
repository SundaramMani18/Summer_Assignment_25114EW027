#include <stdio.h>
int main(){
int i = 2, n,j;
printf("Enter the number:");
scanf("%d",&n);
 while(i <= n) {
    j = 2;
    while(j < i) {
    if(i % j == 0)
     break;
     j++; }
    if(j == i)
     printf("%d\n", i);
     i++;
    }
     return 0;
}