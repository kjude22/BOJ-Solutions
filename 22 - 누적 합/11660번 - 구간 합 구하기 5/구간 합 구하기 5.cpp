/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11660                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11660                          #+#        #+#      #+#    */
/*   Solved: 2026/02/24 15:12:22 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int sum_arr[1050625]; // 1025*1025

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int n;
            cin >> n;
            sum += n;
            sum_arr[i * N + j] = sum;
        }
    }
    for (int i = 0; i < M; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int result;
        if ((x2 - x1) == 0 && (y2 - y1) == 0)
        {
            result = (sum_arr[(x2 - 1) * N + (y2 - 1)] - sum_arr[(x1 - 1) * N + (y1 - 1) - 1]);
            cout << result << "\n";
        }
        else if (y1 == 1 && y2 == N)
        {
            result = (sum_arr[(x2 - 1) * N + (y2 - 1)] - sum_arr[(x1 - 1) * N + (y1 - 1) - 1]);
            cout << result << "\n";
        }
        else
        {
            result = (sum_arr[(x2 - 1) * N + (y2 - 1)] - sum_arr[(x1 - 1) * N + (y1 - 1) - 1]);
            for (int j = x1; j < x2; j++)
            {
                result -= (sum_arr[j * N + (y1 - 1) - 1] - sum_arr[(j - 1) * N + (y2 - 1)]);
            }
            cout << result << "\n";
        }
    }
    return 0;
}