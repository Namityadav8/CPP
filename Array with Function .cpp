#include<iostream>
using namespace std ;
void printArray(int arr[] , int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing the array";
}
int main(){
    int n;
    int exam[4];
    printArray(exam , 10);
    cout<<endl;

    int size = sizeof(exam)/sizeof(int);  //method to calculate the size of the exam array .....since one int contains 4 bytes size that is why it is divided by size of int so as to calculate the size of the array
    cout<<"Size of array is "<<size;
}