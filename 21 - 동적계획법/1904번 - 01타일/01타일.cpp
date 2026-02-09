/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1904                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1904                           #+#        #+#      #+#    */
/*   Solved: 2026/02/09 10:25:47 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int dp[1000001];
// 00 & 1

int BackTrace(int n)
{
    dp[1] = 1;
    dp[2] = 2;
    if (n == 1 || n == 2)
    {
        return dp[n];
    }

    for (int i = 3; i <= n; i++)
    {
        dp[i] = (dp[i - 2] + dp[i - 1]) % 15746;
    }
    return dp[n];
}

int main()
{
    int N;
    cin >> N;
    cout << BackTrace(N) << "\n";
    return 0;
}