#include<stdio.h>
int sum(int,int,int,int);
int main(){
    printf("%d\n",sum(8,12,20,40));
    return 0;
}
int sum(int a,int b,int c,int d){
    return a+b+c+d;
}int sum(int a,int b){
    scanf("%d %d",&a,&b);
    return a+b;
}