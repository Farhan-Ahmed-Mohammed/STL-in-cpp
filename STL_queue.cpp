#include <iostream>
#include<queue>
using namespace std;

int main() {
  queue<string> q;
  q.push("MD");
  q.push("Farhan");
  q.push("Ahmed");//here we aue front not top
  cout<<"Top element :"<<q.front()<<endl;//we get last element at first 
  q.pop();//to remove top  element from stack
  cout<<"Top element :"<<q.front()<<endl;
  cout<<"Size of stack :"<<q.size()<<endl;
}
