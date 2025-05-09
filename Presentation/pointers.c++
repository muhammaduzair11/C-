#include<iostream>
using namespace std;

int main()
{

    float *array = new float[20];

    for (int i = 0; i < 20; i++)
    {
        /* code */
        cout << *array;
        array++;
    }

    delete [] array;


    




    return 0;
}