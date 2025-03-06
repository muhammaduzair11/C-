#include<iostream>
using namespace std;

class Student
{
    private:
        string name;
        int batch;
        string program;

    public:
        void setName(string n)
        {
            name = n;
        }
        void setBatch(int b)
        {
            batch = b;
        }
        void setProgram(string p)
        {
            program = p;
        }
        string getName()
        {
            return name;
        }
        int getBatch()
        {
            return batch;
        }
        string getProgram()
        {
            return program;
        }

        // void showInfo(){
        //     cout << getName() << endl;
        //     cout << getBatch() << endl;
        //     cout << getProgram() << endl;
        // }

        void showInfo() const
        {
            cout << this->name << endl;
            cout << this->batch << endl;
            cout << this->program << endl;
        }
};

int main()
{
    Student s1, s2;
    s1.setName("Ali");
    s1.setBatch(27);
    s1.setProgram("BSCS");
    s2.setName("Ahmed");
    s2.setBatch(27);
    s2.setProgram("BSCS");
    // cout << "Name: " << s1.getName() << endl;
    // cout << "Batch: " << s1.getBatch() << endl;
    // cout << "Program: " << s1.getProgram() << endl;
    // cout << "Name: " << s2.getName() << endl;
    // cout << "Batch: " << s2.getBatch() << endl;
    // cout << "Program: " << s2.getProgram() << endl;
    s1.showInfo();
    s2.showInfo();
    
    
    return 0;
}