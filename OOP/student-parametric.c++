#include<iostream>
using namespace std;

class Student {
  private:
    string name;
    int rollNo;
    int batch;

    public:
      Student(string n = " ", int r = 0, int b = 0){
        name = n;
        rollNo = r;
        batch = b;

      }

      void printInfo(){
        cout << name << endl << rollNo << endl << batch << endl;
      }
};



int main()
{
    Student s1;
    Student s2("Uzair");
    Student s3("Uzair", 39);
    Student s4("Uzair", 39, 27);

    s1.printInfo();
    s2.printInfo();
    s3.printInfo();
    s4.printInfo();


    return 0;
}