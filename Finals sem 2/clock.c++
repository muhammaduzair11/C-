#include<iostream>
using namespace std;

class clocktype {
  private:
    int hr;
    int min;
    int sec;

  public:
    void set_time(int hour, int minute, int second){
      if (hour >= 0 && hour < 60)
      {
        hr = hour;
      }else{
        hr = 0;
      }

      if (minute >= 0 && minute < 60)
      {
        min = minute;
      }
      else
      {
        min = 0;
      }

      if (second >= 0 && second < 60)
      {
        sec = second;
      }
      else
      {
        sec = 0;
      }
    }

    void gettime(int& hours, int& minute, int& second){
      hours = hr;
      minute = min;
      second = sec;
    }

};

int main()
{
    
    return 0;
}