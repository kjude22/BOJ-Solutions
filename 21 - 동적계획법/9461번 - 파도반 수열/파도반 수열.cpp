/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 9461                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/9461                           #+#        #+#      #+#    */
/*   Solved: 2026/02/09 11:21:14 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

long long dp[101];      // long long 의심하기!!

long long BackTrace(int n)
{
    dp[1] = dp[2] = dp[3] = 1;
    dp[4] = dp[5] = 2;

    if (n >= 1 && n <= 5)
    {
        return dp[n];
    }

    for (int i = 6; i <= n; i++)
    {
        dp[i] = dp[i - 5] + dp[i - 1];
    }
    return dp[n];
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        cout << BackTrace(N) << "\n";
    }
    return 0;
}