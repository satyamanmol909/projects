
#include<iostream>
using namespace std;
struct date
{
    int day;
    int month;
    int year;

};
class ATM
{
    public:
    int atm_number;
    int atm_exp_date;
    int atm_pin;
    int account_no,balance,a_balanc,ammount;
    string name,bank_name;
    struct date a;
    
    void atm()
    {
        
        cout<<"Enter your ATM number:";
        cin>>atm_number;
        cout<<"Enter your ATM exp date:"<<endl;
        cout<<"enter the month ";
        cin>>a.month;
        cout<<"enter the year ";
        cin>>a.year;

        cout<<"Enter your ATM pin:";
        cin>>atm_pin;

    }
    void account()
    {
        cout<<"Enter your bank name:";
        cin>>bank_name;
        cout<<"Enter your account number:";
        cin>>account_no;
        cout<<"Enter your account balance:";
        cin>>balance;
    }

    void user()
    {
        cout<<"enter the user name";
        cin>>name;
        cout<<"enter the date"<<endl;
        cout<<"enter the day ";
        cin>>a.day;
        cout<<"enter the month ";
        cin>>a.month;
        cout<<"enter the year ";
        cin>>a.year;

        cout<<"enter how much money do you nedd";
        cin>>ammount;
        if(ammount<=balance)
        {
            cout<<"provide the ammount ="<<ammount;
            a_balanc=balance-ammount;
        }
        else
        {
            cout<<"you have not enough money to debit \n please check you bank ammount"; 
        }
    }
    void bill()
    {
        
        cout<<system("cls");
        cout<<endl;
        cout<<" \t\tbill "<<endl;
        cout<<"date="<<a.day<<":"<<a.month<<":"<<a.year<<endl;
        cout<<"name ="<<name<<endl;
        cout<<"bank name="<<bank_name<<endl;
        cout<<"balance ="<<balance<<endl;
        cout<<"avilibel balance ="<<a_balanc<<endl;
        cout<<"sign ______________\t\t\t\t\t\t_____________bank stamp";
        

    }

};
int main()
{
    ATM t;
    t.atm();
    t.account();
    t.user();
    t.bill();
    return 0;
}