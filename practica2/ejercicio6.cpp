#include <iostream>
using namespace std;

int main(){
    int tot_casos; cin>>tot_casos;
    int caso, minimo;
    for(int i=0; i<tot_casos; i++)  /// entre  los casos
    {
        cin>>caso;
        int acumM=0, acumJ=0;
        int tiempo;
        for(int j=0; j<caso; j++)    /// cada caso
        {
            cin>>tiempo;    //60

            acumM = acumM+((tiempo/30)*10);
            if(tiempo%30>=0)
            {
                acumM=acumM+10;
            }

            acumJ = acumJ+((tiempo/60)*15);
            if(tiempo%60>=0)
            {
                acumJ=acumJ+15;
            }
        }
        minimo=min(acumM,acumJ);
        if(minimo==acumJ && minimo==acumM)
        {
            cout<<"Case "<<1+i<<": Mile Juice "<<minimo<<endl;
        }
        else if(minimo == acumM)
        {
            cout<<"Case "<<1+i<<": Mile "<<minimo<<endl;
        }
        else if(minimo == acumJ)
        {
            cout<<"Case "<<1+i<<": Juice "<<minimo<<endl;
        }
    }

    return 0;
}
