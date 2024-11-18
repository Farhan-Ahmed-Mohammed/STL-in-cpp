#include <iostream>
#include<array>
using namespace std;

int main() {
  array<int,4> a{};
  int size=a.size();
  cout<<"Enter Elements in array :";
  
  for(int i=0;i<size;i++)
    {
      cin>>a[i];
    }
    cout<<"Elements in array are :"<<endl;
  
  for(int i=0;i<size;i++)
    {
      cout<<a[i]<<endl;
    }
  cout<<"Element at 2nd index :"<<a.at(2)<<endl;
  cout<<"Empty or not :"<<a.empty()<<endl;// gives 0 if not empty
  cout<<"First element :"<<a.front()<<endl;
  cout<<"Last element :"<<a.back();
}