//Viktor Kolev f.n. 71776
#include<iostream>
using namespace std;

int main(){
    int arr[4];
    int n=1;
    int i=0;
    while(i<=3){
        if(n%2==1 && n%3==2 && n%4==3 && n%5==4 && n%6==5 && n%7==6 && n%8==7 && n%9==8){
            arr[i]=n;
            i++;
        }
        n++;
        cout<<n<<" found:"<<i<<endl;
    }
    for(int u=0;u<4;u++){
        cout<<arr[u]<<" "<<endl;
    }

    return 0;
}
