#include <iostream>
#include "stack.h"
using namespace std;

int main(){
  MyStack s(10);
  int input=0,loop=1,item=0;
  while(loop){
    PrintMenu();
    cin>>input;
    switch(input){
      case 1: cin>>item;
              s.Push(item);break;
      case 2: cout<<s.Pop();break;
      case 3: s.Print();break;
      case 4: loop=0; break;
      default:printf("Wrong input..\n"); 
    } 
  }
  return 0;
}
