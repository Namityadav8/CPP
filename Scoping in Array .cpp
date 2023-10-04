#include<iostream>
using namespace std ;
void updateArray(int arr[],int n){
    cout<<"Inside the function "<<endl;
    arr[0] = 120;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    
    }
    cout<<endl;
    cout<<"Going inside the main function"<<endl;
}

int main(){

    int arr[3]={1,2,3};
    updateArray(arr,3);          //value in main function also get changed as it gives address to update function 
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}