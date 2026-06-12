#include<stdio.h>
int main(){
int n,i,num,d,total;
printf("Enter a number:");
scanf("%d",&n);
for(i=1; i <= n; i++)
{
    total = 0;
num = i;
while(num > 0){
d = num % 10; 
total =total+ d*d*d;
num =num/10;
} 
if(total== i)
printf("%d\n", i);
}
return 0;
}