/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10809                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10809                          #+#        #+#      #+#    */
/*   Solved: 2026/01/14 14:58:33 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int main(void)
{
    string S;
    cin >> S;
    int itr = 26;
    int S_size = S.size();

    for (int i = 0; i < itr; i++) // ?�파�??�서?��?
    {
        bool isIn = false;
        for (int j = 0; j < S_size; j++)
        {
            if (S[j] == ('a' + i))
            {
                cout << j << " ";
                isIn = true;
                break;
            }
        }

        if (isIn != true)
        {
            cout << -1 << " ";
        }
    }
    return 0;
}
