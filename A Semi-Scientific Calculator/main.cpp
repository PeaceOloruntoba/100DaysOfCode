#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void addition();
void subtraction();
void multiplication();
void division();
void factorial();
void power();
void square();
void cube();
void squareroot();

int main(){
    int choice;
    cout<<"\t\t Welcome to the semi-scientific Calculator, developed by Peace Oloruntoba C.E.O. Edge||Tech!! \n"<<endl;
    cout<<"*******Press 0 to quit the program*******\n"<<endl;
    cout<<"Enter 1 for Addition\n";
    cout<<"Enter 2 for Subtraction\n";
    cout<<"Enter 3 for Multiplication\n";
    cout<<"Enter 4 for Division\n";
    cout<<"Enter 5 for Factorial\n";
    cout<<"Enter 6 for Power\n";
    cout<<"Enter 7 for Square\n";
    cout<<"Enter 8 for Cube\n";
    cout<<"Enter 9 for SquareRoot\n\n";

    while(1){
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 0:
                exit(0);
                break;
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                factorial();
                break;
            case 6:
                power();
                break;
            case 7:
                square();
                break;
            case 8:
                cube();
                break;
            case 9:
                squareroot();
                break;
            default:
                cout<<"\n*******Wrong choice, Enter `valid` choice!!*******\n\n";
                break;
        }
    }
    return 0;
}

void addition(){
    int a,b;
    cout<<"Enter the numbers you want to add: ";
    cin>>a>>b;
    cout<<"The addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
}
void subtraction(){
    int a,b;
    cout<<"Enter the two numbers you want to subtract: ";
    cin>>a>>b;
    cout<<"The subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
}
void multiplication(){
    int a,b;
    cout<<"Enter the two numbers you want to multiply: ";
    cin>>a>>b;
    cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
}
void division(){
    int a,b;
    cout<<"Enter the two numbers you want to divide: ";
    cin>>a>>b;
    cout<<"The division of "<<a<<" and "<<b<<" is "<<(float)a/(float)b<<endl;
}
void factorial(){
    // n! = n(n-1)(n-2)...3*2*
    // 4! = 4*3*2*1 = 24
    // 0! = 1;
    int n;
    cout<<"Enter the number you want the factorial of: ";
    cin>>n;
    int fact=1;
    for(int i=0;i<=n;i++){
        fact=fact*1;
    }
    cout<<"The factorial of "<<n<<" is "<<fact<<endl;
}
void power(){
    // 2^4 = 2*2*2*2 = 16
    // pow(b,e);
    // pow(2,4);
    double b, e;
    cout<<"Enter the base and exponent: ";
    cin>>b>>e;
    double power = pow(b,e);
    cout<<"The solution for base "<<b<<" and exponent "<<e<<" is "<<power<<endl;
}
void square(){
    // n^2 = n*n
    // 2^2 = 2*2 = 4
    double b;
    cout<<"Enter the number you want the square of: ";
    cin>>b;
    double power = pow(b,2);
    cout<<"The square of "<<b<<" is "<<power<<endl;
}
void cube(){
    // n^2 = n*n*n
    // 2^3 = 2*2*2 = 8
    double b;
    cout<<"Enter the number you want the cube of: ";
    cin>>b;
    double power = pow(b,3);
    cout<<"The cube of "<<b<<" is "<<power<<endl;
}
void squareroot(){
    double b;
    cout<<"Enter the number you want the square root of: ";
    cin>>b;
    double squareRoot = sqrt(b);
    cout<<"The square root of "<<b<<" is "<<squareRoot<<endl;
}