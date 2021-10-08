#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;


void insertionSort(vector<string> &vec, int n)
{
    int i, j;
    string key;
    for (i = 1; i < n; i++)
    {
        key = vec[i];
        j = i - 1;
 
        while (j >= 0 && vec[j] > key)
        {
            vec[j + 1] = vec[j];
            j = j - 1;
        }
        vec[j + 1] = key;
    }
}

int main(){
    char c;
    string frase = "";

    vector<string> palabras;
    while ((c = getchar ())!= EOF){
        frase += c;
    }

 
    string palabra = "";
    for(int i=0; i<frase.size(); i++){

        if(isalpha(frase[i])){
            frase[i]=tolower(frase[i]);
            palabra.push_back(frase[i]);
        }
        else if(palabra.size()!=0){
            bool flag=true;
            for(int j=0; j<palabras.size(); j++){
                if(palabras[j]==palabra){
                    flag=false;
                }
            }
            if(flag){
                palabras.push_back(palabra);
            }
            palabra="";
        }
    }

    insertionSort(palabras,palabras.size());

    for(int i=0; i<palabras.size(); i++){
        cout<<palabras[i]<<endl;
    }

    return 0;
}