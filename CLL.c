#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node *head = NULL;

void create(int data) {
    struct node* start,*ptr;
    start = (struct node*)malloc(sizeof(struct node));
    start->data=data;
    if(head==NULL)
        start->next=start;
    else{
        ptr=head;
        while(ptr->next!=head){
            ptr=ptr->next;
        }
        ptr->next=start;
        start->next=head;
    }
    head=start;
}
void display() {
    struct node* ptr;
    ptr = head;
    do{
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }while (ptr!=head);
    printf("NULL\n");
}

void insert_last(int data){
    struct node* start,*ptr;
    ptr=head;
    start = (struct node*)malloc(sizeof(struct node));
    start->data=data;
    start->next=NULL;
    while(ptr->next!=head){
        ptr=ptr->next;
    }
    ptr->next=start;
    start->next=head;
}
void delete_last(){
    
}
int main() {
    int sw, data, specificItem;
    
    while (1) {
        printf("1.Create\n2.Display\n3.Insert Last\n4.Exit\n");
        scanf("%d", &sw);

        switch (sw) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                create(data);
                break;
            case 2:
                display();
                break;
            case 3:
                printf("Enter data: ");
                scanf("%d", &data);
                insert_last(data);
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Wrong choice\n");
                break;
        }
    }
    return 0;
}
