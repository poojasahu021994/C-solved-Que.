# include<iostream>
using namespace std;
int main() {
int unit,s;
cout << "Enter unit" << "\n";
cin >> unit;

int bill=0;
if(unit>=0 && unit<=100){
bill=unit*3;
// cout << " Your Electricity bill =" << bill << " Rs"<< "\n";

}
else if(unit>=101 && unit<=200){
bill=unit*5;

}
else if(unit>=201 && unit<=500){
bill=unit*7;
}
else if(unit>=500){
bill=unit*10;
}
else{
cout << "service charge =" << 50 << " Rs"<<"\n";
}
int tax =(bill*20/100);
cout << "Your Electricity bill is = " << bill << " Rs"<< "\n";
cout << "Your Electricity 20% tax is = " << tax << " Rs" << "\n";

cout << "Your Electricity totel bill is = " << bill+(bill*20/100)<< " Rs"<< "\n";
}
