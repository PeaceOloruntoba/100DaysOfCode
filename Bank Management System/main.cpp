#include <iostream>

using namespace std;

class Bank{
    private:
        char name[20];
        char Ac[10];
        char Ac_type[10];
        int initial, deposit, withdraw;
    public:
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
}

int main() {
    Bank B;
    B.menu();

    return 0;
}
