#include<iostream>
using namespace std;

int main()
{
    int *array = new int[5];
    for (int i = 0; i < 5; i++)
    {
        array[i] = i * i;
    }
    for (int i = 0; i < 5; i++)
    {
      /* code */
      cout << array[i] << endl;
    }
    






  // int size;
  // cin >> size;
  // int arr[size];

  // for (int i = 0; i < size; i++)
  // {
  //   arr[i] = 0;
  //   cout << arr[i];
  // }
  

    return 0;
}