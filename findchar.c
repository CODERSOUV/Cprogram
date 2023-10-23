#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    char ch;
    int i=0,flag=0;
    printf("Enter a string:=>");
    scanf("%s",str);
    printf("Enter a character to search:=>");
    scanf("%c",&ch);
    while(str[i]!='\0'){
       if(ch==str[i]){
        flag=1;
        break;}
        i++;
    }
        if(flag==1)
        printf("%c found is found",ch);
        else
        printf("%c found is not found",ch); 
    
}