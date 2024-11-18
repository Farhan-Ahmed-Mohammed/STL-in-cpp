#include <iostream>
#include<list>
using namespace std;

int main() {
  list<int> l;
l.push_back(1);
  l.push_front(2);
  for(int i:l)
    {
      cout<<i<<" ";
    }
 
  l.pop_back();
  cout<<endl;
  for(int i:l)
  {
    cout<<i<<" ";
  }
  cout<<endl;
 // cout<<"Element at 2nd index :"<<l.at(2)<<endl;
  cout<<"Empty or not :"<<l.empty()<<endl;// gives 0 if not empty
  cout<<"First element :"<<l.front()<<endl;
  cout<<"Last element :"<<l.back()<<endl;
  cout<<"Before erase :"<<l.size()<<endl;
  l.erase(l.begin());
  cout<<"After erase :"<<l.size()<<endl;
}
