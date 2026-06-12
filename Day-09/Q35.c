#include<stdio.h>
int main(){
    int i,j,row ;
    printf("Enter the number of row :");
    scanf("%d",&row);
    for(i=0;i<=row;i++){
        char ch='A';        
        for(j=0;j<=i;j++){
            printf("%c",ch+i);
            
        }
        printf("\n");
        
    }
    return 0;
}