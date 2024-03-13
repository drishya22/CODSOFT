#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter the first number";
    cin>>a;
    cout<<"Enter the second number";
    cin>>b;
    cout<<"Enter the operator";
    cin>>op;
    if (op=='+'){
        cout<<a+b;
    }
    else if(op=='-'){
        cout<<a-b;
    }
    else if(op=='*'){
        cout<<a*b;
    }
    else if(op=='/'){
        cout<<a/b;
    }
    return 0;
    }