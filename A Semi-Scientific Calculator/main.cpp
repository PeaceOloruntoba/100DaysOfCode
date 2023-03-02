#include <iostream>
#include <cstdlib>
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
