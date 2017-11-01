//Viktor Kolev zad3
#include<iostream>
using namespace std;

int main()
{
    int n,counter=0;
    cin>>n;
    while(n>0){
        n=n/10;
        counter++;
    }
    cout<<counter;
    return 0;
}
