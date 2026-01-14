/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2675                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2675                           #+#        #+#      #+#    */
/*   Solved: 2026/01/14 15:20:16 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        int R;
        string S;
        cin >> R >> S;
        for (int i = 0; i < S.size(); i++)
        {
            for (int j = 0; j < R; j++) // 주의) while(R--)로 하면 R 자체가 수정되어
            {                           //       다음 i에서 R이 0으로 시작함.
                cout << S[i];
            }
        }
        cout << endl;
    }

    return 0;
}