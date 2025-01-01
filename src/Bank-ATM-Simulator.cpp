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

    return 0;
}
