typedef struct course{
    char name[60];
    int num_of_students;
    float max_grade;
} Course;

void addStudentToCourse(Course *course, Student *new_student);

int findMaxGradeStudent(Course *course);
