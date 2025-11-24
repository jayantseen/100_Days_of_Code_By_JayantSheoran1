#include <stdio.h>

enum Department {CSE, ECE, MECH, CIVIL, EE};

struct Student {
    int rollNo;
    char name[50];
    enum Department dept;
    int marks;
};

int main() {
    struct Student students[5] = {
        {101, "Amit", CSE, 78},
        {102, "Priya", ECE, 85},
        {103, "Rahul", MECH, 92},
        {104, "Sneha", CIVIL, 67},
        {105, "Karan", EE, 80}
    };

    int maxIndex = 0;
    for(int i = 1; i < 5; i++) {
        if(students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("Student with highest marks:\n");
    printf("Roll No: %d\n", students[maxIndex].rollNo);
    printf("Name   : %s\n", students[maxIndex].name);
    printf("Marks  : %d\n", students[maxIndex].marks);

    switch(students[maxIndex].dept) {
        case CSE:   printf("Dept   : CSE\n"); break;
        case ECE:   printf("Dept   : ECE\n"); break;
        case MECH:  printf("Dept   : MECH\n"); break;
        case CIVIL: printf("Dept   : CIVIL\n"); break;
        case EE:    printf("Dept   : EE\n"); break;
    }

    return 0;
}

