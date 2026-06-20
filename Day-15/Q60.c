#include<stdio.h>
int main(){
    int a[10], n, i, j, temp;
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==0){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Array after moving zeroes are:n");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}