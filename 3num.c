#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:=>");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
    printf("%d is largest\n",a);
    if(c<b)
    printf("%d is smallest\n",c);
    else
    printf("%d is smallest\n",b);
    }
    else if (b>a && b>c){
        printf("%d is largest\n",b);
    if(c<a)
    printf("%d is smallest\n",c);
    else
    printf("%d is smallest\n",a);
    }
    else{
    printf("%d is largest\n",c);
    if(b<a)
    printf("%d is smallest\n",b);
    else
    printf("%d is smallest\n",a);
    }
    return 0;
    }