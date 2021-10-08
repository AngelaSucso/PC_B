#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    int casos; cin >> casos;
    string entrada;
    bool error = true;
    while (casos--){
        stack<char> signos;
        cin >> entrada;
        error=true;
        for (int i = 0; i < entrada.size(); i++){
            if (entrada[i] == '[' || entrada[i] == '('){
                signos.push(entrada[i]);
            }
            else if(entrada[i]!=' '){
                if(signos.size()){
                    if (entrada[i] == ')' && signos.top() != '('){
                        error = false;
                        break;
                    }
                    else if (entrada[i] == ']' && signos.top() != '['){
                        error = false;
                        break;
                    }else{
                        signos.pop();
                    }
                }else{
                    error = false;
                    break;
                }
            }
        }
        if ((signos.empty() && error) || entrada.size()==0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}
