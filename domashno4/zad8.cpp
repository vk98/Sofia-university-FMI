#include<iostream>
using namespace std;

int length(char c[],int i=0){
    cout<<c[i]<<" ";
    if((int)c[i]<=32 || (int)c[i]>=126)return i;
    else{
        return length(c,i+1);
    }

}

int main(){

    char c[100]; //gfdgdgfdgfdgfdgdfgdfgdfgd
    cin>>c;
    cout<<length(c);



    return 0;
}

