#include<iostream>
using namespace std;

class Clock {
    private:
        int hr, min, sec;
    public:
        Clock(int h, int m, int s){
            this->hr = h;
            this->min = m;
            this->sec = s;
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
    Clock c1(12, 45, 30), c2(12, 45, 30);
    c1.showTime();
    c2.showTime();
    c1.equalTime(c2);
    
    return 0;
}