#include <stdio.h>

enum Department {CSE, ECE, MECH, CIVIL, EE};

struct Student {
    int rollNo;
    char name[50];
    enum Department dept;
    int marks;
};

void printStudent(struct Student s) {
    printf("Roll No: %d\n", s.rollNo);
    printf("Name   : %s\n", s.name);
    printf("Marks  : %d\n", s.marks);
    switch(s.dept) {
        case CSE:   printf("Dept   : CSE\n"); break;
        case ECE:   printf("Dept   : ECE\n"); break;
        case MECH:  printf("Dept   : MECH\n"); break;
        case CIVIL: printf("Dept   : CIVIL\n"); break;
        case EE:    printf("Dept   : EE\n"); break;
    }
    printf("----------------------\n");
}

int main() {
    struct Student s1 = {101, "Amit", CSE, 90};
    struct Student s2 = {102, "Priya", ECE, 85};

    printStudent(s1);
    printStudent(s2);

    return 0;
}

