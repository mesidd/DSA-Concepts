#include<iostream>
#include<queue>
using namespace std;

int main(){
  queue<string> a;

  a.push("sid");
  a.push("ram");
  a.push("mohan");

  cout << a.front()<< endl;
  a.pop();
  cout << a.front()<< endl;
}
