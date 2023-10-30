#include<iostream>
#include<vector>
using namespace std; 
void selectionsort( vector<int> &arr,int n){
    
    for(int i=0;i<n-1;i++){

        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    int arr[n];
    cout<<"Enter the elements you want to sort"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    cout<<endl;


} 