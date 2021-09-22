#include <stdio.h>
#include <stdlib.h>

struct Foo{};

typedef struct{
    char* name;
    int age;
    int weight;
    int height;
}Profile;

Profile p = {.name = "Stephan", .age = 22, .weight = 220, .height = 70};

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
    
}

int main(void)
{
    NodeT node = {.data = 10};
    // printf("My name is: %s\n", p.name);
    // printf("Age: %d\n", p.age);
    // printf("Weight: %d\n", p.weight);
    // printf("Height(inches): %d\n", p.height);
    // return 0;
}