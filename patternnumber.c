#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter no of lines:");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=n-i;j>=1;j--)
            printf(" ");
        for(j=i;j>=1;j--){
            printf("%d",j);
        }
         printf("\n");
    }
}