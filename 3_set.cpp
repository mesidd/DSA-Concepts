#include<iostream>
#include<set>
using namespace std;

int main(){
  
  set<int> s; // ordered set

  s.insert(4);
  s.insert(8);
  s.insert(4);
  s.insert(5);
  s.insert(11);

  for ( auto value : s) 
  cout << value << " ";
  cout <<endl;

  auto it = s.begin();
  it++;
  
  cout << *it<<endl;
  
  // s.erase(s.begin(), prev(s.end(),2)); // 2 step back
  

  for ( auto value : s) 
  cout << value << " ";

  cout << endl;

  
  cout << s.count(11)<<endl; // element present or not

  set<int>:: iterator itr = s.find(11);

  for ( auto it = itr; it!=s.end(); it++){
    cout << *it<<" "; // 11
  }

cout <<endl;
 
  set<int>::iterator itn = s.find(4);

  for ( auto it= itn; it!= s.end(); it++)
  cout << *it << " "; // 4 5 8 11

}
