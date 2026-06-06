#include <stdio.h>
int main(){
int n, count=0;
printf("Enter a number:");
scanf("%d",&n);
for (int i=n;i>0;i=i/2){
    if(i%2==1) {
    count++;}
    }
    printf("Bits are:%d\n",count);
    return 0;
}