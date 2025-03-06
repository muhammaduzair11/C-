#include<iostream>
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    int a;
    cin >> a;
    if (a > 0)
    {
      /* code */
      cout << "Positive" << endl;
    } else if (a < 0)
    {
      /* code */
      cout << "Negative" << endl;
    } else
    {
      /* code */
      cout << "Zero" << endl;
    }
    
    return 0;
}