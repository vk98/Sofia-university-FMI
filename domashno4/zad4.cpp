#include<iostream>
using namespace std;

int length(char c[],int i=0){
    if((int)c[i]<=32 || (int)c[i]>=126)return i;
    else{
        return length(c,i+1);
    }

}

int main(){
    char first[21], second[21];
    cin>>first;
    while(length(first)<10 || length(first)>20){
        cout<<"vuvedete otnovo duma mejdu 10 i 20 simvola, molq!"<<endl;
        cin>>first;
    }
    cin>>second;
    while(length(second)<10 || length(second)>20){
        cout<<"vuvedete otnovo duma mejdu 10 i 20 simvola, ako obichate!"<<endl;
        cin>>second;
    }
    char buffer;
    for(int i=0;i<5;i++){
        buffer=first[i];
        first[i]=second[i];
        second[i]=buffer;
    }
    if(length(first)>=length(second)){
        cout<<length(first)<<" "<<first;
    }
    else{
        cout<<length(second)<<" "<<second;
    }

    return 0;
}
