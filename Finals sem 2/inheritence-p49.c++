#include<iostream>
using namespace std;

class A{
  private:
    int y;

  public:
    int x;
    A(){
      x = 10;
      y = 20;
    }

    void print(){
      cout << x << "  " << y << endl;
    }
};

class B: public A{
  public:
  int z;
  B(){
    z = 100;
  }

  void print(){
    A::print();
    cout << z << endl;
  }
};

int main()
{
    B objB;
    objB.print();

    return 0;
}