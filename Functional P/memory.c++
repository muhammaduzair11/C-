#include<iostream>
using namespace std;

int main()
{
    float *arr = new float[5];
    for(int i = 0; i < 5; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < 5; i++)
    {
      cout << arr[i] << endl;
    }
    return 0;
}