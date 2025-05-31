#include<iostream>
using namespace std;

class super{
  private:
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
};

int main()
{
    sub object;

    object.put(100);
    object.put(object.get() + 1);
    cout << object.get() << endl;

    return 0;
}