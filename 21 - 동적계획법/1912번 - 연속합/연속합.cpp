/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1912                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1912                           #+#        #+#      #+#    */
/*   Solved: 2026/02/09 11:50:50 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

long long dp[100001];
long long arr[100001];

long long BackTrace(int n)
{
    dp[1] = arr[1];
    if (n == 1)
    {
        return dp[n];
    }
    for (int i = 2; i <= n; i++)
    {
        if (dp[i - 1] > 0)
        {
            dp[i] = dp[i - 1] + arr[i];
        }
        else
        {
            dp[i] = arr[i];
        }
    }
    return dp[n];
}

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        int n;
        cin >> n;
        arr[i] = n;
    }

    BackTrace(N);

    long long max = dp[1];
    for (int i = 2; i <= N; i++)
    {
        if (dp[i] > max)
        {
            max = dp[i];
        }
    }
    cout << max << "\n";
    return 0;
}