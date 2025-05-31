#include<iostream>
using namespace std;

class student {
    private:
        string name;
        int rollNo;
        bool isStudent;

    public:
        student(string n = "unknown", int r = 0, bool is = false){
            name = n;
            rollNo = r;
            isStudent = is;
        }

        void printinfo(){
            cout << name << endl << rollNo << endl << isStudent << endl;
        }
};

int main()
{
    student sarray[5];
    sarray[3] = student("Muhammad Uzair", 39, true);
    for (int i = 0; i < 5; i++)
    {
        sarray[i].printinfo();
    }
    
    
    return 0;
}