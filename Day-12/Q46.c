#include<stdio.h>
int armstrong(int n){
int s=0,t=n,d;
while (t!=0){
d=t%10;
s=s+d*d*d;
t=t/10;
}
return s == n;
}
int main(){
int n;
printf("Enter a number:");
scanf("%d", &n);
if (armstrong(n)){
printf("Armstrong Number");
}
else{
printf("Not  a Armstrong number");
}
return 0;
}