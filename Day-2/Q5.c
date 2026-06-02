#include<stdio.h>
int main(){
    int n;
    int dig,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
       dig=n%10;
       sum=sum+dig;
       n=n/10; 
    }
    printf("Sum of given number=%d",sum);
    return 0;
}