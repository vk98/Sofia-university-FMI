//Viktor Kolev zad5
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n<10 || n>200){
        cout<<"chisloto e izvun intervala vuvedi otnovo";
        cin>>n;
    }
    while(n>=7){
        if(n%7==0)cout<<n<<endl;
        n--;

    }
    return 0;
}



