/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1157                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1157                           #+#        #+#      #+#    */
/*   Solved: 2026/01/14 17:24:02 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int main()
{
    string S;
    int cnt[26] = {};
    fill(cnt, cnt + 26, 0);

    cin >> S;
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] - 'a' >= 0 && S[i] - 'a' < 26)
        {
            int idx = S[i] - 'a';
            cnt[idx]++;
        }
        else if (S[i] - 'A' >= 0 && S[i] - 'A' < 26)
        {
            int idx = S[i] - 'A';
            cnt[idx]++;
        }

        /*  대소문자 변환 간소화
            if (c >= 'a' && c <= 'z') {
                c = c - 32;               // 대문자로 변환
            }
            cnt[c - 'A']++
        */
    }

    int max = 0;
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] > max)
        {
            max = cnt[i];
        }
    }

    int output_int;
    int M = 0;
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] == max)
        {
            M++;
            output_int = i;
        }
    }

    if (M > 1)
    {
        cout << "?" << endl;
    }
    else if (M == 1)
    {
        char output_char = output_int + 'A';
        cout << output_char << endl;
    }
    return 0;
}