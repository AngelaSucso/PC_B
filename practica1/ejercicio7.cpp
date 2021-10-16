#include <iostream>
using namespace std;

int main(){
    int casos;
    while (cin>>casos){
        if (casos==0){
            break;
        }else{
            int coor_N, coor_M;
            cin>>coor_N>>coor_M;
            for (int i=0; i<casos; i++)
            {
                int coor_X, coor_Y;
                cin>>coor_X>>coor_Y;
                if ((coor_X==coor_N) || (coor_Y==coor_M)){
                    cout<<"divisa"<<endl;
                }
                else if ((coor_X<coor_N) && (coor_Y>coor_M)){
                    cout<<"NO"<<endl;
                }
                else if ((coor_X>coor_N) && (coor_Y>coor_M)){
                    cout<<"NE"<<endl;
                }
                else if ((coor_X<coor_N) && (coor_Y<coor_M)){
                    cout<<"SO"<<endl;
                }
                else if ((coor_X>coor_N) && (coor_Y<coor_M)){
                    cout<<"SE"<<endl;
                }
            }   
        }
    }
    return 0;
}