#include<bits/stdc++.h>
using namespace std;

int getSum(int *arr,int n){
  cout << sizeof(arr) << endl; //pointer size
  int sum = 0;
  for(int i = 0 ; i < n; i++){
    sum += arr[i];
  }
  return sum;
}
int main(){
  int arr[5] = {1,2,3,4,5};
  cout << "Main Array Size : " <<sizeof(arr) << endl;
  cout << getSum(arr+2,3) << endl; // Part Of Array
}

 
