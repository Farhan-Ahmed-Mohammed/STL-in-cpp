#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
 vector<int> v;
  v.push_back(1);
  v.push_back(3);
  v.push_back(6);
  v.push_back(7);
  cout<<"Finding 6:"<<binary_search(v.begin(),v.end(),6)<<endl;//if 6 is there we get 1 if not there we get 0
  int a=3;
  int b=5;
  cout<<"Max :"<<max(a,b);
  cout<<endl;
  cout<<"Min :"<<min(a,b);
  swap(a,b);
  cout<<endl<<"a :"<<a<<endl;
  string abc="abc";
  reverse(abc.begin(),abc.end());
  cout<<"String reverse is:"<<abc<<endl;
  rotate(v.begin(),v.begin()+1,v.end());
  cout<<"After rotate"<<endl;
  for(int i:v)
    {
      cout<<i<<" ";
    }cout<<endl;
  sort(v.begin(),v.end());
  for(int i:v)
    {
      cout<<i<<" ";
    }
  
}