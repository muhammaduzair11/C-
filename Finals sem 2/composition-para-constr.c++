#include <iostream>
using namespace std;

class element
{
private:
  int value;

public:
  element(int val)
  {
    value = val;
    cout << "Element("<< val<< ")"<<" Constructed" << endl;
  }
  int get()
  {
    return value;
  }
  void put(int val)
  {
    value = val;
  }
};

class collection
{
  element el1, el2;

public:
  collection() : el2(2), el1(1)
  {
    cout << "Collection Constructed" << endl;
  }
  int get(int elno)
  {
    return elno == 1 ? el1.get() : el2.get();
  }

  void put(int elno, int val)
  {
    elno == 1 ? el1.put(val) : el2.put(val);
  }
};

int main()
{
  collection coll;

  return 0;
}