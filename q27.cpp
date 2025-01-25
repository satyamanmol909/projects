#include<iostream>
using namespace std;
int main()
{
    string n;
    char g;
    int a,c;
    cout<<"input the class name student =";
    cin>>n;
    cout<<"enter the age of the student =";
    cin>>a;
    cout<<"enter the class no. of the student =";
    cin>>c;
    cout<<"if student is male press m or not then press f"<<endl;
    cout<<"enter the gender  of the student =";
    cin>>g;
    cout<<system("cls");
    
    if(g=='m')
    {
        cout<<"name ="<<n<<endl<<"age ="<<a<<endl<<"class ="<<c<<endl<<"gender ="<<
        "male"<<endl;
        cout<<"student will be in section A";
    }
    else 
    {
        cout<<"name ="<<n<<endl<<"age ="<<a<<"class ="<<c<<endl<<"gender ="<<"female"<<endl;
        cout<<"student will be in section B";
    }
 

    return 0;
}



/*
input =name of student
age==
input== class 
student gender==male /female
male ==  section a
female ==section b
*/