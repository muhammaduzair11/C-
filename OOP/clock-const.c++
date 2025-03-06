#include<iostream>
using namespace std;

class Clock {
    private:
        int hr, min, sec;
    public:
        Clock(int h, int m, int s){
            if(h>=0 && h<24){
                hr = h;
            }
            else if(h>24){
                hr = h % 24;
            }
            else{
                hr = 0;
            }
            if(m>=0 && m<60){
                min = m;
            }
            else if(m>60){
                min = m%60;
            }else{
                min = 0;
            }
            if(s>=0 && s<60){
                sec = s;
            }
            else if(s>60){
                sec = s%60;
            }   
            else{
                sec = 0;
            }
        }

        void showTime(){
            cout << hr << ":" << min << ":" << sec << endl;
        }

        void equalTime(const Clock& c){
            if(hr == c.hr && min == c.min && sec == c.sec){
                cout << "Time is equal" << endl;
            }
            else{
                cout << "Time is not equal" << endl;
            }
        }

};

int main()
{
    Clock c1(25, 45, 20), c2(12, 45, 20);
    c1.showTime();
    c2.showTime();
    c1.equalTime(c2);
    
    return 0;
}