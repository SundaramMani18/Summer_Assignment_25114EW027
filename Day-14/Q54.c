#include <stdio.h>
int main(){
    int a[10], n, i, x, count = 0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element to find freuency: ");
    scanf("%d", &x);
    for(i=0;i<n;i++){
        if(a[i]==x){
            count++;
        }
    }
    printf("Frequency is:%d", count);
     return 0;
}