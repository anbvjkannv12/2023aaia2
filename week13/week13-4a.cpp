#include<iostream>
using namespace std;
int GCD(int a, int b){
  if(a==0) return b;
  if(b==0) return a;
  return GCD(b,a%b);
}
int main(){
  int a,b;cin>>a>>b;
  cout<<GCD(a,b)<<endl;
  return 0;
}