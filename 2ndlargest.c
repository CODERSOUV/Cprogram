#include<stdio.h>
int main(){
    int a[10],max=0,max_2=0,i;
    for(i=0;i<10;i++){
        printf("Enter number in x[%d]",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        if(a[i]>a[i+1])
        max=a[i+1];
        else
        max=a[i];
    }
    for(i=0;i<10;i++){
        
    printf("%d\n",max_2);
    }
        return 0;
}
    