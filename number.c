#include<stdio.h>
int main(){
    int x[10],i,sum=0;
    for(i=0;i<10;i++){
        printf("Enter number in x[%d]",i);
    scanf("%d",&x[i]);
}
printf("Sum is");
for(i=0;i<10;i++)
sum+=x[i];
printf("%d\n",sum);
return 0;
}