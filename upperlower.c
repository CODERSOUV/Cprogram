#include <stdio.h>
char uppercase(char c)
{
    c = c - 32;
    return c;
}
char lowercase(char a)
{
    a = a + 32;
    return a;
}
int main()
{
    int n;
    char x;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Enter a character:");
        scanf("%c", &x);
        printf("upper is %c", uppercase(x));
        break;
    case 2:
        printf("Enter a character:");
        scanf("%c", &x);
        printf("upper is %c", uppercase(x));
        break;
    }
}