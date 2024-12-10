#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter number" << "\t";
    cin >> number;
    int ans =0;
    

    for(int i=number; i>0;i=i/10){
        int digit=i%10;
        ans= (ans * 10 + digit);
    }
    if(ans==number){
        cout << "palindraome number" << "\t";
    }
    else{
        cout << "Not a palindrame number" << "\n";
    }
}