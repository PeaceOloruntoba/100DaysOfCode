#include <stdio.h>
#include <string.h>

// struct Student {
//     char name[50];
//     char matric[20];
//     char program[20];
//     struct score{
//         int ca;
//         int exam;
//         int total;
//     } scr;
// };

struct score{
    int ca;
    int exam;
    int total;
};
struct Student{
    char name[50];
    char matric[20];
    char program[20];
    struct score scr;
};

int main()
{
    int i;
    struct Student stu[3];.
    for(i=0; i<3; i++){
        printf("\tEnter the Student's %d details:\n", i+1);
        printf("Enter Name: ");
        scanf("%s", stu[i].name);
        printf("Enter Matric No: ");
        scanf("%s", stu[i].matric);
        printf("Enter Program: ");
        scanf("%s", stu[i].program);
        printf("Enter CA Score: ");
        scanf("%d", &stu[i].scr.ca);
        printf("Enter Exam Score: ");
        scanf("%d", &stu[i].scr.exam);
        stu[i].scr.total=stu[i].scr.ca+stu[i].scr.exam;
    }
    for(i=0; i<3; i++){
        printf("\tStudent's %d details include:\n", i+1);
        printf("Name: %s\n", stu[i].name);
        printf("Matric No: %s\n", stu[i].matric);
        printf("Program: %s\n", stu[i].program);
        printf("CA Score: %d\n", stu[i].scr.ca);
        printf("Exam Score: %d\n", stu[i].scr.exam);
        printf("Total Score: %d\n\n", stu[i].scr.total);
    }
    printf("\n\n\t\tCopyright 2023 Peace Oloruntoba");
    return 0;
}
