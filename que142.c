#include <stdio.h>

enum Department {CSE, ECE, MECH, CIVIL, EE};

struct Student {
    int rollNo;
    char name[50];
    enum Department dept;
};

int main() {
    struct Student students[5] = {
        {101, "Amit", CSE},
        {102, "Priya", ECE},
        {103, "Rahul", MECH},
        {104, "Sneha", CIVIL},
        {105, "Karan", EE}
    };

    for(int i = 0; i < 5; i++) {
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name   : %s\n", students[i].name);
        switch(students[i].dept) {
            case CSE:   printf("Dept   : CSE\n"); break;
            case ECE:   printf("Dept   : ECE\n"); break;
            case MECH:  printf("Dept   : MECH\n"); break;
            case CIVIL: printf("Dept   : CIVIL\n"); break;
            case EE:    printf("Dept   : EE\n"); break;
        }
        printf("----------------------\n");
    }
    return 0;
}

