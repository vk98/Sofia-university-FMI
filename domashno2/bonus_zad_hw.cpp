//Viktor Kolev f.n.71776
#include<iostream>
using namespace std;

int main(){

    int a[10],x;
    cout<<"vuvedete 10 elementa na masiva:";
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    cout<<"vuvedete x:";
    cin>>x;
    int pointer;
    for(int i=0;i<10;i++){
        if(x==a[i]){
            pointer=i;
            break;
        }
    }
    for(int i=pointer;i<9;i++){
        a[i]=a[i+1];
    }
    a[9]=-1;
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}
