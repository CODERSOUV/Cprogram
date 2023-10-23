#include<stdio.h>
/*int fact(int n){
    if(c>=1)
        return c*fact(n-1);
    else
        return 1;
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The factorial is %d\n",fact(n));
    return 0;
}*/
int printdec(int n){
    if (n == 0) {
        return n;
    } else {
        printf("%d ",n);
        return printdec(n-1);
    }
}
int main(){
    printf("%d\n",printdec(10));
    return 0;
}
