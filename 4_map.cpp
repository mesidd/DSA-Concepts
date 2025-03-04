#include<iostream>
#include<map>
using namespace std;

int main(){
  
  map<int,string> mpp;
  mpp[5] = "hello";
  mpp[2] = "ram";
  mpp[3] = "krish";

  mpp.insert({6,"nikhil"});

  for ( auto i : mpp)
  cout << i.first << " - "<<i.second<<endl; // sorted


  // cout << mpp.count(2)<<endl;

  cout << "After Erasing 2 "<<endl;
  mpp.erase(2);

  for ( auto it : mpp)
  cout << it.first<< "-" << it.second<<endl; // direct value store


  auto it = mpp.find(3);

  cout << endl;
  
  for ( auto i = it; i!=mpp.end(); i++)
  cout << (*i).first << "-" << (*i).second<<endl; // iteartor stored so need to derefernce

}
