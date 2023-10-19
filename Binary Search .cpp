#include<iostream>
using namespace std;
int binarySearch(int arr[] , int size , int key){
    int start = 0;
    int end = size - 1 ;

    int mid = (start +  end )/2 ;

    while(start<=end){
        if(mid==key){
            return mid;
        }
    
    if(arr[mid]<key){ //right side part
        start = mid + 1;
    }
    else{    // left side k lie arr[mid]>key
        start = mid -1;
    }
    mid = (start + end) / 2;

    }
    return -1;   // if last e b kuch nahi mila to 
} 
int main(){
    int even[6] = {2, 4, 6 ,8 , 10};
   int odd[5] = { 1 , 3 , 5 , 7 , 9};

   int evenFind = binarySearch( even , 4 , 8);
   cout<<"index value found is "<<evenFind<<endl;
   return 0;


}   