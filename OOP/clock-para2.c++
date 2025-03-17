#include <iostream>
using namespace std;

class ClockType
{
private:
  int hr;
  int min;
  int sec;

public:
  ClockType(int h = 0, int m = 0, int s = 0);

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

ClockType::ClockType(int h = 0, int m = 0, int s = 0)
{
  if (hr >= 0 && hr < 24)
  {
    hr = h;
  }
  else
  {
    hr = 0;
  }

  if (min >= 0 && min < 60)
  {
    min = m;
  }
  else
  {
    min = 0;
  }

  if (sec >= 0 && sec < 60)
  {
    sec = s;
  }
  else
  {
    sec = 0;
  }
}

int main()
{
  cout << "fhsdkhj";
  return 0;
}