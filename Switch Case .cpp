#include<iostream>
using namespace std;
int main(){
    int n=3;
    int a=3;
    switch(n){
        case 1:
        cout<<"nope";
        break;

        case 3:
        switch(a){
            case 3:
            cout<<"The value of a is "<<a<<endl;
        }
        cout<<"ha yahi h";
        break;
    }

    // cout<< "The value of a is "<<a<<" and n is "<<n<<endl;
} 