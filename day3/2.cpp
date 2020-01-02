#include <iostream>
using namespace std;

class Circle{
  int radius;
  public:
  Circle():radius(1){cout<<"생성자 실행 radius= "<<radius<<endl;}
  Circle(int r):radius(r){cout<<"생성자 실행 radius= "<<radius<<endl;}
  void setRadius(int r){radius=r;}
  double getArea(){return 3.14*radius*radius;}
  ~Circle(){cout<<"소멸자 실행 radius= "<<radius<<endl;}
};
int main(int argc,char* argv[]){
  int r;
  while(true){
    cout<<"정수 반지름 입력(음수이면 종료)>> ";
    cin>>r;
    if(r<=0)
      break;
    Circle* p=new Circle(r);
    cout<<"원의 면적은 "<<p->getArea()<<endl;
    delete p;
  }
  return 0;
}
