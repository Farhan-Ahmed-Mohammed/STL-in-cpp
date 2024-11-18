#include <iostream>
#include<vector>//a vector is a dynamic array which doubles its capacity when required
using namespace std;

int main() {
 vector<int>v;//at starting its capacity is zero after we insert some elements it keeps getting double
  vector<int> a(5,1);//it means vector of size 5 with all elements 1
  cout<<"vector a:";
  for(int i:a)
    {
      cout<<i<<" ";
    
    }
  cout<<endl;
  cout<<"Capacity :"<<v.capacity()<<endl;
  v.push_back(1);
  cout<<"Capacity :"<<v.capacity()<<endl;
  v.push_back(2);
  cout<<"Capacity :"<<v.capacity()<<endl;
  v.push_back(3);
  cout<<"Capacity :"<<v.capacity()<<endl;
  cout<<"Size :"<<v.size()<<endl;
  cout<<"Element at 2nd index :"<<v.at(2)<<endl;
  cout<<"Before using pop :"<<endl;
  for(int i:v)//in vector like this it is used
    {
      cout<<i<<" ";
    }
  cout<<endl;
  v.pop_back();//used to remove element from array 
  cout<<"Afer using pop"<<endl;
  for(int i:v)
    {
      cout<<i<<" ";
    }
  cout<<endl;
}