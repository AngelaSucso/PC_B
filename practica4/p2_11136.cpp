#include <iostream>
#include <set>
using namespace std;

int main()
{
    int casos, k, a, j, i;
    multiset<int>billetes;
    long long rpta;
    while(cin>>casos)
    {
        if(casos==0){
            return 0;
        }else{
            rpta = 0;
            billetes.clear();
            j=1;
            while(j<=casos){
                cin>>k;
                i=1;
                while(i<=k){
                    cin>>a;
                    billetes.insert(a);
                    i++;
                }
                rpta += *billetes.rbegin() - *billetes.begin();
                j++;

                billetes.erase(billetes.begin());
                billetes.erase(billetes.find(*billetes.rbegin()));
            }
            cout<<rpta<<"\n";
        }
    }
}