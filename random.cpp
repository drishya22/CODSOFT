#include <iostream>
using namespace std;
int main(){
    int x,a=0;
    x=rand();
    while(a!=x){
        cout<<"Guess the number";
        cin>>a;
        if (a>x)
        {
            cout<<"HIGH\n";
        }
        else if(x>a){
            cout<<"LOW\n";
        }
        
    }
    cout<<"Congratulations, the number was "<<x;
    return 0;
}