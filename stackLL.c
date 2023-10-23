#include <stdio.h>
#include <stdlib.h>
#define M 10
struct stack
{
    int data;
    struct stack *next;
};
struct stack *top = NULL;
int isfull()
{
    int count = 0;
    struct stack *ptr = top;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}

void push(int data)
{
    if (isfull() == M)
    {
        printf("Overflow\n");
        return;
    }

    struct stack *stack1 = (struct stack *)malloc(sizeof(struct stack));
    if (stack1 == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    stack1->data = data;
    stack1->next = top;
    top = stack1;
}

int pop(){
    if (top == NULL)
    {
        printf("Underflow\n");
        return -1;
    }
    else
    {
        struct stack *pop = top;
        int popped_data = pop->data;
        top = top->next;
        free(pop);
        return popped_data;
    }
}

void display()
{
    struct stack *ptr = top;
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main(){
    int sw, data;

    while (1)
    {
        printf("1.Push\n2.Display\n3.Pop\n4.Exit\n");
        scanf("%d", &sw);

        switch (sw)
        {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            display();
            break;
        case 3:
            printf("Popped element is: %d\n", pop());
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong choice\n");
            break;
        }
    }
    return 0;
}
