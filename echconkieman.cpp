#include<bits/stdc++.h>

using namespace std;
int n,m;
int a[100][100];
int dp[100][100];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>> n>> m;
    // nhap cac gia tri của mảng ban đầu
    for(int i = 0 ;i < n;i++){
        for(int j = 0 ;j< m;j ++){
            cin >> a[i][j];
        }
    }
    // vòng for đi qua các giá trị và  chọn phần tử lớn nhất trên đường nó đi
    for(int i =0 ;i< n;i++){
        for(int j = 0;j< m;j++){
            if(i == 0 && j == 0) {
                dp[0][0] =a[0][0];
            }
            else if(i == 0 && j != 0) {
                dp[0][j] = dp[0][j-1] + a[i][j];
            }
            else if(i != 0 && j == 0) {
                dp[i][0] = dp[i-1][0] + a[i][j];
            }
            else
            {
                dp[i][j] = max(dp[i-1][j]+ a[i][j],dp[i][j-1]+a[i][j]);
            }
        }
    }

    cout<< dp[n-1][m-1];
    return 0;
}

