#include <iostream>
#include<deque>
using namespace std;

int main() {
  deque<int> d;
d.push_back(1);
  d.push_front(2);
  for(int i:d)
    {
      cout<<i<<" ";
    }
  d.pop_back();
  cout<<endl;
  for(int i:d)
  {
    cout<<i<<" ";
  }
  cout<<"Element at 2nd index :"<<d.at(2)<<endl;
  cout<<"Empty or not :"<<d.empty()<<endl;// gives 0 if not empty
  cout<<"First element :"<<d.front()<<endl;
  cout<<"Last element :"<<d.back();
  cout<<"Before erase :"<<d.size()<<endl;
  d.erase(d.begin(),d.begin()+1);
  cout<<"After erase :"<<d.size()<<endl;
  
}