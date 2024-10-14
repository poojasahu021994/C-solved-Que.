#include <iostream>
using namespace std;
int main(){
    
    int number,frist_number,last;
    cout << "Enter number" << "\n";
    cin >> number;


    if(number > 0){
     last = number%10;
    }

    while(number > 0){
    frist_number =number%10;
        number = number/10;
    }
    cout << frist_number << last;
}