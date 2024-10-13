#include <iostream>
using namespace std;
int main(){

    // WAP to check passwordand otp using next if else

    int password,otp;
    cout << "Enter password" << "\n";
    cin >> password;
    if(password==2024){
        cout << "Enter opt" << "\n";
        cin >>otp;
        if(otp==2013){
            cout << "your r owner" << "\n";
        }
        else{
            cout << "your fraud" << "\n";
        }
        }
        else{
            cout << "Not match" << "\n";
            }

    }