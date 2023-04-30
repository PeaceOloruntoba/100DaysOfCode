#include <iostream>

using namespace std;

class Bank{
    private:
        char name[20];
        char Ac[10];
        char Ac_type[10];
        int initial, deposit, withdraw;
    public:
        Bank(){
            name[20]=' ';
            Ac[10]=' ';
            Ac_type[10]=' ';
            initial=5000;
        }
        void menu();
        void create();
        void depo();
        void check();
        void wdraw();
        void display();
};
void Bank::menu() {
    int choice;
    cout<<"-------------------------------------------------------------------------"<<endl;
    cout<<"                          BANK MANAGEMENT SYSTEM                         "<<endl;
    cout<<"-------------------------------------------------------------------------"<<endl;
    cout<<"Choose from the menu below."<<endl;
    cout<<"1. Create ann account with us"<<endl;
    cout<<"2. Deposit Balance"<<endl;
    cout<<"3. Check Balance"<<endl;
    cout<<"4. Withdraw Balance"<<endl;
    cout<<"5. Account Holder's Details"<<endl;
    cout<<"6. Exit"<<endl;
    cin>>choice;
    if(choice==1){
        create();
        menu();
    }
    if(choice==2){
        depo();
        menu();
    }if(choice==3){
        check();
        menu();
    }
    if(choice==4){
        wdraw();
        menu();
    }if(choice==5){
        display();
        menu();
    }
}
void Bank::create(){
    cout<<"\n\tEnter name:";
    cin>>name;
    cout<<"\n\tEnter account number: ";
    cin>>Ac;
    cout<<"\n\tEnter account type: ";
    cin>> Ac_type;
}
void Bank::depo(){
    cout<<"\tEnter Deposit Amount:$";
    cin>>deposit;
}
void Bank::check(){
    initial = initial + deposit;
    cout<<"Total available fund is $"<<initial<<"."<<endl;
}
void Bank::wdraw(){
    cout<<"\tEnter Wihdrawal Amount:$";
    cin>>withdraw;
}
void Bank::display(){
    cout<<"\t\t TRANSACTION DETAILS \n\n";
    cout<<"Name: "<<name<<endl;
    cout<<"Account Number: "<<Ac<<endl;
    cout<<"Account type: "<<Ac_type<<endl;
    cout<<"Total Deposit: $"<<deposit;
    cout<<"Total Withdrawal: $"<<withdraw;
    cout<<"Available Balance: "<<initial-withdraw<<endl;
}

int main() {
    Bank B;
    B.menu();

    return 0;
}
