#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
 vector<int> v = {1,24,11,43,55,61};

 cout <<(binary_search(v.begin(),v.end(),4) ? "Found" : "Not Found")<<endl;

 cout<<"Lower Bound "<<lower_bound(v.begin(),v.end(),24)-v.begin()<<endl;

 cout << max(5,4)<<endl;
 cout << min(5,4)<<endl;

 int a = 43;
 int b = 23;

 cout << a <<" "<<b << endl;

 cout <<"After swapping"<<endl;

 swap(a,b);
 
 cout << a <<" "<<b << endl;

 string name = "abcdefgh";
 reverse(name.begin(), name.end());
 cout << name << endl;

 for ( int i : v)
 cout << i << " ";
 cout <<endl;

 rotate(v.begin(),v.end()-1,v.end());

 for ( int i : v)
 cout << i << " ";
 cout <<endl;

sort(v.begin(),v.end());
for ( int i : v)
cout << i << " ";

}
