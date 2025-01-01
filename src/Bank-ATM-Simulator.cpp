#include <iostream>
#include <cstdlib>

using namespace std;

// Makes the user login to the program
bool login(){
    int pin_number = 0;

    cout << "Please input your pin number.";
    cin >> pin_number;

    if(pin_number == 1234){
        return true;
    } else{
        return false;
    }
}

int balence_inquiry(int* ptr){
    cout << "Your Balance Is: £" << &ptr << endl;
}

int main(){

    // Keeps looping until login() is true
    while (!login()){
        
    }

    // Loops intill option 4 is used
    while (true){
        // Displayed text
        cout << "Please select your option:\n";
        cout << "(1) Balance Inquiry.\n";
        cout << "(2) Deposit Money.\n";
        cout << "(3) Withdraw Money.\n";
        cout << "(4) Log Out.\n";

        // Balence pointer
        int balence;
        int* ptr = &balence;

        // Switch statement allows the user to access different functions of the program
        int choice = 0;

        switch (choice){
        case 1:
            balence_inquiry(ptr);
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
