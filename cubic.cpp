#include <iostream>
#include <cmath>
using namespace std;
long long all_cubic[10010],new_diff[10010][10010];
int main(){
    int n;
    cin>>n;
    int diff[n+1];
    bool flag = false;
    for (int i = 1; i<=n; i++) {
        cin>>diff[i];
    }
    for (int i = 1; i<=10000; i++) {
        all_cubic[i] = pow(i,3);
    }
    for (int i = 1; i<=10000; i++) {
        for (int j = 1; j<=10000; j++) {
            new_diff[i][j] = all_cubic[j] - all_cubic[i];
        }
    }
    for (int c = 1; c<=n; c++) {
        for (int i = 1; i<=10000; i++) {
            if (flag==true && c!=n) {
                flag = false;
                break;
            }
            for (int j = 1; j<=10000; j++) {
                if (diff[c] == new_diff[i][j]) {
                    flag = true;
                    cout<<"YES"<<endl;
                }
            }
        }
        if (flag == false) {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}