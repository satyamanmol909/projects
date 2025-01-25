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
    double atm_no;
    int password;
    struct date exp;
    string atm_user;


};
class bank_account:public ATM
{
    public:
    string user_name,bank_name;
    double account_no;
    double balance;

};
class user:public bank_account
{
    public:
    string name,phone_no,email_id,adhar_no,pan_no;
    int atm_pin;
    int d_money,f_atm_password;
    struct date c;

    void in()
    {
        cout<<"enter the user name";
        cin>>atm_user;
        cout<<"enter the atm number";
        cin>>atm_no;
        cout<<"enter the expiry date"<<endl;
        cout<<"enter the month";
        cin>>exp.month;
        cout <<"enter the year ";
        cin>>exp.year;
        cout<<"enter the password of the atm";
        cin>>password;
        cout<<"\t\t enter the bank details"<<endl;
        cout<<"enter the bank name"<<endl;
        cin>>bank_name;
        cout<<"enter the user name"<<endl;
        cin>>user_name;
        cout<<"enter the account number";
        cin>>account_no;
        cout<<"enter the balance";
        cin>>balance;
        cout<<"\t\tenter the user details";
        cout<<"enter the current date"<<endl;
        cout<<"enter the day";
        cin>>c.day;
        cout<<"enter the month";
        cin>>c.month;
        cout<<"enter the year";
        cin>>c.year;
        cout<<"enter the user name";
        cin>>name;
        cout<<"enter the phone number";
        cin>>phone_no;
        cout<<"enter the email id";
        cin>>email_id;
        cout<<"enter the adhar number";
        cin>>adhar_no;
        cout<<"enter the pan number";
        cin>>pan_no;
        cout<<"enter the atm pin";
        cin>>atm_pin;
        if(atm_pin==password)
        {
            cout<<"welcome to the atm"<<endl;
            cout<<"enter how much money do you want";
            cin>>d_money;
            if(d_money<=balance)
            {
                cout<<"enter the atm pin to debit money";
                cin>>f_atm_password;
                if(f_atm_password==atm_pin)
                {
                    cout<<"your money has been debited"<<d_money<<endl;
                }
                else{
                    cout<<"wrong atm pin"<<endl;
                }

            }
            else{
                cout<<"insufficient balance"<<endl;
            }
            
            

        }

    }
    void out()
    {
        cout<<system("cls");
        cout<<"date "<<c.day<<":"<<c.month<<":"<<c.year<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"account number :"<<account_no<<endl;
        cout<<"debited balance :"<<d_money<<endl;
        cout<<"remain balance :"<<balance-d_money<<endl<<endl<<endl;
        cout<<"sign__________"<<"\t\t\t\t"<<"__________stamp";

    }
};
int main()
{
    int password;
    user u;
    u.in();
    u.out();
    cout<<password;
    return 0;

}