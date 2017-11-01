//Viktor Kolev zad5
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n<10 && n>99){
            cout<<"chisloto e izvun intervala vuvedi otnovo";
            cin>>n;
    }
    int a=10,sum=0;
    while(a<=n){
        sum+=a%10 + a/10%10;
        a++;
    }
    cout<<sum;

    return 0;
}


