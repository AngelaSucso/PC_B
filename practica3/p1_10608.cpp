#include<iostream>
#define K 10001
using namespace std;

int find(int x, int persona[]){
    if(persona[x] == x){
        return x;
    }
    return find(persona[x],persona);
}

int main(){
    int persona[K] , grupo[K];
    int casos, N, M, maxgrupo = 0;
    cin>>casos;

    while(casos!=0){
        cin>>N>>M;
        for(int i=1; i<= N; i++){
            persona[i] = i;
            grupo[i] = 0;
        }

        while(M--){
            int p1, p2, encontr1, encontr2;
            cin>>p1>>p2;
            encontr1 = find(p1,persona);
            encontr2 = find(p2,persona);
            if(encontr1 != encontr2){
                persona[encontr1] = encontr2;
            }
        }
        for(int i = 1;i<= N;i++){
            grupo[find(i,persona)]=grupo[find(i,persona)]+1;
        }

        for(int i = 1;i <= N;i++){
            if(maxgrupo < grupo[i]){
                maxgrupo = grupo[i];
            }
        }
        cout<<maxgrupo<<endl;

        maxgrupo = 0;
        casos--;
    }
}