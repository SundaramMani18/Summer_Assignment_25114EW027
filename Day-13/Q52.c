#include <stdio.h>
int main(){
    int arr[5];
    int even=0, odd=0;
    printf("Enter 5 elements=");
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<5;i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("Even element are=%d\n",even);
    printf("Odd element are=%d\n",odd);
    return 0;
}