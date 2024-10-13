# include <iostream>
using namespace std;
int main(){
    int number1;
cout << "enter number"<<"\n";
cin >> number1;
    int d=1;
    do
    {
        if(d%2==0)
        {
            cout << d <<"\t";

        }
        d++;
    }
    while (d<=number1);
    //using for loop
int number;
cout << "enter number"<<"\n";
cin >> number;
for(int i=1; i<=number;i++){
    if(i%2==0){
        cout << i << "\n";
    } 
}

}