#include <iostream>
using namespace std;
class Rectangle{
  int width,height;
  public:
  Rectangle(){
    width=1;
    height=1;
  }
  Rectangle(int w,int h):width(w),height(h){}
  Rectangle(int l):width(l),height(l){}
  bool isSquare(){
    return (width==height);
  }
  ~Rectangle(){
    cout<<"정사각형"<<width<<"소멸"<<endl; 
  }
};

int main(){
  Rectangle rect1;
  Rectangle rect2(3,5);
  Rectangle rect3(3);

  if(rect1.isSquare())cout<<"Rect1은 정사각형이다."<<endl;
  if(rect2.isSquare())cout<<"Rect2은 정사각형이다."<<endl;
  if(rect3.isSquare())cout<<"Rect3은 정사각형이다."<<endl;

  return 0;
}
