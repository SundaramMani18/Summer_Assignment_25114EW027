#include <stdio.h>
int main(){
     int arr[5];
    int large = arr[0];
    int small=arr[0];
    printf("Enter 5 elements:");
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<5;i++){
        if(arr[i]>large){
            large=arr[i];
        } else if(arr[i]<small) {
            small=arr[i];
        }
    }
    printf("Largest = %d",large);
    printf("Smallest=%d",small);

    return 0;
}