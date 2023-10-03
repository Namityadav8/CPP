#include<iostream>
using namespace std ;
int a;
int main(){
    cout<<a<<"=3"<<endl;
    int c = var(2);
    cout<<c<<endl;
}
/*global and local variabcleles */
int var(int a){
    return a;

}
