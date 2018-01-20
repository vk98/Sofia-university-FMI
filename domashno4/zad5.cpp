#include<iostream>
using namespace std;

int length(char c[],int i=0){
    if((int)c[i]<=32 || (int)c[i]>=126)return i;
    else{
        return length(c,i+1);
    }
}

bool notLetter(char a[]){
    for(int i=0;i<length(a);i++){
         if((int)a[i]<65 || ((int)a[i]>90 && (int)a[i]<97) || (int)a[i]>122){
            return true;
         }
     }
return false;
}


int main(){

    char a[100];
    cin>>a;
    while(notLetter(a)==true){
        cout<<boolalpha<<notLetter(a);
        cout<<"Please,enter letters only"<<endl;
        cin>>a;

    }
    for(int i=0;i<length(a);i++){
            if(a[i]=='T'){
                cout<<"Position: "<<i+1<<endl;
            }

    }
    return 0;
}

