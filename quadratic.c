#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,r1,r2,temp;
    printf("Enter a,b,c:=>");
    scanf("%f %f %f",&a,&b,&c);
    temp=sqrt(pow(b,2)-4*a*c);
    r1=(-b+temp)/2*a;
    r2=(-b-temp)/2*a;
    printf("Root 1 is:=>%f\n",r1);
    printf("Root 2 is:=>%f\n",r2);
    return 0;
}