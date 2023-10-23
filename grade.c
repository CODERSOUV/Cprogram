#include<stdio.h>
int main(){
    int marks;
    printf("Enter marks:=>");
    scanf("%d",&marks);
    if(marks>=90)
    printf("YOU GOT 'O'\n");
    else if(marks>=80 && marks<90)
    printf("YOU GOT 'E'\n");
    else if(marks>=70 && marks<80)
    printf("YOU GOT 'A+'\n");
    else if(marks>=60 && marks<70)
    printf("YOU GOT 'A'\n");
    else if(marks>=50 && marks<60)
    printf("YOU GOT 'B+'\n");
    else if(marks>=30 && marks<50)
    printf("YOU GOT 'B'\n");
    else
    printf("FAIL\n");
    return 0;
}