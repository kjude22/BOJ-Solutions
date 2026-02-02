/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 4779                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/4779                           #+#        #+#      #+#    */
/*   Solved: 2026/02/02 10:32:47 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <cmath>
using namespace std;

char arr[1000000];

void Cantor(int p, int r)
{
    if (r > p + 1)
    {
        int q1 = p + (r - p) / 3;
        int q2 = p + 2 * (r - p) / 3;
        Cantor(p, q1);
        Cantor(q2, r);
    }
    else if (r == p + 1)
    {
        arr[p] = '-';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    while (cin >> N)
    {
        int R = pow(3, N);

        for (int i = 0; i < R; i++)
        {
            arr[i] = ' ';
        }
        Cantor(0, R);
        for (int i = 0; i < R; i++)
        {
            cout << arr[i];
        }
        cout << "\n";
    }
    return 0;
}