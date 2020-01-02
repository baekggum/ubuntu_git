#include <iostream>
#include <string>
using namespace std;
class Circle{
  public:
    int radius;
    string name;
    Circle():name(""){cout<<name<<"생성자"<<endl;}
    Circle(string n):name(n){cout<<name<<"생성자"<<endl;}
    ~Circle(){cout<<name<<"소멸자"<<endl;}
    double getArea(){
      return 3.14*radius*radius;
    }
};

Circle globalDonut("전역변수1번");
Circle globalPizza("전역변수2번");

void f(){
  Circle fDonut("F함수 지역변수 1번");
  Circle FPizza("F함수 지역변수 2번");
}
int main(){
  Circle mainDonut("메인함수 지역변수1번");
  Circle mainPizza("메인함수 지역변수2번");
  f();

  return 0;
}
