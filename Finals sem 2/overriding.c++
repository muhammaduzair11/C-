#include<iostream>
using namespace std;

class A {
  private:
    int x , y;

  public:
    int z;

    void setA(int a, int b , int c){
      x = a;
      y = b;
      z = c;
    }

    void print(){
      cout << x << " " << y << " " << z << endl;
    }
};

class B: public A {
  private:
    int var1;

  public:
    int var2;

    void setB(int a, int b){
      var1 = a;
      var2 = b;
    }

    void print(){
      cout << var1 << " " << var2 << endl;
      A::print();
    }


};

int main()
{
    B objB;

    objB.setA(3,4,5);
    objB.setB(4,5);
    objB.print();
    objB.A::print();

    return 0;
}