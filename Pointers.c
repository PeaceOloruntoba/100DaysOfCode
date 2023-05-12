#include <stdio.h>

int main() {
    int num = 42;  // A sample integer variable
    int *ptr;     // Pointer declaration

    ptr = &num;   // Assigning address of num to the pointer

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value stored in pointer ptr: %p\n", ptr);
    printf("Value pointed by pointer ptr: %d\n", *ptr);

    *ptr = 99;    // Modifying the value using the pointer

    printf("Updated value of num: %d\n", num);

    return 0;
}
