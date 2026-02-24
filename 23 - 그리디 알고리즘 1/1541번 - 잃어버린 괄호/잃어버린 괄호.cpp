/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1541                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1541                           #+#        #+#      #+#    */
/*   Solved: 2026/02/24 16:31:52 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

// Better Solution
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int result = 0;
    int num = 0;
    bool minusMode = false;

    /* ※ <식이 string으로 주어지는 경우 파싱(Parsing)> */
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];

        if (isdigit(c))
        {
            num = num * 10 + (c - '0');
        }
        else    // 연산자를 만났을 때
        {
            if (!minusMode)
                result += num;
            else
                result -= num;

            num = 0;
            if(c == '-')
                minusMode = true;
        }
    }
    // 마지막 숫자 반영
    if (!minusMode)
        result += num;
    else
        result -= num;

    cout << result << "\n";
    return 0;
}