#include <stdio.h>
int main(){
     int arr[5];
    int sum = 0;
    printf("Enter 5 elements:");
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i]; 
     }
     printf("Sum= %d\n",sum);
    printf("Average=%0.2f",sum/5.0);
    return 0;
}