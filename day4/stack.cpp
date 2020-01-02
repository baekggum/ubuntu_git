#include <iostream>
#include "stack.h"
using namespace std;

MyStack::MyStack(int n){
  arrayC= new int[n];
  top=-1;
}
void MyStack::Push(int n){
  if(top<=10){
    top++; 
    arrayC[top]=n;
  }
  else
    cout<<"Full"<<endl;
}
int MyStack::Pop(){
  if(top>-1){
    int tmp=arrayC[top--];
    return tmp;
  }
  else{
    cout<<"Empty"<<endl;
    return 0;
  }
}
void MyStack::Print(){
  for(int i=top;i>=0;i--)
    cout<<arrayC[i]<<" ";
  cout<<endl;
}
MyStack::~MyStack(){
  if(arrayC!=NULL)
    delete[]arrayC;
  arrayC=nullptr;
}

void PrintMenu(){
  cout<<endl;
  cout<<" 1. s.Push"<<endl;
  cout<<" 2. s.Pop" <<endl;
  cout<<" 3. s.Print"<<endl;
  cout<<" 4. Quit"<<endl;
  cout<<"입력) ";
}
