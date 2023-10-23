#include <stdio.h>

int main() {
    int n = 5; // Number of rows
    int num = 1; 
    for (int i = 1; i <= n; i++) { 
        num=1;
        for (int j = 1; j <= i; j++) { 
            printf("%d", num);
            num = 1 - num; 
        }
        printf("\n");
    }
    return 0;
}