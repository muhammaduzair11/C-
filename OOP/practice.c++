#include<iostream>
using namespace std;

class rectangle{
    private:
        int length;
        int width;
    public:
        void setLength(int a){
            length = a;
        }
        void setWidth(int b){
            width = b;
        }
        int getLength(){
            return length;
        }
        int getWidth(){
            return width;
        }
        int area(){
            return length*width;
        }

};

int main()
{
    int a,b;
    rectangle r;
    cout<<"Enter the length of the rectangle: ";
    cin>>a;
    cout<<"Enter the width of the rectangle: ";
    cin>>b;
    r.setLength(a);
    r.setWidth(b);
    cout<<"The length of the rectangle is: "<<r.getLength()<<endl;
    cout<<"The width of the rectangle is: "<<r.getWidth()<<endl;
    cout<<"The area of the rectangle is: "<<r.area()<<endl;
    

    return 0;
}