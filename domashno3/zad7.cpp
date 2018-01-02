//Viktor Kolev f.n. 71776
#include<iostream>
using namespace std;

bool equal_digits(int n){
    if(n/10==0)return true;
    if(n%10== n/10%10)return equal_digits(n/10);
    return false;
}

int main(){
    int n=1;
    while(equal_digits(n*18)==false){
        n++;
        //cout<<n*18<<endl;
    }
    cout<<"chisloto e :"<<n;

    return 0;
}
