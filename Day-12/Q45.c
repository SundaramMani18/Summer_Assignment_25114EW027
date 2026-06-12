#include<stdio.h>
int palindrome(int n){
int r = 0;
int t = n;
while(t != 0){
r = r*10 + t%10;
t=t/10;
}
return r == n;
}
int main(){
int n;
printf("Enter a number:");
scanf("%d",&n);
if(palindrome(n)){
printf("Palindrome number");
}
else{
printf("Not a Palindrome");
}
return 0;
}