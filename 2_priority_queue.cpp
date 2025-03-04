#include<iostream>
#include<queue>
using namespace std;

int main(){

  priority_queue<int> maxm; // max - heap

  maxm.push(1);
  maxm.push(9);
  maxm.push(3);
  maxm.push(5);

  int n = maxm.size();

  for (int i = 0; i < n; i++){
    cout << maxm.top()<< " ";
    maxm.pop();
  }

  cout << endl;

  priority_queue<int, vector<int>, greater<int> > mini; // min - heap

  mini.push(2);
  mini.push(1);
  mini.push(6);
  mini.push(5);

  int size = mini.size();

  for ( int i = 0; i < size; i++ ){
    cout << mini.top()<<" ";
    mini.pop();
  }

}
