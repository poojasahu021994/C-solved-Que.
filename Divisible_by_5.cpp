# include <iostream>
using namespace std;
int main()
{
int number=0;
cout << "enter a number" << "\n";
cin >> number;

if( number%5==0){
    cout << "Divisible by 5" << "\n";
}
else{
    cout << "Not Divisible by 5" << "\n";
}
return 0;

}