#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* prev;
    struct node* next;
};

struct node *head = NULL;

void create(int data) {
    struct node* start;
    start = (struct node*)malloc(sizeof(struct node));
    start->prev=NULL;
    start->data = data;
    start->next = head;
    if(head!=NULL)
        head->prev=start;
    head = start;
}
void del_first(){
    struct node *ptr,*last;
    ptr=head;
    if(head->next==NULL)
    {
        head=NULL;
        
    }
    else{
    head=head->next;
    head->prev=NULL;
    free(ptr);
    }
}
void del_last(){
    struct node* ptr;
    ptr=head;
    while(ptr->next!=NULL)
        ptr=ptr->next;
    ptr->prev->next=NULL;
    free(ptr);
}
void insert_last(int data){
    struct node *ptr,*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    ptr=head;
}
void delete_before(int data){
    struct node *ptr;
    ptr=head;
    if(head->next->data==data){
        head=head->next;
        head->prev=NULL;
        return;
    }
    while(ptr->data!=data){
        ptr=ptr->next;
    }
    ((ptr->prev)->prev)->next=ptr;
    free(ptr->prev);
}
void delete_after(int data){
    
}
void revdisplay() {
    struct node* ptr;
    ptr = head;
    while (ptr->next != NULL) {
         ptr = ptr->next;
    }
    while(ptr!=NULL){
        printf("%d->", ptr->data);
        ptr=ptr->prev;
    }
    printf("NULL\n");
}
void display() {
    struct node* ptr;
    ptr = head;
    while (ptr != NULL) {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}


int main() {
    int sw, data, specificItem;
    
    while (1) {
        printf("1.Create\n2.Display\n3.RevDisplay\n4.Delete First\n5.Delete last\n6.Delete Before\n7.Exit\n");
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
                revdisplay();
                break;
            case 4:
                del_first();
                break;
            case 5:
                del_last();
                break;
            case 6:
                printf("Enter data: ");
                scanf("%d", &data);
                delete_before(data);
                break;
            case 7:
                exit(0);
                break;
            default:
                printf("Wrong choice\n");
                break;
        }
    }
    return 0;
}
