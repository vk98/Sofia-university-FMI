//Viktor Kolev f.n. 71776
#include<iostream>
using namespace std;



int main()
{
    int n,k;
    cin>>n>>k;
    while(n<40 || n>10040 || k<10 || k>20){
        cout<<"vuvedete broi gosti mejdu 40 i 10040 i kapacitet na stai mejdu 10 i 20 ";
        cin>>n;
    }

    return 0;
}
