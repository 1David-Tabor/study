#include <stdio.h>
#include <stdlib.h>

int main() {
    int age = 30;
    int * pAge = &age;
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;
    
    printf("The value at memory address %p is %d\a", pAge, *pAge);
}
