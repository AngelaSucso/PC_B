#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int mcd(vector<pair<int,int>> datos)
{
    int a = datos[0].second; 
    for(int i = 1; i < datos.size(); i++)
        a = __gcd(a, datos[i].second);
    return a; 
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(vector<pair<int,int>> &num, int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++){
            if (num[j].first < num[min_idx].first)
                min_idx = j;
        }

        swap(&num[min_idx].first, &num[i].first);
    }
}

int main()
{

    vector<pair<int, int>> pares;

    string registro;
    int q_num, periodo;
    while (true)
    {
        cin >> registro;
        if (registro == "#")
        {
            break;
        }
        cin >> q_num >> periodo;
        pares.push_back(make_pair(q_num, periodo));
    }
    int K;
    cin >> K;

    int salto = mcd(pares);
    int cont = salto;
    vector<pair<int,int>> rpta;
    vector<pair<int,int>> tmp;

    while(true){
        for(int i=0; i<pares.size(); i++){
            int div = pares[i].second%cont;
            if(div==0){
                tmp.push_back(pares[i]);
            }
        }

        if(tmp.size()>1){
            selectionSort(tmp,tmp.size());
            for(int i=0; i<tmp.size(); i++){
                rpta.push_back(tmp[i]);
            }
        }
        else if(tmp.size()==1){
            rpta.push_back(tmp[0]);
        }
        if(rpta.size()==K){
            break;
        }

        cont+=salto;
    }

    for (int i = 0; i < pares.size(); i++)
    {
        cout << pares[i].first << endl;
    }

    return 0;
}