//Viktor Kolev f.n. 71776
#include<iostream>
using namespace std;

int main(){
    int R,K;
    cin>>R>>K;
    while(R<3 || R>10 || K<3 || K>10){
        cout<<"R & K trqbva da sa mejdu 3 i 10, vuvedete gi otnovo:";
        cin>>R>>K;
    }

    int arr1[10][10],arr2[10][10],arr3[10][10],arr_sums[10][10];
    for(int i=0;i<R;i++){
        for(int u=0;u<K;u++){
            cin>>arr1[i][u];
            while(arr1[i][u]<0 || arr1[i][u]>22){
                cout<<"vuvedi stoinost mejdu 0 i 22: ";
                cin>>arr1[i][u];
            }
        }
    }
    //sledvashtiq for poprincip e bezmislen :D
    for(int i=0;i<R;i++){
        for(int u=0;u<K;u++){
            arr2[i][u]=1;
        }
    }

    for(int i=0;i<R;i++){
        for(int u=0;u<K;u++){
            arr3[i][u]=0;
            arr3[i][u]+=R*K*arr1[i][u]; //tui kato vtoriq masiv e vinagi s 1ci nqma nujda da go obhojdame a samo da smetnem broq elementi
        }
    }

    for(int i=0;i<R;i++){
        for(int u=0;u<K;u++){
            cout<<" "<<arr3[i][u];
    }
    cout<<endl;
    }



    return 0;
}
