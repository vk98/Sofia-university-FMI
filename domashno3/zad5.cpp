//Viktor Kolev f.n. 71776
#include<iostream>
#include<string>
using namespace std;

string decimal_to_binary(int n,string binary){
    if(n!=0)
        return decimal_to_binary(n/2,(n%2==0 ?"0":"1")+binary);
    else return binary;
}
int main(){
    int n;
    cin>>n;
    while(n<1000 || n>1000000){
            cout<<"vuvedete chislo mejdu 1000 i 1 000 000 :";
            cin>>n;
    }
    int k;
    cin>>k;
    string pattern="";

    for(int i=0;i<k;i++)
    pattern+="0";

    string binary=decimal_to_binary(n,"");
    cout<<binary<<" - ";

    if(binary.find(pattern) == -1){
        cout<<"ne sadarja "<<k<<" broi 0"<<endl;
    }
    else{
        cout<<"sadarja "<<k<<" broi 0"<<endl;
    }

    return 0;

}
