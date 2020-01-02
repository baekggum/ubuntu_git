#include <iostream>
#include <string>
using namespace std;

string f(){
  return "hello world";
}
int main(){
  int n=3;
  char c='#';
  cout<<c<<5.5<<'-'<<n<<"hello"<<true<<endl;
  cout<<"n+5="<<n+5<<endl;
  cout<<f()<<endl;
  cout<<"Hello"<<endl;
  cout<<"Hello"<<'\n';
  return 0;
}
