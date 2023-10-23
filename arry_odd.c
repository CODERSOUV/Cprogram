#include<stdio.h>
int main(){
    int x[10],i,sum=0;
    for(i=0;i<10;i++){
        printf("Enter number in x[%d]:",i);
        scanf("%d",&x[i]);
    }
     for(i=0;i<10;i++){
        if(i%2!=0)
        printf("%d\n",x[i]);
    }
    return 0;
}