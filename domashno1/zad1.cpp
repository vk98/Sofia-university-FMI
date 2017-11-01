//Viktor Kolev zad1
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0,a;
    for(int i=0;i<n;i++){

        cin>>a;

        while(a<10 || a>5555)
        {
            cout<<"chisloto e izvun intervala vuvedi otnovo";
            cin>>a;

        }
        sum+=a;
    }
    cout<<sum;

    return 0;
}
