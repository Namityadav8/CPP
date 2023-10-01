#include<iostream>
using namespace std ;
int factorial(int a){

    int fact =1 ;
    for(int i=1;i<=a;i++){
        fact = fact * i;
            }
        return fact ;
}
int main(){
    int n,r;
    cin>>n>>r;
    int b=factorial(n);
    int c = factorial(r);
    int d = factorial(n-r);
    if(n>r){
        cout<< (b/(c*d));
    }
    else{
        cout<<"factorial doesn't exist please fuck off <3 :)";
    }

}