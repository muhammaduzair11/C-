#include<iostream>
using namespace std;

class Student{
    private:
        string name;
        int roll;
        int marks;
    public:
        Student(string n, int r, int m){
            name = n;
            roll = r;
            marks = m;
        }
        void show(){
            cout << "Name: " << name << endl;
            cout << "Roll: " << roll << endl;
            cout << "Marks: " << marks << endl;
        }

};

int main()
{
    Student s1("John", 12, 90);
    s1.show();
    return 0;
}