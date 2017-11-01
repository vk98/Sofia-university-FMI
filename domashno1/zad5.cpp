//Viktor Kolev zad5
#include<iostream>
using namespace std;

int main()
{
    int a=100;
    while(a<=999){
            int one,two,three;
        one=a%10;
        two=a/10%10;
        three=a/10/10%10;
        if(one!=two && one!=three && two!=three)cout<<a<<endl;
        a++;
    }

    return 0;
}

