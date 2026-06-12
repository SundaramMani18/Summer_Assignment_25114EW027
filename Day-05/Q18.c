#include<stdio.h>
int main(){
    int i,n,fac;
    int sum=0;
    int digit;
    printf("Enter a number:");
    scanf("%d",&n);
    i=n;
    while(i!=0){
        digit = i % 10;
        fac = 1;
        for (int j=1;j<=digit;j++)
        fac = fac*j;
        sum = sum+fac;
        i = i / 10;
    }if(sum==n){
        printf("Strong Number");
    }else{
        printf("Not a strong number");
    }
    return 0;
}