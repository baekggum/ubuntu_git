#include <iostream>
#include "add.h"
using namespace std;

Adder::Adder(int a,int b){
  op1=a;op2=b;
}
int Adder::process(){
  return op1+op2;
}
