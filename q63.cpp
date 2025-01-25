//program to create currency converter
#include<iostream>
using namespace std;
void rupees()
{
    double money,return_m;
    cout<<"Enter the amount in doller ";
    cin>>money;
    return_m=money*84.46;
   cout<<"money="<<return_m;
 }
 void doller()
 {
    double money,return_m;
    cout<<" Enter the amount in rupees ";
    cin>>money;
     return_m=money*0.012;
     cout<<"money ="<<return_m;
    
 }
 void euro()
 {
    double money,return_m;
    cout<<" Enter the amount in euro ";
    cin>>money;
    return_m=money*89.29;
    cout<<"money ="<<return_m;

 }
 void r_euro()
 {
    double money,return_m;
    cout<<"enter the money in rupees ";
    cin>>money;
    return_m=money*0.011;
    cout<<"money ="<<return_m;
    
 }

int main()
{
    int n;
    cout<<"enter the choice"<<endl;
    cout<<"press 1 to comvert money in dollar to rupees"<<endl;
    cout<<"press 2 to convert money in rupees to dollar"<<endl;
    cout<<"press 3 to convert money in euro to rupees"<<endl;
    cout<<"press 4 to convert money in rupees to euro"<<endl;
    
   cin>>n;
   switch(n)
   {
    case 1:
        {
            rupees();
            break;
        }
    case 2:
    {
        doller();
        break;
    }
    case 3:
    {
        euro();
        break;

    }
    case 4:
    {
        r_euro();
        break;

    }
    default:
        cout<<"wrong choice";
   }

   return 0;
}
/*
US Dollar (USD): 1 INR ≈ 0.012 USD
Euro (EUR): 1 INR ≈ 0.011 EUR
British Pound (GBP): 1 INR ≈ 0.0098 GBP
Japanese Yen (JPY): 1 INR ≈ 1.84 JPY
Australian Dollar (AUD): 1 INR ≈ 0.019 AUD
Canadian Dollar (CAD): 1 INR ≈ 0.017 CAD
Chinese Yuan (CNY): 1 INR ≈ 0.088 CNY
Swiss Franc (CHF): 1 INR ≈ 0.011 CHF
Russian Ruble (RUB): 1 INR ≈ 1.18 RUB
Bangladeshi Taka (BDT): 1 INR ≈ 1.31 BDT
Pakistani Rupee (PKR): 1 INR ≈ 3.73 PKR
Sri Lankan Rupee (LKR): 1 INR ≈ 3.97 LKR
Nepalese Rupee (NPR): 1 INR ≈ 1.60 NPR
Saudi Riyal (SAR): 1 INR ≈ 0.046 SAR
UAE Dirham (AED): 1 INR ≈ 0.045 AED*/