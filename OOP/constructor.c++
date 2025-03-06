#include<iostream>
using namespace std;

class temp{
    private:
        int a, b;
    public:
        temp(){
            a = 0;
            b = 1;
          cout << "default constructor called" << endl;
        }
        temp(int x, int y){
            a = x;
            b = y;
            cout << "parameterized constructor called" << endl;
        }
        void print(){
            cout << a << " " << b << endl;
        }
};

int main()
{
    temp t1, t2(2, 3);
    t1.print();
    t2.print();
    return 0;
}