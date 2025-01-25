#include <iostream>
using namespace std;
int main()
{
    char c;
    int age;
    string di,sa;
    cout <<"enter a person is male or female "<<" ";
    cin>> c ;
    if(c='m')
    {
        cout <<"the person is eligible for license"<<" "<<endl;
        cout <<"enter the age of male person";
        cin>> age;
        if(age>=21)
        {
            cout<<"enter marritel status"<<endl;
            cout<<"married for y and not for n"<<" ";
            cin>>c;
            if(c='y')
            {
            cout <<"the person is eligible for license"<<endl;
            cout <<"person has to pay 2500";
            
            }
            else if(c='n'){
                cout<<"the person is unmarrige "<<"person has to pay 1000"<<endl;
            }
        }
        else{
            cout<<"person is not eligibel for licence";

        }
    }
    else if(c='f')
    {
        cout <<"the woman is eligible for license"<<endl;
        cout <<"enter the age of female person"<< " ";
        cin>> age;
        if(age>=18)
        {
            cout<<"enter marritel status"<<" ";
            cout<<"married for y or not for n"<< " ";
            cin>>c;
            if(c='y')
            {
            cout <<"the woman is eligible for license"<<endl;
            cout <<"womman has to pay 1800";
            
            }
            else if(c='n'){
                cout<<"the woman is unmarrige "<<"woman has to pay 1000";
            }
        }
        else{
            cout<<"pwoman is not eligibel for licence";

        }
    }
    return 0;
}