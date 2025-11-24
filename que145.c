#include <stdio.h>

enum Department {CSE, ECE, MECH, CIVIL, EE};

struct Student {
    int rollNo;
    char name[50];
    enum Department dept;
    int marks;
};

struct Student getTopStudent(struct Student students[], int n) {
    int maxIndex = 0;
    for(int i = 1; i < n; i++) {
        if(students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }
    return students[maxIndex];
}

int main() {
    struct Student students[5] = {
        {101, "Amit", CSE, 78},
        {102, "Priya", ECE, 85},
        {103, "Rahul", MECH, 92},
        {104, "Sneha", CIVIL, 67},
        {105, "Karan", EE, 80}
    };

    struct Student top = getTopStudent(students, 5);

    printf("Top Student Details:\n");
    printf("Roll No: %d\n", top.rollNo);
    printf("Name   : %s\n", top.name);
    printf("Marks  : %d\n", top.marks);

    switch(top.dept) {
        case CSE:   printf("Dept   : CSE\n"); break;
        case ECE:   printf("Dept   : ECE\n"); break;
        case MECH:  printf("Dept   : MECH\n"); break;
        case CIVIL: printf("Dept   : CIVIL\n"); break;
        case EE:    printf("Dept   : EE\n"); break;
    }

    return 0;
}

