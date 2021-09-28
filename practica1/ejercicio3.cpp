#include <iostream>
using namespace std;

int main()
{
    int pos, c1, c2, c3;
    int grado=40, total=9*360, acum=0;

    while(cin>>pos>>c1>>c2>>c3){
        acum=0;
        if(pos==0 && c1==0 && c2==0 && c3==0){
            break;
        }
        acum=acum+(360*2);
        if(pos>c1){
            acum = acum + (pos-c1)*9;
        }
        else{
            acum = acum + ((pos-c1)+grado)*9;
        }
        acum=acum+360;
        if(c2>c1){
            acum = acum + (c2-c1)*9;
        }
        else{
            acum = acum + ((c2-c1)+grado)*9;
        }
        if(c2>c3){
            acum = acum + (c2-c3)*9;
        }
        else{
            acum = acum + ((c2-c3)+grado)*9;

        }
        cout<<acum<<endl;
    }

    return 0;
}
