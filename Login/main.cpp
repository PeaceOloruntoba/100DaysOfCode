#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

void login();
void registration();
// void forgot();

int main() {
    int c;
    cout<<"\t\t\t---------------------------------------------------------\n\n\n";
    cout<<"\t\t\t                Welcome to the Login page                \n\n\n";
    cout<<"\t\t\t----------------           Menu           ---------------\n\n\n";
    cout<<"\t\t\t                                                         \n\n\n";
    cout<<"\t| Press 1 to LOGIN                     |"<<endl;
    cout<<"\t| Press 2 to REGISTER                  |"<<endl;
    cout<<"\t| Press 3 if you forgot your password  |"<<endl;
    cout<<"\t| Press 4 to EXIT                      |"<<endl;
    cout<<"\n\t Please enter your choice: ";
    cin>>c;
    cout<<endl;

    switch(c){
        case 1:
            login();
            break;
        case 2:
            registration();
            break;
        // case 3:
        //     forgot();
        //     break;
        case 4:
            cout<<"\t Thank you !!\n\n";
            break;
        default:
            system("cls");
            cout<<"\t Please select from the option below.\n"<<endl;
            main();
            break;
        
    }
    return 0;
}

void login(){
    int count;
    string userId, password, id, pass;
    system("cls");
    cout<<"\t Please enter the username and password:"<<endl;
    cout<<"\t USERNAME: ";
    cin>>userId;
    cout<<"\t PASSWORD: ";
    cin>>password;
    
    ifstream input("records.txt");

    while(input>>id>>pass){
        if(id==userId && pass==password){
            count=1;
            system("cls");
        }
    }
    input.close();
    if(count==1){
        cout<<userId<<"\nYou are successfully logged in\nThanks for loggin in!!\n";
        main();
    }
    else{
        cout<<"\nLOGIN ERROR\nIncorrect username or password\n";
        main();
    }
}
void registration(){
    string ruserId, rpassword, rid, rpass;
    system("cls");
    cout<<"\tEnter the username: ";
    cin>>ruserId;
    cout<<"\tEnter the password: ";
    cin>>rpassword;

    ofstream f1("records.txt", ios::app);
    f1<<ruserId<<' '<<rpassword<<endl;
    system("cls");
    cout<<"\n\tRegistration is successful!!\n";
    main();
}
// void forgot(){
//     int option;
//     system("cls");
//     cout<<"\tYou forgot your password? No worries\n";
//     cout<<"Press 1 to search your id by username"<<endl;
//     cout<<"Press 2 to go back to the main menu"<<endl;
//     cout<<"\tEnter your choice: ";
//     cin>>option;
//     switch(option){
//         case 1:
//             int count=0;
//             string suserId, sId,spass;
//             cout<<"\n\tEnter the username which you remembered"
//     }
// }