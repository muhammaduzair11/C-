#include<iostream>
using namespace std;

class Clock {
    private:
        int hr;
        int min;
        int sec;
    public:
      void setTime(int h, int m, int s);
      void getTime(int& h, int& m, int& s);
      void showTime();
      bool equalTime(const Clock& c);
      void incrementhour();
      void incrementminute();
      void incrementsecond();
};



int main()
{

    int h, m, s;

    Clock c1, c2;
    c1.setTime(12, 45, 30);
    c2.setTime(12, 45, 30);
    c1.showTime();
    c2.showTime();
    c1.equalTime(c2);

    c1.getTime(h, m, s);
    cout << h << ":" << m << ":" << s << endl;

    
    return 0;
}

void Clock::setTime(int h, int m, int s){
    if(h>=0 && h<24){
        hr = h;
    }
    else{
        hr = 0;
    }
    if(m>=0 && m<60){
        min = m;
    }
    else{
        min = 0;
    }
    if(s>=0 && s<60){
        sec = s;
    }
    else{
        sec = 0;
    }
}

void Clock::getTime(int& h, int& m, int& s){
    h = hr;
    m = min;
    s = sec;
}

void Clock::showTime(){
    cout << hr << ":" << min << ":" << sec << endl;
}

bool Clock::equalTime(const Clock& c){
    if(hr == c.hr && min == c.min && sec == c.sec){
        cout << "The time is equal" << endl;
        return true;
    }
    else{
        cout << "The time is not equal" << endl;
        return false;
    }
}

void Clock::incrementhour(){
    hr++;
    if(hr>23){
        hr = 0;
    }
}

void Clock::incrementminute(){
    min++;
    if(min>59){
        min = 0;
        incrementhour();
    }
}

void Clock::incrementsecond(){
    sec++;
    if(sec>59){
        sec = 0;
        incrementminute();
    }
}
