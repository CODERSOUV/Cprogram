#include <stdio.h>
int x[100];
void merge(int a[], int b[], int asize, int bsize) {
    int size=asize+bsize;
    int arr[size];
    int k = 0;
    
    for (int i = 0; i < asize; i++) {
        arr[k] = a[i];
        k++;
    }
    
    for (int j = 0; j < bsize; j++) {
        arr[k] = b[j];
        k++;
    }
    
    for (int i = 0; i < size; i++) {
        x[i] = arr[i];
    }
}

void display(int a[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bubble_sort(int a[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int a[] = {3, 1, 2, 5};
    int b[] = {6, 7, 8};
    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);
    int size = n1 + n2;
    
    merge(a, b, n1, n2);
    printf("Merged array:\n");
    display(x, size);
    printf("\n");
    printf("Sorted merged array:\n");
    bubble_sort(x, size);
    display(x, size);
    return 0;
}
