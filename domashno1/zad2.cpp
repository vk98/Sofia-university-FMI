//Viktor Kolev zad2
#include<iostream>
using namespace std;

int main()
{
   int sum=0,a=1;
   while(a>=1){
    cin>>a;
    while(a>200)
        {
            cout<<"chisloto e izvun intervala vuvedi otnovo";
            cin>>a;

        }
    sum+=a;
   }
   cout<<sum;
    return 0;
}
