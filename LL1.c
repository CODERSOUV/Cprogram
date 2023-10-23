#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
void create(int data)
{
    struct node *start;
    start = (struct node *)malloc(sizeof(struct node));
    start->data = data;
    start->next = head;
    head = start;
}
void del_last()
{
    struct node *ptr, *last;
    ptr = head;
    while (ptr->next->next != NULL)
    {
        last = ptr;
    }
}
void del_first()
{
    struct node *ptr;
    ptr = head;
    head = head->next;
    free(ptr);
}
void display()
{
    struct node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void deletebefore(int data)
{
    struct node *ptr, *preptr;
    ptr = head;
    if (head->next->data == data)
    {
        head = head->next;
    }
    else
    {
        while (ptr->next->next->data != data)
        {
            preptr = ptr->next;
            ptr = ptr->next;
        }
        ptr->next = ptr->next->next;
        free(preptr);
    }
    free(ptr);
}
void deleteafter(int data)
{
    struct node *ptr = head;

    // if (head == NULL) {
    //     printf("List is empty.\n");
    //     return;
    // }

    if (ptr != NULL && ptr->data == data)
    {
        struct node *nextptr = ptr->next;
        if (nextptr != NULL)
        {
            ptr->next = nextptr->next;
            free(nextptr);
        }
        else
        {
            printf("No node to delete after %d.\n", data);
        }
        return;
    }

    while (ptr != NULL && ptr->data != data)
    {
        ptr = ptr->next;
    }

    // if (ptr == NULL || ptr->next == NULL) {
    //     printf("Node with data %d not found or no node to delete after it.\n", data);
    //     return;
    // }

    struct node *nextptr = ptr->next;
    ptr->next = nextptr->next;
    free(nextptr);
}

int main()
{
    int sw, data, specificItem;

    while (1)
    {
        printf("1.Create\n2.Display\n3.Delete before\n4.Delete after\n5.Exit\n");
        scanf("%d", &sw);

        switch (sw)
        {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            create(data);
            break;
        case 2:
            display();
            break;
        case 3:
            printf("Enter specific item: ");
            scanf("%d", &specificItem);
            deletebefore(specificItem);
            break;
        case 4:
            printf("Enter specific item: ");
            scanf("%d", &specificItem);
            deleteafter(specificItem);
            break;
        case 5:
            exit(0);
        default:
            printf("Wrong choice\n");
            break;
        }
    }
    return 0;
}
