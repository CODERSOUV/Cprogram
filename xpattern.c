#include<stdio.h>
int main(){
   int i, j, n,m;
   printf("Enter number of rows: ");
   scanf("%d", &n);
   for(i=1;i<=n;i++) {
      for(j=1;j<=n;j++){
         if(i==j||i+j==n+1)
            printf("*");
         else
            printf(" ");
      }
         printf("\n");
   }
   return 0;
}