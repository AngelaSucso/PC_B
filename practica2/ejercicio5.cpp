#include <iostream>
#define INF 100000000000
using namespace std;

int main()
{
    int cant_p, cant_pr, cant_h, cant_s;
    while(cin>>cant_p>>cant_pr>>cant_h>>cant_s)
    {
        bool precio_min = false;
        int precio_fin, mini=INF;
        while(cant_h!=0)
        {
            int precio, aux, maxi=0;
            cin>>precio;
            for(int j=0; j<cant_s; j++)
            {
                cin>>aux;
                if(aux>=maxi)
                {
                    maxi=aux;
                }
            }
            if(maxi>=cant_p && (precio*cant_p) <= cant_pr)
            {
                precio_fin = precio*cant_p;
                if(precio_fin<=mini){
                    mini = precio_fin;
                }
                precio_min = true;
            }
            cant_h--;
        }

        if(precio_min)
        {
            cout<<mini<<endl;
        }
        else
        {
            cout<<"stay home"<<endl;
        }
    }

    return 0;
}
