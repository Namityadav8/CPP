#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enter how many number you want\n";
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        cout<<"value of "<<i<<" array is "<<arr[i]<<endl;
    }
}