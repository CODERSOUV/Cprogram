#include<stdio.h>
int isprime(int);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(isprime(n)==0)
    printf("%d is prime number\n",n);
    else
    printf("%d is not prime number",n);
}
int isprime(int a){
    int i;
    for(i=2;i<=a/2;i++){
        if(a%i==0)
        return 1;
        break;
    }
        return 0;
}