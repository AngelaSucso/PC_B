#include <iostream>
#include <stack>
using namespace std;

int main(){
    int casos, error;
    string entr;
    while(cin>>casos && casos!=EOF){
        getchar();
        while (casos--){
            stack<char>pila;
            getline(cin,entr);
            error=0;
            for(int j=0; j<entr.size(); j++){
                if(entr[j]=='['||entr[j]=='('){
                    pila.push(entr[j]);
                }
                else if(!pila.empty()){
                    if((pila.top()=='[')&&(entr[j]==']')){
                        pila.pop();
                    }
                    else if((pila.top()=='(')&&(entr[j]==')')){
                        pila.pop();
                    }
                }else{
                    error=1;
                }
            }
            if(error==1||!pila.empty()){
                cout<<"No"<<endl;
            }else{
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}
