#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t!=0){
        string caso;
        cin>>caso;
        int cont=0, acum=cont;

        for(int i=0; i<caso.size(); i++){
            if(caso[i]=='X'){
                acum=0;
            }else{
                acum++;
                cont=cont+acum;
            }
        }
        cout<<cont<<"\n";
        t--;
    }

    return 0;
}
