#include<stdio.h>
int main(){
    int i,j,row;
    printf("Enter the number of row :");
    scanf("%d",&row);
    for(i=i;i<=row;i++){
        char ch='A';
        for(j=1;j<=i;j++){
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}