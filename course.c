#include <stdio.h>
#include <math.h>
#include "student.h"

#define Max_students 6

typedef struct course{
    char name[20];
    int num_of_students;
    Student students[Max_students];
    float max_grade;
}Course;


void addStudentToCourse(Course *course, Student *new_student){
    if(course -> num_of_students < Max_students){
        course ->students[course -> num_of_students] = *new_student;
        course -> num_of_students++;
        printf("Student %s was succesfully added to course %s\n", new_student->name, course->name);
    } else{
        printf("Course is full\n");
    }
}

int findMaxGradeStudent(Course *course) {
    float max_grade_student = course->students[0].middle_grade;
    for(int i = 1; i < course->num_of_students; i++){
        if(course->students[i].middle_grade > max_grade_student){
            max_grade_student = course->students[i].middle_grade;
        }
    }
    printf("Max_grade in course: %f\n", max_grade_student);
}
