// Sorted Array
#include<bits/stdc++.h>
using namespace std;
void removeDup(vector<int> &arr)
{
 for ( int i = 1; i < arr.size(); i++ )
 {
  if ( arr[i]==arr[i-1])
  {
    arr.erase(arr.begin() + i);
    i--;
  }
 }
}

int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for ( int i = 0; i < n; i++ )
  cin >> arr[i];

removeDup(arr);

for ( int num : arr)
{
  cout << num << " ";
}
return 0;

}