#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  bool value = 1;
  for ( int i  = 2; i*i <= n; i++ )
  {
    cout << i <<" ";
    if ( n%i == 0) {
      value = 0;
      break;
    }
  }
  cout << endl;
  if( value ) cout << "Prime"<<endl;
  else cout << "Not-Prime"<<endl;
}
