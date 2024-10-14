#include <iostream>
using namespace std;
int main(){
    int num1, num2, HCF;
    cout << "Enter 1st numbre" <<"\n";
    cin >> num1;
    cout << "Enter 2nd numbre" <<"\n";
    cin >> num2;

     // calculating LCm here

     for(int i=1; i<=num1 || i <=num2; i++){
         if(num1%i==0 && num2%i==0) {
            HCF = i;
         }       
     }

     cout << "HCF of " << num1 << " and " << num2 << " is " << HCF;
}