#include<iostream>
using namespace std;

class A{
  public:
    A(){
      cout << "Constructor of A" << endl;
    }
};

class B {
  public:
    B(){
      cout << "Constructor of B" << endl;
    }
};

class C {
  public:
    A objA;
    B objB;
    C(){
      cout << "Constructor of C" << endl;
    }
};

int main()
{
    C objC;
    return 0;
}