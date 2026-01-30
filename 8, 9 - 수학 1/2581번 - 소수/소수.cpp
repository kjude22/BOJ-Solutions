/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2581                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2581                           #+#        #+#      #+#    */
/*   Solved: 2026/01/23 16:55:05 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;
    int cnt = 0;
    int sum = 0;
    int min_p;

    for (int i = M; i <= N; i++)
    {
        if (i == 1)
        {
            continue;
        }

        bool is_prime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime == false)
        {
            continue;
        }
        else
        {
            cnt++;
            sum += i;
            if (cnt == 1)
            {
                min_p = i;
            }
        }
    }
    if (cnt == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << sum << endl
             << min_p << endl;
    }

    return 0;
}