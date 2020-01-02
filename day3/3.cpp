#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;

  cout<<"문자열을 입력하세요(한글 안됨) "<< endl;
  getline(cin,s,'\n');
  int len = s.length();
  string first,second;
  for(int i=0; i<len; i++){
    first=s.substr(0,1);
    second=s.substr(1,len);
    string temp=second+first;
    cout<<temp<<endl;
    s=temp;
  }
  return 0;
}
