#include <iostream>
using namespace std;

int main(){
    int num, acum=0; //num = 11

    while(cin>>num){
        if(num==0){
            break;
        }
        while(num!=0){
            acum=acum+(num%10);
            num=num/10;
            if(num==0 && acum>=10){
                num=acum;
                acum=0;
            }
        }
        if(acum != 0){
            cout<<acum<<endl;
        }else{
            cout<<num<<endl;
        }
        acum=0;
    }

    return 0;
}
