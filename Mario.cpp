#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll mod = (ll)1e9;
int n;
 ll cnt = 0;
 int a[1005];

void Try(int i ){
    if(i ==0){
        cnt++;
        cnt % mod;
        }
    else if(i > 0){
        if(a[i] == 0){
            Try(i-1);
            if(i-2>0) Try(i-2);
            if(i-3 >0 && a[i-3] == 0)Try(i-3);
        }
        if(a[i] == 1)Try(i-1);
    }

}

int main(){
    cin >> n;

    for(int i = 1;i<=n;i++)cin >> a[i];
    Try(n+1);
    cout<< cnt;
}
