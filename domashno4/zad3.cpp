#include<iostream>
using namespace std;

int main(){
    for(int i=65;i<=90;i++){
        cout<<" Bukvata: "<<(char)i<<" ima ASCII kod: "<<i;
        if(i%2==0)cout<<endl;
    }
    return 0;
}

