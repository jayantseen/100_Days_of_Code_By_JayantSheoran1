#include <stdio.h>

enum Department {HR, SALES, IT, FINANCE, ADMIN};

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int empId;
    char name[50];
    enum Department dept;
    struct Date joiningDate;
};

int main() {
    struct Employee e1 = {1001, "Ramesh", IT, {15, 7, 2020}};
    struct Employee e2 = {1002, "Sita", HR, {1, 1, 2019}};

    printf("Employee Details:\n");

    printf("Emp ID : %d\n", e1.empId);
    printf("Name   : %s\n", e1.name);
    switch(e1.dept) {
        case HR:      printf("Dept   : HR\n"); break;
        case SALES:   printf("Dept   : SALES\n"); break;
        case IT:      printf("Dept   : IT\n"); break;
        case FINANCE: printf("Dept   : FINANCE\n"); break;
        case ADMIN:   printf("Dept   : ADMIN\n"); break;
    }
    printf("Joining Date: %02d-%02d-%04d\n", e1.joiningDate.day, e1.joiningDate.month, e1.joiningDate.year);
    printf("----------------------\n");

    printf("Emp ID : %d\n", e2.empId);
    printf("Name   : %s\n", e2.name);
    switch(e2.dept) {
        case HR:      printf("Dept   : HR\n"); break;
        case SALES:   printf("Dept   : SALES\n"); break;
        case IT:      printf("Dept   : IT\n"); break;
        case FINANCE: printf("Dept   : FINANCE\n"); break;
        case ADMIN:   printf("Dept   : ADMIN\n"); break;
    }
    printf("Joining Date: %02d-%02d-%04d\n", e2.joiningDate.day, e2.joiningDate.month, e2.joiningDate.year);
    printf("----------------------\n");

    return 0;
}

