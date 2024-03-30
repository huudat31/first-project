#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
const ll mod = (ll)1e9+7;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // Nhap N
    int N;
    cin >> N;

    cout << "N: " << N;
    //  khởi tạo  và Nhập giá trị của mảng
    vector<vector<char>> a(N, vector<char>(N));
    for(int i = 0;i< N;i++)
        for(int j = 0 ;j<N;j++)
            cin >> a[i][j];

    cout << "a: " << a;
    // khai báo và gán toàn bộ giá trị của dp = 0
    // vector<vector<ll>> dp(N, vector<ll>(N,0));



    // // sử dụng quy hoạch động áp dụng các trường hợp còn lại
    for(int i = 0;i< N;i++){
        for(int j = 0;j<N;j++){
            // khởi tạo giá trị cơ sở
            if(a[0][1] == '.' || a[1][0] == '.') dp[0][0] = 1;

            // với mỗi giá trị dp[i][j] += dp[i-1][j]  nếu a[i-1][j] == '.'
           if(a[i-1][j] == '.' && i - 1 >= 0) {
             dp[i][j] += dp[i-1][j] ;
           }

           // Với mỗi giá trị dp[i][j] += dp[i][j-1] nếu a[i][j-1] == '.'
           if(a[i][j-1] == '.' && j - 1 >= 0) {
             dp[i][j] += dp[i][j-1];
           }
           dp[i][j] %= mod;
        }
        cout<< dp[i][j];
    }
    cout<< dp[N-1][N-1];
    return 0;
}
