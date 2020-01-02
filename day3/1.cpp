#include <iostream>
using namespace std;

void set_array(int *p,int n){
  int k;
  for(int i=1;i<=n;i++){
    cout<<i<<"번째 정수: "; 
    cin>>k;
    p[i]=k;
  }
}
int get_sum(int *p,int n){
  int sum=0;
  for(int i=0;i<n;i++)
    sum+=p[i];
  return sum;
}
int main(){
  cout<<"입력할 정수의 개수는?";
  int n;
  cin>>n;
  if(n<=0)return 0;
  int *p=new int[n];
  if(!p){
    cout<<"메모리를 할당할 수 없습니다.";
    return 0; 
  }

  set_array(p,n);
  int sum=get_sum(p,n);
  cout<<"합 ="<<sum<<" 평균 = "<<sum/n<<endl;

  delete[]p;
}
