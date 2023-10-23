#include <stdio.h>

int main() {
   int matrix[3][3], largest[3] = {0};
   // take input matrix from user
   printf("Enter the elements of matrix:\n");
   for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
         scanf("%d", &matrix[i][j]);
      }
   }

   // find the largest number of each column
   for (int j=0; j<3; j++) {
      for (int i=0; i<3; i++) {
         if (matrix[i][j] > largest[j]) {
            largest[j] = matrix[i][j];
         }
      }
   }

   // print the largest number of each column
   printf("The largest number of each column is:\n");
   for (int j = 0; j < 3; j++) {
      printf("%d ", largest[j]);
   }

   return 0;
}
