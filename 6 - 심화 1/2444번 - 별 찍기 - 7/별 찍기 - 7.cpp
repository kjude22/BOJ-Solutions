/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2444                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2444                           #+#        #+#      #+#    */
/*   Solved: 2026/01/14 17:12:28 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int max = 2 * N - 1;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < (N - 1 - i); j++)
        {
            cout << " ";
        }
        for (int k = 0; k < (2 * i + 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < (i + 1); j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * (N - i - 1) - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}