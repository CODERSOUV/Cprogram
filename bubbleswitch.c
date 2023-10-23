#include<stdio.h>
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
void display(int a[],int n){
    printf("Displaying the array:\n");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");
}
void modified_bubble(int a[],int n){
    for(int i=0;i<n-1;i++){
        int flag=0;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
                flag=1;
            }
        }
    if(flag==0)
    break;
}
}
void bubble_sort(int a[],int n){
    int sw;
    printf("1.Ascending\n2.Decending\nEnter choice:");
    scanf("%d",&sw);
    switch(sw){
        case 1:
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(a[j]>a[j+1])
                    swap(&a[j],&a[j+1]);
        }
    }
    break;
    case 2:
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(a[j]<a[j+1])
                    swap(&a[j],&a[j+1]);
        }
    }
    break;
    default:
    printf("Wrong input entered");
    break;
    } 
}
int main(){
    int n,s;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter values in array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    while(1){
        printf("1.Bubble sort\n2.Modified bubble sort\n3.Display\n4.Exit\nEnter choice");
        scanf("%d",&s);
        switch(s){
        case 1:
        bubble_sort(a,n);
        break;
        case 2:
        modified_bubble(a,n);
        break;
        case 3:
        display(a,n);
        break;
        case 4:
        printf("Exiting the program");
        return 0;
        break;
        default:
        printf("Wrong input entered");
        break;
    }
}
}