#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    int *ptr1;
    ptr1 = &arr[0];
    cout << ptr1 << endl;

    int *ptr2 = ptr1 + 2;

    cout << ptr2 << endl;
    cout << ptr1 - ptr2 << endl;


    
}