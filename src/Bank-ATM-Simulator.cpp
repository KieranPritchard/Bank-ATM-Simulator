#include <iostream>
#include <cstdlib>

using namespace std;

// Makes the user login to the program
bool login(){
    int pin_number = 0;

    cout << "Please input your pin number: ";
    cin >> pin_number;
    cout << "\n";

    if(pin_number == 1234){
        return true;
    } else{
        return false;
    }
}

void balence_inquiry(int* ptr){
    cout << "\nYour Balance Is: £" << *ptr << endl;
}

void deposit_money(int* ptr){
    int deposit_amount = 0;
    cout << "\nPlease input the amount of money you want to deposit: ";
    
    cin >> deposit_amount;
    *ptr += deposit_amount;
    cout << "\nDeposit Successful. Your Balance is £" << *ptr;
}

void withdraw_money(int* ptr){
    int withdrawal_amount = 0;
    cout << "\nPlease input the amount of money you want to withdraw: ";
    cin >> withdrawal_amount;
    if(*ptr < 0){
        *ptr -= withdrawal_amount;
        cout << "\nWithdrawal Successful. Your Balance is £" << *ptr;

    } else{
        cout << "\nInsuffient balance. Withdrawal Failed.";
        withdraw_money(ptr);
    }
}

int main(){

    // Keeps looping until login() is true
    while (!login()){
    }

    // Balence pointer
    int balence = 1000;
    int* ptr = &balence;

    // Switch statement allows the user to access different functions of the program
    int choice;

    // Loops intill option 4 is used
    while (choice != 4){
        // Displayed text
        cout << "-----------------------------\n";
        cout << "What would you like to-do.\n";
        cout << "-----------------------------\n";
        cout << "(1) Balance Inquiry.\n";
        cout << "(2) Deposit Money.\n";
        cout << "(3) Withdraw Money.\n";
        cout << "(4) Log Out.\n";
        cout << "-----------------------------\n";
        cout << "Please select your option: ";
        cin >> choice;
        cout << "\n-----------------------------";

        switch (choice){
        case 1:
            balence_inquiry(ptr);
            break;
        
        case 2:
            deposit_money(ptr);
            break;
        
        case 3:
            withdraw_money(ptr);
            break;

        case 4:
            cout << "\nThank you for your custom.";
            break;    

        default:
            cout << "\nInvaild option. Please try again.";
            break;
        }
    }
    

    return 0;
}
