#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int start = 0;
    int end  = n - 1;
    while(start>end){
        swap(start,end);
        start++;
        end--;
    }
} 

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[4] = { 5,3,7,10};

     reverse(arr,6);
     printArray(arr,6);



} 