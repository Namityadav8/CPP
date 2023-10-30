#include<iostream>
#include<vector>
void bubblesort(vector<int>& arr,int n){
    for(int i=1;i<n;i++){
        //this loop is for rounds
        for(int j=0;j<n-i;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

}
using namespace std; 
int main(){
} 