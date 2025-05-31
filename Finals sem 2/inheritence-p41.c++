#include<iostream>
using namespace std;

class A{
  private:
    int x , y;
  
  public:
    int z;

    void set(int a, int b, int c){
      x = a;
      y = b;
      z = c;
    }

    void printA(){
      cout << x << " " << y << " " << z << endl;
    }
};

  class B: public A{
    private:
      int var1;
    
    public:
      int var2;

      void set(int a, int b){
        var1 = a;
        var2 = b;
      }

      void printB(){
        cout << var1 << "  " << var2 << endl;
      }

  };

int main()
{
    A objA;
    B objB;

    objA.set(3, 4, 5);
    objB.set(3, 4);
    objA.printA();
    objB.printB();
    return 0;
}