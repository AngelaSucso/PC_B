#include <iostream>
#include <string.h>
#define TAM 100010
using namespace std;

int main()
{
    char letras[TAM], act_letra;
    int tam_letras,final,pos_act;
    int rpta[TAM];

    while(cin>>letras+1)
    {
        final=pos_act=rpta[0]=0;
        tam_letras=strlen(letras+1);
        int iter=1;
        while(iter<=tam_letras)
        {
            act_letra=letras[iter];
            if(act_letra=='['){
                pos_act=0;
            }
            else if(act_letra==']'){
                pos_act=final;
            }else{
                rpta[iter]=rpta[pos_act];
                rpta[pos_act]=iter;
                if(pos_act==final){
                    final=iter;
                }
                pos_act=iter;
            }
            iter++;
        }
        int ini=rpta[0];
        for(int i=ini; i>0; i=rpta[i]){
            cout<<letras[i];
        }
        cout<<endl;;
    }
    return 0;
}