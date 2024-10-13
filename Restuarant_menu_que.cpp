# include<iostream>
using namespace std;
int main(){
    cout <<"startup menu"<<"\n";
    
    cout << "paneer Tika=150 (Enter=1)"<<"\n";
    cout << "white souce pasta=120 (Enter=2)"<<"\n";
    cout << "Veg kothe=110 (enter =3)"<<"\n";
    int paneer_tika =150;
    int White_souce_pasta =120;
    int veg_kothe =110;

    int choice;
    cin >> choice;

    int total_bill=0;

    if(choice==1){
        total_bill=total_bill+paneer_tika;
        // cout << "total bill="<< total_bill<<"\n";

    }
    else if(choice==2){
        total_bill=total_bill+White_souce_pasta;
        // cout << "total bill="<< total_bill<<"\n";
    }
    else if(choice==3){
        total_bill= total_bill+veg_kothe;
        // cout << "total bill="<< total_bill<<"\n";
    }
    
    else {
        cout << "not avlable"<< "\n";
    }
    cout << "total bill="<< total_bill<<"\n";
    


}