#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    char x;
    while(true){
        cout<<"Welcome to Edge||Tech Simple Calculator"<<endl;
        cout<<"Enter the first number: ";
        cin>>num1;
        cout<<"Enter the second number: ";
        cin>>num2;
        cout<<"Press 'a' for addition"<<endl;
        cout<<"Press 'b' for subtraction"<<endl;
        cout<<"Press 'c' for multiplication"<<endl;
        cout<<"Press 'd' for division"<<endl;
        cout<<"Press 'e' for remainder"<<endl;
        cout<<"select an operation: ";
        cin>>x;
        if (x=='a')
            cout<<"The addition is equal to "<<num1+num2<<endl;
        else if (x=='b')
            cout<<"The subtraction is equal to "<<num1-num2<<endl;
        else if (x=='c')
            cout<<"The multiplication is equal to "<<num1*num2<<endl;
        else if (x=='d')
            cout<<"The division is equal to "<<num1/num2<<endl;
        else if (x=='e')
            cout<<"The remainder of the division is equal to "<<num1%num2<<endl;
        else
            cout<<"Wrong input!! Run the program again!!"<<endl;
    }
    return 0;
}
