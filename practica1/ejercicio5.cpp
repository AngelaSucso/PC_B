#include <iostream>
using namespace std;

int main(){
    int casos, n1, n2;
    cin>>casos;

    while(casos!=0){
        cin>>n1>>n2;

        if(n1<n2){
            cout<<"<"<<endl;
        }
        else if(n1>n2){
            cout<<">"<<endl;
        }else{
            cout<<"="<<endl;
        }
        casos--;
    }

    return 0;
}
