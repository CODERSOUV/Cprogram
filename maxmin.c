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
            if(a[j]<a[j+1]){
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
int main(){
   int a[]={2,1,3,6,7};
   int n=5,k;
   bubble_sort(a,n);
   printf("Enter value of k");
   scanf("%d",&k);
   printf("%d largest & smallest element is %d and %d\n",k,a[k-1],a[n-k]);
}