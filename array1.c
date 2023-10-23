#include<stdio.h>
int main(){
    int arr[10],pos,num,i;
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    printf("Enter the position");
    scanf("%d",&pos);
    printf("Enter a number");
    scanf("%d",&num);
    arr[pos-1]=num;
    for(i=0;i<10;i++)
    printf("%d ",arr[i]);
}