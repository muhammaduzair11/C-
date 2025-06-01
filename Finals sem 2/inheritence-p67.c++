#include<iostream>
using namespace std;

class MyClass{
  public:
  int a;
  MyClass(){
    a = 0;
    cout << "First\n";
  }
  MyClass(int i){
    a = i;
    cout << "Second\n";
  }
  ~MyClass(){
    cout << a << endl;
  }
};

class YourClass: protected MyClass{
    int x;
    MyClass M1;
    public:
      MyClass M2;

      YourClass(int i): M2(3), MyClass(i){
        x = i;
        a = 7;
      }
};

int main()
{
    YourClass obj(5);
    return 0;
}