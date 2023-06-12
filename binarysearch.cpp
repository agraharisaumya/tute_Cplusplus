#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  vector<int> v;
  v.push_back(1);
   v.push_back(5);
   v.push_back(7);
   v.push_back(10);
  cout<<"Finding 7:"<<binary_search(v.begin(), v.end(), 7)<<endl;
  int a=3;
  int b=10;
  cout<<"Max:"<<max(a,b);
  cout<<endl<<"Min:"<<min(a,b);
  swap(a, b);
 cout<<endl<<a;
  cout<<endl<<b;
  string ab="saumya";
  reverse(ab.begin(), ab.end());
  cout<<endl<<"String:"<<ab;
}