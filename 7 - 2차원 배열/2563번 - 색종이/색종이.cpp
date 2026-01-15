/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2563                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2563                           #+#        #+#      #+#    */
/*   Solved: 2026/01/15 11:38:46 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int main()
{
    int map[100][100];

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            map[i][j] = 0;
        }
    }

    int area = 0;
    int N;
    cin >> N;
    while (N--)
    {
        int x, y;
        cin >> y >> x;
        for (int i = y; i < y + 10; i++)
        {
            for (int j = x; j < x + 10; j++)
            {
                if (map[i][j] == 0)
                {
                    map[i][j] = 1;
                    area++; // 추가하며 카운트!! (전체 순회 한번 더 안해도 됨)
                }
            }
        }
    }
    cout << area << endl;
    return 0;
}
