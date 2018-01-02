//Viktor Kolev f.n. 71776
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n<5 || n>105){
            cout<<"vuvedete chislo mejdu 5 i 105 :";
            cin>>n;
    }
    float drobi[105][2];
    for(int i=0;i<n;i++){
        for(int u=0;u<2;u++){
            cin>>drobi[i][u];
        }
    }

    for(int i=0;i<n;i++){

        for(int u=0;u<2;u++){
            cout<<drobi[i][u];
            if(u==0)cout<<" / ";
        }
        int percentage=drobi[i][0]/drobi[i][1] *100;
        cout<<" = "<<percentage<<"%"<<endl;
    }




    return 0;
}
