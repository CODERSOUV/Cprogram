#include<stdio.h>
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
void bubble_sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
void selection_sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int mindx=i;
        for(int j=i+1;j<n;j++){
           if(a[j]<a[mindx])
           mindx=j;
        }
        if(mindx!=i){
            swap(&a[i],&a[mindx]);
        }
    }
}

int main(){
    int a[]={5,9,8,1,2};
    int n=5;
    char ch;
    
    bubble_sort(a,n);
    selection_sort(a,n);
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");
}