/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 16139                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/16139                          #+#        #+#      #+#    */
/*   Solved: 2026/02/10 21:37:42 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int arr[26][200001]; // 알파벳 * 문자열 길이

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string S;
    int q;
    cin >> S >> q;

    for (int i = 0; i < S.size(); i++)
    {
        int idx = S[i] - 'a';

        if (i == 0)
        {
            arr[idx][i] = 1;
            continue;
        }

        for (int j = 0; j < 26; j++)
        {
            if (j == idx)
            {
                arr[j][i] = arr[j][i - 1] + 1;
            }
            else
            {
                arr[j][i] = arr[j][i - 1];
            }
        }
    }

    while (q--)
    {
        char c;
        int l, r;
        cin >> c >> l >> r;

        int idx = c - 'a';
        int result;
        if (l > 0)
        {
            result = arr[idx][r] - arr[idx][l - 1];
        }
        else
        {
            result = arr[idx][r];
        }
        cout << result << "\n";
    }
    return 0;
}