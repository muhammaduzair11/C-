#include<iostream>
using namespace std;

int sum(int &x, int &y)
{
  x += 1;
  y += 2;
  return x + y;
}

int main()
{
  int x = 5, y = 4;
  cout << sum(x, x);
  return 0;
}