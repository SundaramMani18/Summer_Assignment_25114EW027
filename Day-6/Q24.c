#include <stdio.h>
int main(){
int x,n;
int outcome=1;
printf("Enter x:");
scanf("%d",&x);
printf("Enter power:");
scanf("%d", &n);
for (int i=1;i<=n;i++){
outcome= outcome*x;}
printf("Answer:%d\n",outcome);
return 0;
}