//Viktor Kolev f.n. 71776
#include<iostream>
using namespace std;

void check(int n){
    int d=0;
    int n_copy=n;
    while(n>0){
        d+=n%10;
        n/=10;
    }
    if(n_copy%d==0){
        cout<<"deli se";
    }
    else{
        cout<<"ne se deli";
    }
}
int main(){

    int n;
    cin>>n;
    while(n<111 || n>22222){
        cout<<"vuvedete chislo mejdu 111 i 22222 ";
        cin>>n;
    }
    check(n);


    return 0;
}
