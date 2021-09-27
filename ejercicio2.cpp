#include <iostream>
using namespace std;

int main(){
    int t,v,aux;
    cin>>t;
    while(t!=0){
        while(cin>>v){
            v=(((((v*567)/9)+7492)*235)/47)-498;
            aux = v%100;
            v = (aux-(aux%10))/10;
            cout<<abs(v)<<"\n";
        }
        t--;
    }
    return 0;
}
