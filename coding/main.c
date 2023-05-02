#include <stdio.h>
#include <string.h>
struct cube {
    //data members
    int ID;
    char name[10];
    char gender;
};
//function that accepts a structure variable as arguments.
void passByValue(struct cube p){
    p.ID=102; //this modification does not affect P1's ID.
    //print details
    printf("The patient's ID is: %d \n",p.ID);
    printf("The patient's name is: %s \n",p.name);
    printf("The patient's gender is: %c \n",p.gender);
}
int main()
{

    return 0;
}

