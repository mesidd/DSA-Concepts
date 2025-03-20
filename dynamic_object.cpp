#include<iostream>
#include<string>
using namespace std;

class Student{
  private:
  string name;

  public:
  int roll = 10 ;
  char section = 'A';
 
  void setName(string value){
    name = value;
  }

  string getName(){
    return name;
  }

};

int main(){
  Student *s1 = new Student;
  s1 -> setName("Mahesh");
  cout << s1 -> getName() << endl;

  delete s1;
 return 0;
}
