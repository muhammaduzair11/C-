#include<iostream>
using namespace std;

class A{
  int x, y;

  public:
    A(){
      x = 2;
      y = 4;
    }

    A(int i){
      x = i;
      y = x + 5;
    }

    void pr(){
      cout << x << endl << y << endl;
    }
};

class B {
  int z;
  A a1, a2;

  public:
    B(): a2(2) {
      z = 5;
      pr();
    }

    B(int i) : a2(5) {
      z = i + 10;
    }

    void pr(){
      a1.pr();
      a2.pr();
      cout << z << endl;
    }
};

int main()
{
    B obj;
    return 0;
}