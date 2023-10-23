#include<stdio.h>
int find_peak(int a[],int n){
    for(int i=0;i<n;i++){
    if(a[i]>a[i-1] && a[i]>a[i+1]){
        return i;
    }
}
return 0;
}
int main(){
    int flag=0;
int a[]={10,20,15,2,23,90,67};
int n=sizeof(a)/sizeof(a[0]);
if(find_peak(a,n))
  printf("%d is peak element found in %d index\n",a[find_peak(a,n)],find_peak(a,n));
}