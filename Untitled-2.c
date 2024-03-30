#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = (ll)1e9;
int a[1005];
ll f[1005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin.tie(0);
    int n;
    cin >> n;
    a[0] = a[n+1] = 0;
    for(int i = 1;i <= n;i++){ cin >> a[i];}
    f[0] = 1;
    if(a[1] == 1 || a[1] == 0)f[1]= 1;
    if(a[2] == 0) f[2] = f[1]+ 1;
    else if(a[2] == 1) f[2] = f[1];
    for(int i = 3;i <= n+1;i++ ){
        if(a[i]== 0){
            f[i]= f[i-1] +f[i-2];
            if(a[i-3]== 0){
                f[i] += f[i-3];
            }
            f[i] %= mod;
        }
        if(a[i] == 1){
            f[i]= f[i-1];
        }
    
    }
    cout<< f[n+1];
    }
    