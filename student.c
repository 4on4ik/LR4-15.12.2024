#include <stdio.h>
#include <math.h>

typedef struct student {
    char name[20];
    int age;
    float middle_grade;
} Student;

int changeGrade(Student *student, float new_grade) {
    if (student != NULL){
        student->middle_grade = new_grade;
//      printf("%f\n",student->middle_grade);

    }
    return 0;
}


int isHonorStudent(Student *student) {
    if (student->middle_grade >= 4.5) {
        printf("He is a Honor Student\n");
        return 1;
    } else {
        printf("He is not a Honor Student\n");
        return 0;
    }
}
