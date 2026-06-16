#include <stdio.h>
int perfect(int n){
   int i,s=0;
for(i=1;i<n;i++){
if (n%i==0){
      s=s+i;
    }
 }
return s==n;
}
int main(){
int n;
printf("Enter a number:");
scanf("%d",&n);
if(perfect(n)){
printf("It is a Perfect Number");
}
else{
printf("Not a Perfect Number");
}
return 0;
}