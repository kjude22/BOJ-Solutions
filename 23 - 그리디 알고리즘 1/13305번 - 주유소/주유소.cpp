/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 13305                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/13305                          #+#        #+#      #+#    */
/*   Solved: 2026/02/25 14:26:41 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

long long dist[100000];
long long cost[100001];

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N - 1; i++)
    {
        long long d;
        cin >> d;
        dist[i] = d;
    }
    for (int i = 0; i < N; i++)
    {
        long long c;
        cin >> c;
        cost[i] = c;
    }

    long long result = 0;
    long long minCost = cost[0];
    long long distSum = 0;
    for (int i = 1; i < N; i++)
    {
        if (cost[i] < minCost || i == N - 1)
        {
            distSum += dist[i - 1];
            result += distSum * minCost;

            minCost = cost[i];
            distSum = 0;
        }
        else
        {
            distSum += dist[i - 1];
        }
    }
    cout << result << "\n";
    return 0;
}