# include <iostream>
using namespace std;
int main()
{ 
    float Physics_markes;
    cout << "Enter physics markes" << "\n";
    cin >> Physics_markes;

    float chemistry_markes;
    cout << "Enter chemstry markes" << "\n";
    cin >> chemistry_markes;

    float Math_markes;
    cout << "Enter Math markes" << "\n";
    cin >> Math_markes;
    
    float Total_Markes =(Physics_markes+chemistry_markes+Math_markes);
    cout << "Your total Markes =" << Total_Markes << " / 300" "\n";

    float presentage=Total_Markes/3;
    cout << "Your total Persentage =" << presentage <<"%"<< "\n";

    if(Math_markes<35 && Physics_markes<35 && chemistry_markes<35){
        cout << "Your Fail" << "\n";
    }
    else if(Math_markes>=35 && Physics_markes<35 && chemistry_markes<35){
        cout << "Your Fail" << "\n";
    }
    else if(Math_markes<35 && Physics_markes>=35 && chemistry_markes<35){
        cout << "Your Fail" << "\n";
    }
    else if(Math_markes<35 && Physics_markes<35 && chemistry_markes>=35){
        cout << "Your Fail" << "\n";
    }
    else if(Math_markes>=35 && Physics_markes>=35 && chemistry_markes<35){
        cout << "Your got supply in chemistry" << "\n";
    }
    else if(Math_markes>=35 && Physics_markes<35 && chemistry_markes>=35){
        cout << "Your got supply in Physics" << "\n";
    }
    else if(Math_markes<35 && Physics_markes>=35 && chemistry_markes>=35){
        cout << "Your got supply in Math" << "\n";
    }
    else if(presentage>=60 && presentage<=100){

        cout << "1st" << "\n";
    }
    else if(presentage>=50 && presentage<60) {
         cout << "2st" << "\n";
    } 
    else if(presentage>=35 && presentage<50) {
         cout << "3st" << "\n";
    } 
    else{
            cout << "your Fail" << "\n";
            }

}