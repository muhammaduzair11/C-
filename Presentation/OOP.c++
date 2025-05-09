#include<iostream>
using namespace std;

class Clock {
  private:
  int hours;
  int minutes;
  int seconds;

  public:

  void set_time(int h, int m, int s){
    hours = h;
    minutes = m;
    seconds = s;
  }

  void get_time(int &h, int &m, int &s){
    // h = hours;
    hours = h;
    m = minutes;
    s = seconds;

  }

  void print_time(){
    if(hours < 10){
      cout << "0" << hours << ":";
    }else {
      cout << hours << ":";
    }

    if (minutes < 10){
      cout << "0" << minutes << ":";
    }else {
      cout << minutes << ":";
    }

    if (seconds < 10)
    {
      cout << "0" << seconds;
    }
    else
    {
      cout << seconds;
    }
  }





};

int main()
{
    int hr, min, sec;
    Clock myclock;
    myclock.set_time(12,9,32);
    myclock.get_time(hr, min, sec);
    myclock.print_time();

    cout << endl << hr << ":" << min << ":" << sec;

    return 0;
}