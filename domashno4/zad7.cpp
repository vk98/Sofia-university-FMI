#include<iostream>
using namespace std;

int pow(int n,int k,int result=1){
    if(k==0)return result;
    else{
        return pow(n,k-1,result*=n);
    }
}

int main(){
    int n,k;
    cin>>n>>k;

    cout<<pow(n,k);

    return 0;

}
