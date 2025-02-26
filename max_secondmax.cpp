#include<bits/stdc++.h>
using namespace std;
int maximumElement(vector<int> &arr)
{
  if ( arr.empty()) return -1;

  int maxm = INT_MIN, smax = INT_MIN;

  for ( int &num : arr )
  {
    if ( num > maxm)
    {
      smax = maxm;
      maxm = num ;
    }
    else if ( num < maxm && num > smax)
    smax = num;
  }
  return smax;
}

int main()
{
int n;
cin >>n ;
vector<int> arr(n);
for ( int i =0 ; i < n; i++)
cin >> arr[i];

cout << maximumElement(arr);

return 0;
}
