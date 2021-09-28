#include <iostream>
#define INF 10000000000
using namespace std;

int main(){

    int casos, prueba;
    cin>>casos;

    while(casos!=0){
        int menor=INF, mayor=0;
        cin>>prueba;
        int dist;
        for(int i=0; i<prueba; i++){
            cin>>dist;
            if(max(dist,mayor)>mayor){
                mayor=max(dist,mayor);
            }
            if(min(dist,menor)<menor){
                menor=min(dist,menor);
            }
        }
        cout<<(mayor-menor)*2<<endl;

        casos--;
    }

    return 0;
}
