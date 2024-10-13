#include <iostream>
using namespace std;
int main() {
     int num1,num2;
     cout << "enter base" <<"\t";
     cin >> num1;
     cout << "enter power" <<"\t";
     
     cin >> num2;
     int ans=1;
     for(num2; num2>0;num2--){
       ans=ans*num1;
     }
      cout << "ans = " << ans << "\t";
}