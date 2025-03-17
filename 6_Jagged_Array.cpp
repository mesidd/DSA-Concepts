#include<iostream>
using namespace std;
int main()
{
  int m;
  cin >> m;

  int **arr = new int*[m];
  int *size_arr = new int[m];

  for ( int i = 0 ; i < m; i++)
  {
    int n;
    cin >> n;
    size_arr[i] = n;
    arr[i] = new int[n];
    for( int j = 0; j < n; j++)
    cin >> arr[i][j];
  }
  for ( int i = 0 ; i < m ; i++){
    for ( int j = 0; j < size_arr[i]; j++)
    cout << arr[i][j]<< " ";
  cout<< endl;
  }

  for( int i = 0; i <m; i++)
  delete[] arr[i];
  delete [] arr;
  delete [] size_arr;
}

