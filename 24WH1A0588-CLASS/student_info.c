#include <stdio.h>
#include<string.h>

struct Student_info{
    char name[50];
    int age;
    float marks;
}s1;

int main() {
     

    strcpy(s1.name, "John Doe"); 
    s1.age = 20;
    s1.marks = 90.5;

    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
