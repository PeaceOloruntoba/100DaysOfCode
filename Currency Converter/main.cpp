#include <iostream>
#include <string>

using namespace std;

int main() {
    double dollar;
    string currency;
    cout<<"--------------------------------------------------------\n";
    cout<<"                   CURRENCY CONVERTER                 \n";
    cout<<"--------------------------------------------------------\n";
    
    cout<<"Enter the USD you want to convert: ";
    cin>>dollar;
    double pound, euro, rupee, naira;
    pound = dollar*0.73;
    euro = dollar*0.86;
    rupee = dollar*75.13;
    naira = dollar*461.31;

    cout<<"Enter INR to convert to INR.\nEnter GBP to convert to GBP.\nEnter EUR to convert to EUR.\nEnter NGN to convert to NGN.\n";
    cout<<"What do you want to convert the USD to: ";
    cin>>currency;

    if (currency == "INR"){
        cout<<"$"<<dollar<<" in rupees = "<<rupee<<endl;
    }else if (currency == "EUR"){
        cout<<"$"<<dollar<<" in euros = "<<euro<<endl;
    }else if (currency == "GBP"){
        cout<<"$"<<dollar<<" in pounds = "<<pound<<endl;
    }else if (currency == "NGN"){
        cout<<"$"<<dollar<<" in naira = "<<naira<<endl;
    }else{
        cout<<"Invalid Input!! Please Try Again!!.\n";
    }

    return 0;
}
