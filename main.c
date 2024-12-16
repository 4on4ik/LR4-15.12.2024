#include "student.h"
#include "course.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
/* В данном тест-кейсе проверяется возможность программы на создание студентов. в данной ситуации было создано 7 студентов, которые дальше помогут нам находить баги и
 проверять целостность кода.*/
    Student student1 = {"Alice", 18 , 5.0};
    isHonorStudent(&student1);
    Student student2 = {"Bob", 23, 3.8};
    isHonorStudent(&student2);
    printf("The program shows how it can calculate whether a student is an excellent student or not\n");
    Student student3 = {"Frank", 20, 4.3};
    Student student4 = {"F", 20, 4.4};
    Student student5 = {"Fr", 20, 4.5};
    Student student6 = {"Fra", 20, 4.6};
    Student student7 = {"Fran", 20, 4.5};
//В данном моменте кода мы проверяем возможность создания курса 
    Course course1 = {"Mathematics", 14, 5.0};
//Если написать после changeGrade printf("%f",&student6 -> middle_grade), то мы увидим изменение оценки шестого студента
    printf("Grade of Bob before: %f\n", student2.middle_grade);
    changeGrade(&student2, 4.0);
    printf("Grade of Bob after: %f\n", student2.middle_grade);
//В данной ф-ии мы проверяем возможность добавления студентов
    addStudentToCourse(&course1,&student1);    
    addStudentToCourse(&course1,&student2);
    addStudentToCourse(&course1,&student3);
    addStudentToCourse(&course1,&student4);
    addStudentToCourse(&course1,&student5);
    addStudentToCourse(&course1,&student6);
//Функция проверяет, что один из добавленных студентов и вправду был добавлен на курс и его можно на нем найти
    printf("Random student in course: %s\n", student3.name);
//Данный студент не может быть добавлен в курс, тк курс был переполнен(В данном коде я не стал писать 50 студентов для уменьшения кода)
    addStudentToCourse(&course1,&student7);
//C помощью последней функции мы проверяем возможность функции находить студента с максимальной оценкой в курсе
    findMaxGradeStudent(&course1);
    
    return 0;
}
/*Чтобы программа запустилась в терминал введите: 
gcc -o program main.c student.c course.c
./program
 */
