/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2566                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2566                           #+#        #+#      #+#    */
/*   Solved: 2026/01/15 10:36:28 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int main()
{
    int arr[9][9];

    int max = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] >= max)
            {
                max = arr[i][j];
            }
        }
    }
    cout << max << endl;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (arr[i][j] == max)
            {
                cout << i + 1 << " " << j + 1 << endl;
                return 0;
            }
        }
    }
}