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
    int remainder = number%5;
    int result = remainder-5;

    cout << "Add " << result  << "  to number, to make it divisible by 5" "\n";
}
return 0;

}
