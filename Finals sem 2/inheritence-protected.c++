#include<iostream>
using namespace std;

class super{
  protected:
    int storage;

  public:
    void put(int val){
      storage = val;
    }

    int get(){
      return storage;
    }
};

class sub: public super{
  public:
    void print(){
      cout << storage << endl;
    }
};

int main()
{
  sub obj;
  obj.put(100);
  obj.put(obj.get() + 1);
  obj.print();
    
    return 0;
}