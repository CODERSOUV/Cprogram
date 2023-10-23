#include<stdio.h>
int main(){
    int a[10],max,min,i;
    for(i=0;i<10;i++){
        printf("Enter number in x[%d]",i);
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<10;i++){
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
    }
    printf("Sum of max and min=%d\n",max+min);
}