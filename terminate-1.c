#include<stdio.h>
int main(){
    int i,j,n,count=0;
    printf("Enter the size of the array:=>");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==-1)
        break;
    }
    for(i=0;i<n;i++){
        while(a[i]!=-1){
        count++;
        break;
    }
    }
    printf("The array is:\n");
    for(i=0;i<count-1;i++)
    printf("%d\t",a[i]);
}