# include <iostream>
using namespace std;
int main(){
    int d=1;
    do
    {
        if(d%2!=0)
        {
            cout << d <<"\t";

        }
        d++;
    }
    while (d<=10);


    // using for loop

    int number;
    cout << "Enter number" << "\n";
    cin >> number;

    for(int i=1; i<=number; i++){
        if(i%2!=0){
            cout  << i << "\t";
        }
    }
}