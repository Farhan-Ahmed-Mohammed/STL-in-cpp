#include <iostream>
#include<set>
using namespace std;

int main() {
  set<int> s;
  s.insert(5);//two times 5 but we get only one time bcoz set gives only unique elements 
  s.insert(5);
  s.insert(1);
  s.insert(6);
  s.insert(0);
  s.insert(7);
  for(auto i:s)
    {
      cout<<i<<endl;
    }cout<<endl;
  set<int>::iterator it=s.begin();
  it++;
  s.erase(it);
  for(auto i:s)
    {
      cout<<i<<endl;
    }cout<<endl;
  cout<<"Is present or not :"<<s.count(5)<<endl;//count checks if 5 is present or not 
  set<int>::iterator itr=s.find(5);
  cout<<"Value at itr is :"<<*itr<<endl;
  for(auto it=itr;it!=s.end();it++)
    {
      cout<<*it<<" ";
    }
  cout<<endl;
  
}