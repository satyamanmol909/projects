
#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    int p_choice,again;
    int c_choice= rand() % 3;
    cout << "Press 0 for Rock,\n1 for Paper,\n2 for Scissors" << endl;

    asd:
    cout<<endl;
    cout << "Enter the player's choice: ";
    cin >> p_choice;
    if(p_choice<=2){
    
        // Check for a draw
        if (p_choice == c_choice) {
            cout << "\tDRAW\n";
            cout << "Both choices are the same!"<<endl << endl;
        }
       
        else if ((c_choice == 0 && p_choice == 2) || (c_choice == 1 && p_choice == 0) || (c_choice == 2 && p_choice == 1)) 
        {

            cout << "Computer wins!" << endl;
            
        }
        else {
            cout << "Player wins!" << endl;
        }
        cout<<"computer choice :"<<c_choice<<endl;
        cout<<"player choice :"<<p_choice<<endl;
        cout<<"if want to play again press 5 :";
        cin>>again;
        if(again==5)
        {
            goto asd;
        }
        }
    else{
        cout<<"wrong choice"<<endl;
        cout<<"if want to play again press 5 :";
        cin>>again;
        if(again==5)
        {
            goto asd;
        }
    }

    
    return 0;
}
