#include<iostream>
using namespace std;

int main(){
    char a[10];
    int numbers=0,capitals=0,lowercase=0;
    for(int i=0;i<10;i++){
        cin>>a[i];
        if((int)a[i]>=48 && (int)a[i]<=57)numbers++;
        if((int)a[i]>=65 && (int)a[i]<=90)capitals++;
        if((int)a[i]>=97 && (int)a[i]<=122)lowercase++;
    }

    cout<<"cifri: "<<numbers<<", glavni bukvi: "<<capitals<<", malki bukvi: "<<lowercase;
    return 0;
}

