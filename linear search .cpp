#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){

    for(int i=0;i<=size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
} 
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int key;
    cout<<"Enter the key you want to find "<<endl;
    cin>>key;
    cout<<"Enter the elements of array";
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
        cout<<" ";
    }

    bool found = search(arr,n,key);
    if(found){
        cout<<"key is found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }



} 