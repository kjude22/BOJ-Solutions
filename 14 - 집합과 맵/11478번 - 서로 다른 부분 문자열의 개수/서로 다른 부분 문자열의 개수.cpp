/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11478                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11478                          #+#        #+#      #+#    */
/*   Solved: 2026/01/26 21:01:19 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    string s;
    cin >> s;

    unordered_set<string> us;
    for (int i = 1; i <= s.size(); i++) // 부분문자열 길이
    {
        for (int idx = 0; idx < s.size(); idx++) // 인덱스
        {
            if (idx + i > s.size())
            {
                break;
            }
            string sub = s.substr(idx, i);
            // cout << sub << " ";
            us.insert(sub);
        }
    }
    cout << us.size() << "\n";
    return 0;
}