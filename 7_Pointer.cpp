#include<iostream>
using namespace std;
int main()
{
  int n = 5;
  int *a =  &n;
  n=n*2;
  cout << "n - " << n <<endl<<"a - "<< *a << endl;
}
/*
n - 10
a - 10
*/
