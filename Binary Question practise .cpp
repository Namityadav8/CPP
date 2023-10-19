#include<iostream>
using namespace std; 
int firstfind(int arr[] , int size , int key){
    int start = 0 , end = size -1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid ;
            end = mid -1;
        }
        else if(arr[mid]<key){
            start = mid + 1 ;
        }
        else if(arr[mid]>key){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans ;
}


int lastfind(int arr[] , int size , int key){
    int start = 0 , end = size -1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid ;
            start = mid + 1;
        }
        else if(arr[mid]<key){
            start = mid + 1 ;
        }
        else if(arr[mid]>key){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans ;
}
int main(){

    int arr[6] = { 2,3,4,5,6,3};
    cout<<"The occurence of 3 is at index "<<firstfind(arr,6,3)<<endl;
    cout<<"The last occurence of 3 is at index "<<lastfind(arr,6,3);

} 