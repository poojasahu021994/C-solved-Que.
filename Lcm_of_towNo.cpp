#include <iostream>
using namespace std;
int main(){

    // int num1, num2, lcm;
    // cout << "Enter 1st numbre" <<"\n";
    // cin >> num1;
    // cout << "Enter 2nd numbre" <<"\n";
    // cin >> num2;

    //  // calculating LCm here

    //  for(int i=1; i<=num1 || i <=num2; i++){
    //      if(num1%i==0 && num2%i==0) {
    //         lcm = i;
    //      }       
    //  }
    //  cout << lcm << "\n";
    //  lcm =(num1*num2)/lcm;
    //  cout << "LCM of " << num1 << " and " << num2 << " is " << lcm;


    int num1, num2, max;
    cout << "Enter 1st numbre" <<"\n";
    cin >> num1;
    cout << "Enter 2nd numbre" <<"\n";
    cin >> num2;

    max =num1>num2 ? num1:num2;
    while(true) 
    {
        if(max%num1==0 && max%num2==0){
            cout << max;
            break;
        }
        max++;
    }



}