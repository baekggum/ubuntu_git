#include <iostream>
using namespace std;
class Circle{
  int radius; int *p;
  public:
  Circle():radius(10){ p=NULL; cout << "Constr.\n"; }
  Circle(int radius){
    p=NULL; cout<< "Constr.\n"; this->radius=radius; 
  }
  ~Circle(){
    cout<< "Destructor\n";
    if(p != NULL){
      delete p;
      cout<<" p Deleted\n"; 
    } 
  }
  int getRadius(){return radius;}
  void testAlloc(){p= new int(10);}
};
void testFunc(Circle *c){ cout << "testFunc: "<<c->getRadius()<<endl;}

int main(){
  Circle c3(30);
  Circle c;
  c3.testAlloc();

  testFunc(&c3);
  return 0;
}
