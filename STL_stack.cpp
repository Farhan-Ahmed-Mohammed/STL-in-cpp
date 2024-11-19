#include <iostream>
#include<stack>
using namespace std;

int main() {
  stack<string> s;
  s.push("MD");
  s.push("Farhan");
  s.push("Ahmed");
  cout<<"Top element :"<<s.top()<<endl;//we get last element at first 
  s.pop();//to remove top  element from stack
  cout<<"Top element :"<<s.top()<<endl;
  cout<<"Size of stack :"<<s.size()<<endl;
}
  