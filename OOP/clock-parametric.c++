#include <iostream>
using namespace std;

class ClockType
{
private:
  int hr;
  int min;
  int sec;
  
  public:
  ClockType(int h = 0, int m = 0, int s = 0)
  {
    if (h >= 0 && h < 24)
    {
      hr = h;
    }
    else
    {
      hr = 0;
    }

    if (m >= 0 && m < 60)
    {
      min = m;
    }
    else
    {
      min = 0;
    }

    if (s >= 0 && s < 60)
    {
      sec = s;
    }
    else
    {
      sec = 0;
    }
  }

  void printTime()
  {
    if (hr < 10)
    {
      cout << "0";
    }
    cout << hr << ":";

    if (min < 10)
    {
      cout << "0";
    }
    cout << min << ":";

    if (sec < 10)
    {
      cout << "0";
    }
    cout << sec;
  }
};


  int main()
  {
    ClockType clock1;
    ClockType clock2(5);
    ClockType clock3(1,2);
    ClockType clock4(1,2,3);

    clock1.printTime();
    cout << endl;
    clock2.printTime();
    cout << endl;
    clock3.printTime();
    cout << endl;
    clock4.printTime();
    cout << endl;

    

    return 0;
  }