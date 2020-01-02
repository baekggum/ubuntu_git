#include <iostream>
#include <string>
using namespace std;
int main(){
  string answer="C++";
  string myans;
  cout<<"프로그램을 종료하려면 암호를 입력하세요."<<endl;
  while(1){
    cout<<"암호>>";
     cin>>myans;
    if(myans==answer) {
      cout<<"프로그램을 종료합니다."<<endl;
      return 0; 
    }
    cout<<"암호가 틀립니다."<<endl;
  }
  return 0;

}

