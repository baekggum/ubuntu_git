#include <iostream>
using namespace std;

int add(int a,int b){
  return a+b;
}
float add(float a, float b){
  return a+b;
}
int main(){
  int a=10;
  int b=20;

  float c=10.3;
  float d=10.2;

  cout<<add(a,b)<<endl;
  cout<<add(c,d)<<endl;

  return 0;
}

