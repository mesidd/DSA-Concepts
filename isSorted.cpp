#include<bits/stdc++.h>
using namespace std;
int isSorted(vector<int> &arr)
{
  bool increasing = true, decreasing = true;

  for ( int i = 1; i < arr.size(); i++)
  {
    if ( arr[i] > arr[i-1] )decreasing = false;
    if ( arr[i]  < arr[i-1] ) increasing = false;
  }
  
  return increasing || decreasing;

}
int main()
{
  int n;
  cin >> n;
vector<int> arr(n);
for ( int i = 0; i < n; i++ )
cin >> arr[i];
cout <<(isSorted(arr) ? "Sorted" : "Not Sorted");
return 0;

}