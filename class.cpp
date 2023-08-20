#include<iostream>
using namespace std ;
class namit{
public:
    int age  ;
    string name ;

    int getage(){
        return age;
    }
    string getname(){
        return name ;
    }

    void setage(int a){
        age =a;
    }

    void setname(string b){
        name = b;
    }
   

};
int main(){
    namit details ;
    details.setage(18);
    details.setname("Namit Yadav");
    cout<<details.getname()<<endl;
    cout<<details.getage()<<endl;
 
    

    
}