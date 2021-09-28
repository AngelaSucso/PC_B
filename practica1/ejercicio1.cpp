#include <iostream>
#include <string>
using namespace std;

int main(){

    string texto;

    bool flag=true;
    while(cin>>texto){
        for(int i=0; i<texto.size(); i++){
            if(texto[i]=='"'){
                if(flag){
                    cout<<"``";
                    flag=false;
                }
                else if(!flag){
                    cout<<"''";
                    flag=true;
                }
            }
            else
                {
                cout<<texto[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
