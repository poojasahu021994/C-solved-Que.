# include <iostream>
using namespace std;
int main()
{ 
    float markes_10th,markes_12th;
    cout << "Enter 10th markes" << "\n";
    cin >> markes_10th;
    if(markes_10th>=65 && markes_10th<=100){

        cout << "Enter 12th markes" << "\n";
        cin >> markes_12th ;

        if(markes_12th>=70 && markes_12th<=100){
          
           cout << "clerk" << "\n";
        }
        else{
            cout << "Peon" << "\n";
        }
        }
        else{
            cout << "Not Elible" << "\n";
            }

}