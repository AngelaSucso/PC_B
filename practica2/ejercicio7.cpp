#include <iostream>
using namespace std;

int main(){
    int num_prob, fila, colum, maxim = 0;
    char caract;
    cin>>num_prob;
    for(int i = 0; i < num_prob; ++i) {
        cin>>caract>>fila>> colum;
        maxim=0;
        if(caract=='r') {
            maxim = min(fila, colum);
        } else if(caract=='Q') {
            maxim = min(fila, colum); 
        } else if(caract=='K') {
            maxim = ((fila+1)/2)*((colum+1)/2);
        } else if(caract=='k') {
           if((fila*colum)%2){
               maxim = (fila*colum/2)+1;
           }else{
               maxim = (fila*colum/2);
           }
        }
        cout << maxim << "\n";
    }
}