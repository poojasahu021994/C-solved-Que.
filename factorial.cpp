# include <iostream>
using namespace std;
int main(){
    cout << "enter number"<< "\n";
    int number;
    cin >> number;
    int d=1;
    int sum=1;
    do
    {
         sum = sum*d;
         d++;  
    }while (d<=number);
    cout << sum << "\t";
    
    
}