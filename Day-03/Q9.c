#include <stdio.h>
int main(){
int n ,i;
    printf("Enter a number: ");
    scanf("%d", &n);
    i=2;
    while(n % i !=0){
        i++;
    }
    if(i==n){
        printf("Prime\n");
    }else{
        printf("Not Prime\n");
    }
    return 0;
}
    