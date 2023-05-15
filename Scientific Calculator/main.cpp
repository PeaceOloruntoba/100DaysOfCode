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
void log();
void sin();
void cos();
void tan();
void isin();
void icos();
void itan();

int main(){
    int choice;
    cout<<"\t\t Welcome to the Scientific Calculator, developed by Peace Oloruntoba\n"<<endl;
    cout<<"*******Press 0 to quit the program*******\n"<<endl;
    cout<<"Enter 1 for Addition\n";
    cout<<"Enter 2 for Subtraction\n";
    cout<<"Enter 3 for Multiplication\n";
    cout<<"Enter 4 for Division\n";
    cout<<"Enter 5 for Factorial\n";
    cout<<"Enter 6 for Power\n";
    cout<<"Enter 7 for Square\n";
    cout<<"Enter 8 for Cube\n";
    cout<<"Enter 9 for SquareRoot\n";
    cout<<"Enter 10 for Logarithm\n";
    cout<<"Enter 11 for Sine\n";
    cout<<"Enter 12 for Cos\n";
    cout<<"Enter 13 for Tan\n";
    cout<<"Enter 14 for Inverse Sin\n";
    cout<<"Enter 15 for Inverse Cos\n";
    cout<<"Enter 16 for Inverse Tan\n\n";

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
            case 10:
                log();
                break;
            case 11:
                sin();
                break;
            case 12:
                cos();
                break;
            case 13:
                tan();
                break;
            case 14:
                isin();
                break;
            case 15:
                icos();
                break;
            case 16:
                itan();
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
}void log(){
    double b;
    cout<<"Enter the number you want the logarithm of: ";
    cin>>b;
    double logr = log10(b);
    cout<<"The logarithm of "<<b<<" is "<<logr<<endl;
}void sin(){
    double b;
    cout<<"Enter the number you want the SINE of: ";
    cin>>b;
    double sine = sin(b);
    cout<<"The SINE of "<<b<<" is "<<sine<<endl;
}void cos(){
    double b;
    cout<<"Enter the number you want the COSINE of: ";
    cin>>b;
    double cose = cos(b);
    cout<<"The COSINE of "<<b<<" is "<<cose<<endl;
}void tan(){
    double b;
    cout<<"Enter the number you want the TANGENT of: ";
    cin>>b;
    double tane = tan(b);
    cout<<"The TANGENT of "<<b<<" is "<<tane<<endl;
}void isin(){
    float PI = 3.14159265;
    double b;
    cout<<"Enter the number you want the inverse sine of: ";
    cin>>b;
    double isine = asin(b)*180.0/PI;
    cout<<"The inverse sine of "<<b<<" is "<<isine<<endl;
}void icos(){
    float PI = 3.14159265;
    double b;
    cout<<"Enter the number you want the inverse sine of: ";
    cin>>b;
    double icose = acos(b)*180.0/PI;
    cout<<"The inverse cos of "<<b<<" is "<<icose<<endl;
}void itan(){
    float PI = 3.14159265;
    double b;
    cout<<"Enter the number you want the inverse sine of: ";
    cin>>b;
    double itane = atan(b)*180.0/PI;
    cout<<"The inverse tan of "<<b<<" is "<<itane<<endl;
}
