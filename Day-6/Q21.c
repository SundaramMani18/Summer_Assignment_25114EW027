#include<stdio.h>
int main(){
    int i,n ;
    int bin[32];
    printf("Enter a Decimal:");
    scanf("%d",&n);
    for (i=0;n>0;i++) {
        bin[i]=n%2;
        n=n/2;
    }
    printf("Binary:");
    for (int j=i-1;j>=0;j--)
    printf("%d",bin[j]);
    return 0;
}
