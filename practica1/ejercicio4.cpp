#include <iostream>
using namespace std;

int main()
{
    int casos, f, c;
    cin>>casos;

    while(casos!=0){
        cin>>f>>c;
        int resp = (f/3)*(c/3);
        cout<<resp<<endl;
        casos--;
    }

    return 0;
}
