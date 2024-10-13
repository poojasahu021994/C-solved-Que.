# include<iostream>
using namespace std;
int main(){
    // cout << "welcome"<<"\n";
    // goto jk;
    // cout << "ok"<<"\n";
    //  cout << "ok"<<"\n";
    //   cout << "ok"<<"\n";
    //    cout << "ok"<<"\n";
    //     cout << "ok"<<"\n";
    //     jk:
    //      cout << "bye"<<"\n";
    //       cout << "done"<<"\n";

//generate a tbale without using loop (using go to stetment)
    int n, i=1;
    cout << "enter any number to generate table"<< "\n";
    cin>>n;
    table:
    cout << n*i<<"\t";
    i++;
    if(i<=10)
    {
        goto table;
    }
}