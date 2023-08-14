#include <iostream>
#include <string>
using namespace std;
class Student {
    private:
        string name;
        string course;
        int marks;
    public:
        void setName(string newName) {
            name = newName;
        }
         void setCourse(string newCourse) {
            course = newCourse;
        }
        // adding validation 
        void setMarks(int newMarks){
     if (newMarks < 0) {
     throw "Marks cannot be negative !!";
}
     //Set the value of the new marks
     marks = newMarks;
       }
        void Student_Info() {
            cout << "Name: " << name << endl;
            cout << "Course: " << course << endl;
            cout << "Marks: " << marks << endl;
        }
};
int main() {
    Student obj;
    obj.setName("Ninja Coder");
    obj.setMarks(99);
    obj.setCourse("DSA in C++");
    obj.Student_Info();
    return 0;
}