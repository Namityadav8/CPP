#include<iostream>
using namespace std ;
class namit{
public:
    int age ;
    int size;

    int getage(){
        return age ;

    }

    int getsize(){
        return size ;
    }

    void setage(int a ){
        age = a;
    }

    void setsize(int b){
        size = b ;
    }


};
int main(){
    namit yadav;
    yadav.setage(18);
    cout<<"namit's age is "<<yadav.getage()<<endl;
    

    
}