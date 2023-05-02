#include <stdio.h>
#include <string.h>
struct cube {
    //data members
    char S_name[15];
    char S_matric[15];
    int S_level;
    char S_program[15];
};
int main(){
    //structure variables
    struct cube s1, s2, s3, s4;
    //structure variables accessing the data members.
    strcpy(s1.S_name,"Peace");
    strcpy(s1.S_matric,"AUL/SCI/21/00726");
    s1.S_level=200;
    strcpy(s1.S_program,"CSC");
    strcpy(s2.S_name,"Prisca");
    strcpy(s2.S_matric,"AUL/SCI/21/00716");
    s2.S_level=200;
    strcpy(s2.S_program,"PYE");
    strcpy(s3.S_name,"Esther");
    strcpy(s3.S_matric,"AUL/SCI/21/00774");
    s3.S_level=200;
    strcpy(s3.S_program,"CSC");
    strcpy(s4.S_name,"Alheri");
    strcpy(s4.S_matric,"AUL/SCI/21/00878");
    s4.S_level=200;
    strcpy(s4.S_program,"CSC");
    printf("The name of the first student is %s\n", s1.S_name);
    printf("The Matric number of the first student is %s\n", s1.S_matric);
    printf("The Level of the first student is %d\n", s1.S_level);
    printf("The Program of the first student is %s\n", s1.S_program);
    printf("The name of the second student is %s\n", s2.S_name);
    printf("The Matric number of the second student is %s\n", s2.S_matric);
    printf("The Level of the second student is %d\n", s2.S_level);
    printf("The Program of the second student is %s\n", s2.S_program);
    printf("The name of the third student is %s\n", s3.S_name);
    printf("The Matric number of the third student is %s\n", s3.S_matric);
    printf("The Level of the third student is %d\n", s3.S_level);
    printf("The Program of the third student is %s\n", s3.S_program);
    printf("The name of the fourth student is %s\n", s4.S_name);
    printf("The Matric number of the fourth student is %s\n", s4.S_matric);
    printf("The Level of the fourth student is %d\n", s4.S_level);
    printf("The Program of the fourth student is %s\n", s4.S_program);

    return 0;
}