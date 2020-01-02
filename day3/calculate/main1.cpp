#include <iostream>
#include "circle.h"
using namespace std;
int main(){
  Circle circleArray[3]={Circle(10),Circle(20),Circle()};

  for(int i=0;i<3;i++)
    cout<<"Circle "<<i<<"의 면적은 "<<circleArray[i].getArea()<<endl;
}
