//Viktor Kolev f.n. 71776
#include<iostream>
using namespace std;

int fibonacci(int n)
{
  int a = 0, b = 1, c;
  if( n == 0)
    return a;
  for (int i = 2; i <= n; i++)
  {
     c = a + b;
     a = b;
     b = c;
  }
  return b;
}

int main(){
    int n;
    cin>>n;
    while(n<1 || n>40){
        cout<<"vuvedete chislo mejdu 1 i 40 ";
        cin>>n;
    }
    cout<<fibonacci(n);




    return 0;
}
