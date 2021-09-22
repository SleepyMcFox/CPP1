#include <stdio.h>
#include <stdlib.h>

struct Foo{};

// typedef struct{
//     char* name;
//     int age;
//     int weight;
//     int height;
// }Profile;

// Profile p = {.name = "Stephan", .age = 22, .weight = 220, .height = 70};

typedef struct Node{
    int data;
    struct Node *next;
}NodeT;

NodeT *init(const int n){
    NodeT *node = (NodeT *)malloc(sizeof(NodeT)); //NodeT will equate to 8 bytes
    node->data = n;
    node->next = NULL;
    return node; 
}

NodeT *destroy(NodeT * node){
    NodeT *next = node->next;
    free(node);
    return next;
}

void append(NodeT **head, int new_data){
    NodeT *node = init(new_data);
    NodeT *last = *head;
    if(*head == NULL)
    {
        *head = node;
        return;
    }

    while(last->next != NULL)
    {
        last = last->next;
    }
    last->next = node;
}

void print(NodeT *head)
{
    NodeT *tmp = head;

    while(tmp->next != NULL)
    {
        printf("%d", tmp->data);
        tmp = tmp->next;
    }
    printf("%d",tmp->data);
}
