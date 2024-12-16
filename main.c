#include "student.h"
#include "course.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
/* В данном тест-кейсе проверяется возможность программы на создание студентов. в данной ситуации было создано 7 студентов, которые дальше помогут нам находить баги и
 проверять целостность кода. В последующем будет проверяться целостность всех данных*/
    Student student1 = {"Alice", 18 , 5.0};
    Student student2 = {"Bob", 23, 3.8};
    Student student3 = {"Frank", 20, 4.3};
    Student student4 = {"F", 20, 4.4};
    Student student5 = {"Fr", 20, 4.5};
    Student student6 = {"Fra", 20, 4.6};
    Student student7 = {"Fran", 20, 4.5};
//В данном моменте кода мы проверяем возможность создания курса 
    Course course1 = {"Mathematics", 14, 5.0};
//Если написать после changeGrade printf("%f",&student6 -> middle_grade), то мы увидим изменение оценки шестого студента
    changeGrade(&student6, 3.0);
//В данно строчке  кода мы проверяем программу на вычисление является ли студент отличником или нет. Мы отчетвливо можем видеть разницу между успешным исходом и не успешным.
    isHonorStudent(&student6);
    isHonorStudent(&student7);
//В данной ф-ии мы проверяем возможность добавления студентов
    addStudentToCourse(&course1,&student1);    
    addStudentToCourse(&course1,&student2);
    addStudentToCourse(&course1,&student3);
    addStudentToCourse(&course1,&student4);
    addStudentToCourse(&course1,&student5);
    addStudentToCourse(&course1,&student6);
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
