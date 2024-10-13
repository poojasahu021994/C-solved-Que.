#include <iostream>
using namespace std;
int main() {
    int number,count,sum=0;
    cout << "enter 3 digit number" << '\n';
    cin >> number;
    int orignale_value=number;
    if(number >100 && number <= 999){
        // for(number; number>0; number=number/10){
        while(number>0){
            count =number%10;
            sum = sum+(count*count*count);
            number = number/10;
        }
        if(sum=orignale_value){
            cout << "It is Armstrong number" << "\n";
            cout << orignale_value << "\n";

        }
        else{
            cout << "It is not Armstrong number" << "\n";
        }
        }
        else {
            cout << "Invailed number";
        }
       
}