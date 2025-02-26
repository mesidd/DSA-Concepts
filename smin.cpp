#include<bits/stdc++.h>
using namespace std;
int minimumElement(vector<int> &arr)
{
  if ( arr.empty()) return -1;

  int minm = INT_MAX, smin = INT_MAX;

  for ( int &num : arr )
  {
    if ( num < minm)
    {
      smin = minm;
      minm = num ;
    }
    else if ( num > minm && num < smin)
    smin = num;
  }
  return smin;
}

int main()
{
int n;
cin >>n ;
vector<int> arr(n);
for ( int i =0 ; i < n; i++)
cin >> arr[i];

cout << minimumElement(arr);

return 0;
}
