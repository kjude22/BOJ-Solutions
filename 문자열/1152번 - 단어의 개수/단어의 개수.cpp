/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1152                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1152                           #+#        #+#      #+#    */
/*   Solved: 2026/01/14 15:34:39 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int cnt = 0;

    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ') // 공백이 연속인 경우는 없음
            cnt++;
    }
    cnt++; // 엔터(\n)는 공백으로 처리 안됨

    /* 예외처리 */
    if (s.front() == ' ') // 첫 글자가 공백인 경우
        cnt--;

    if (s.back() == ' ') // 마지막 글자가 공백인 경우
        cnt--;

    cout << cnt << endl;

    return 0;
}
