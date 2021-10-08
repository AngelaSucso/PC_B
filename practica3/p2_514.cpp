#include <iostream>
#include <stack>
#define TAM 1001
using namespace std;

int main() {
	int N, j, b[TAM];

	while (cin >> N) {
		if (N == 0){
			break;
        }else{
            while (true) {
                stack<int> tren;
                j = 1;
                int ind=j-1;
                cin >> b[0];
                if (b[0] == 0){
                    cout << endl;
                    break;
                }
                for (int i = 1; i < N; i++)
                    cin >> b[i];

                while(j<=N){
                    tren.push(j);
                    while(!tren.empty() && tren.top() == b[ind]){
                        tren.pop();
                        ind++;
                        if(ind>=N)
                            break;
                    }
                    j++;
                }
                cout<<(tren.empty()? "Yes" : "No")<<endl;
            }
        }
	}
	return 0;
}