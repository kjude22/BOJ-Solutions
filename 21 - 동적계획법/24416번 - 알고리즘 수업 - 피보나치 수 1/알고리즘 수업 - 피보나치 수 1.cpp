/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 24416                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/24416                          #+#        #+#      #+#    */
/*   Solved: 2026/02/06 14:30:30 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int recur_cnt = 0;
int dp_cnt = 0;

int dp[41];

int fibonacci(int n) // 동적계획법
{
    if (n == 1 || n == 2)
    {
        return dp[n] = 1;
    }
    for (int i = 3; i <= n; i++)
    {
        dp_cnt++;
        dp[i] = dp[i - 2] + dp[i - 1];
    }
    return dp[n];
}

int fib(int n) // 재귀
{
    if (n == 1 || n == 2)
    {
        recur_cnt++;
        return 1;
    }
    return (fib(n - 2) + fib(n - 1));
}

int main()
{
    for (int i = 0; i < 41; i++)
    {
        dp[i] = -1;
    }

    int N;
    cin >> N;

    fib(N);
    fibonacci(N);

    cout << recur_cnt << " " << dp_cnt << "\n";

    return 0;
}