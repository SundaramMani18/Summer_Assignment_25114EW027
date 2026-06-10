#include<stdio.h>
int main(){
    int col;
    printf("Enter a column:");
    scanf("%d",&col);
    for(int i=0;i<col;i++){
        for(int j=0;j<col;j++){
            if(i==0||i==col-1||j==0||j==col-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");

    }
    return 0;
    


}