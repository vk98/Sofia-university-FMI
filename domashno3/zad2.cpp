//Viktor Kolev f.n. 71776
#include<iostream>
using namespace std;

int main(){
    //int table[6][6]={{11,12,13,14,15,16},{21,22,23,24,25,26},{31,32,33,34,35,36},{41,42,43,44,45,46},{51,52,53,54,55,56},{61,62,63,64,65,66}};
    int table[6][6];
    int overallSum=0;
    for(int i=0;i<6;i++){
            for(int u=0;u<6;u++){
                cin>>table[i][u];
                    while(table[i][u]<10 || table[i][u]>99){
                        cout<<"vuvedi stoinost mejdu 0 i 22: ";
                        cin>>table[i][u];
                    }
            }
       }

    for(int i=0;i<6;i++){
            int sum=0;

            for(int u=0;u<6;u++){
                    if(table[i][u]%2!=0){
                        sum+=table[i][u];
                        cout<<table[i][u]<<", ";
                    }
                    else{
                        cout<<", ";
                    }
            }
            overallSum+=sum;
            cout<<"suma "<<sum<<endl;

    }
    cout<<"obshtata suma e :"<<overallSum;
    return 0;
}
