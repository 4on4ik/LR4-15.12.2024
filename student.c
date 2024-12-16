#include <stdio.h>
#include <math.h>
#include <malloc.h>

typedef struct student {
    char name[20];
    int age;
    float middle_grade;
} Student;

int changeGrade(Student *student, float new_grade) {
    if (student != NULL){
        student->middle_grade = new_grade;
    }
    return 0;
}


int isHonorStudent(Student *student) {
    if (student->middle_grade >= 4.5) {
        printf("Student %s is a Honor Student\n", student -> name);
        return 1;
    } else {
        printf("Student %s not a Honor Student\n", student -> name);
        return 0;
    }
}
