/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2559                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2559                           #+#        #+#      #+#    */
/*   Solved: 2026/02/10 21:16:27 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
using namespace std;
/*
int main()
{
    int N, K;
    cin >> N >> K;

    int sum = 0;
    vector<int> v;
    int max;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
        sum += v[i];
        if (i == K - 1)
        {
            max = sum;
        }
        else if (i > K - 1)
        {
            sum -= v[i - K];

            if (sum > max)
            {
                max = sum;
            }
        }
    }
    cout << max << "\n";
    return 0;
}
*/