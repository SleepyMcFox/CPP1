#include <stdio.h>
#include <libgen.h>

typedef struct{
    char* name;
    int age;
    int weight;
    int height;
}Profile;

Profile p = {.name = "Stephan", .age = 22, .weight = 220, .height = 70};

int main(void)
{
    printf("My name is: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Weight: %d\n", p.weight);
    printf("Height(inches): %d\n", p.height);
    return 0;
}