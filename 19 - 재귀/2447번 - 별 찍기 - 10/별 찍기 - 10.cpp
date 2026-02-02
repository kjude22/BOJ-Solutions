/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2447                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2447                           #+#        #+#      #+#    */
/*   Solved: 2026/02/02 11:59:23 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

char map[7000][7000]; // 3^8 = 6561

void drawStar(int x, int y, int n)
{
    if (n % 3 == 0)
    {
        int q1 = n / 3;
        int q2 = 2 * (n / 3);
        for (int i = q1; i < q2; i++)
        {
            for (int j = q1; j < q2; j++)
            {
                map[x + i][y + j] = ' '; // p : 시작점}}
            }
        }
        drawStar(x, y, n / 3);
        drawStar(x + q1, y, n / 3);
        drawStar(x + 2 * q1, y, n / 3);

        drawStar(x, y + q1, n / 3);
        drawStar(x + 2 * q1, y + q1, n / 3);

        drawStar(x, y + 2 * q1, n / 3);
        drawStar(x + q1, y + 2 * q1, n / 3);
        drawStar(x + 2 * q1, y + 2 * q1, n / 3);
    }
}

int main()
{

    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            map[i][j] = '*';
        }
    }

    drawStar(0, 0, N);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << map[i][j];
        }
        cout << "\n";
    }
    return 0;
}