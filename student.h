
typedef struct{
    char name[20];
    int age;
    float middle_grade;
} Student;

void changeGrade(Student *student, float new_grade);

int isHonorStudent(Student *student);
