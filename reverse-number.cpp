# include <iostream>
using namespace std;
int main(){
    int d=10;
    do
    {
            cout << d <<"\t";  
            d--;
    }
    
    while (d>=1);
    //using for loop

    int number;
    cout << "Enter number" << "\t";
    cin >> number;

    for(int i=number; i>=0; i--){
        cout << i << "\t";
    }
}