#include <iostream>
#include <string>
using namespace std;

class Person{
    int age;
    string name;
public:
    Person(string n="",int a=0):name(n),age(a){}
    int getAge(){return age;}
    void setAge(int age){this->age=age;}
    string getName(){return name;}
    void setName(string name){this->name=name;}
    void print(){
        cout<<"이름: "<<name<<endl;
        cout<<"나이: "<<age<<endl; 
    }
    ~Person(){}
};
int main(){
    Person p1("홍길동",20);
    p1.print();
    return 0;
}
