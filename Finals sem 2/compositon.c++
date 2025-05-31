#include<iostream>
using namespace std;

class element{
  private:
    int value;

  public:
    int get(){
      return value;
    }
    void put(int val){
      value = val;
    }
};

class collection{
  element el1, el2;
  public:
    int get(int elno)
    {
      return elno == 1 ? el1.get() : el2.get();
    }

  void put(int elno, int val){
    elno == 1 ? el1.put(val) : el2.put(val);
  }

};

int main()
{
  collection coll;

  for (int i = 1; i <= 2; i++)
  {
    coll.put(i, i);
  }

  for (int i = 1; i <= 2; i++)
  {
    cout << "Element# " << i << " " << coll.get(i) << endl; 
  }
  
  
    
    return 0;
}