#include <iostream>
using namespace std;

int teams[30000], aux[30000];

void hayunion(int A, int B){
    if (A == B){
        return;
    }
    if (aux[A] > aux[B]){
        teams[B] = A;
    }else{
        teams[B] = A;
        if (aux[A] == aux[B]){
            aux[B]=aux[B]+1;
        }
    }
}

int encontrar(int A){
    if (A != teams[A]){
        teams[A] = encontrar(teams[A]);
    }
    return teams[A];
}

int main(){
    int estud, grupos;
    int k, x, y, acum;
    int aux2, aux3;
    while (cin >> estud >> grupos){
        if(estud == 0 && grupos == 0){
            break;
        }else{
            for (int i = 0; i <= estud - 1; i++){
                teams[i] = i;
                aux[i] = 0;
            }
            for (int i = 1; i <= grupos; i++){
                cin>>k>>x;
                aux2=k-1;
                for (int i = 1; i <= aux2; i++){
                    cin >> y;
                    x=encontrar(x);
                    y=encontrar(y);
                    hayunion(x, y);
                }
            }
            acum = 0;
            aux3=estud-1;
            for (int i = 0; i <= aux3; i++){
                if (encontrar(i) == teams[0]){
                    acum++;
                }
            }
            cout<<acum<<endl;
        }
    }
    return 0;
}
