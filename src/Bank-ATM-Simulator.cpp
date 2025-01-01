#include <iostream>
#include <cstdlib>

using namespace std;

bool login(){
    int pin_number = NULL;

    cout << "Please input your pin number.";
    cin >> pin_number;

    if(pin_number == 1234){
        return true;
    } else{
        return false;
    }
}

int main(){
    while (login() == false){
        login();
    }
    
    while (true){
        cout << "Please select your option:\n";
        cout << "(1) Balance Inquiry.\n";
        cout << "(2) Deposit Money.\n";
        cout << "(3) Withdraw Money.\n";
        cout << "(4) Log Out.\n";

        int choice = 0;

        switch (choice){
        case 1:
            balence_inquiry();
            break;
        
        case 2:
            deposit_money();
            break;
        
        case 3:
            withdraw_money();
            break;

        case 4:
            break;    

        default:
            break;
        }
    }
    

    return 0;
}
