/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1316                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1316                           #+#        #+#      #+#    */
/*   Solved: 2026/01/14 21:00:03 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int cnt = 0;
    int N;
    cin >> N;

    while (N--)
    {
        string s;
        cin >> s;

        vector<char> v; // 그룹을 이미 이룬 글자들 vector
        bool isGrp = true;
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 0; j < v.size(); j++)
            {
                if (s[i] == v[j])
                {
                    isGrp = false;
                    break;
                }
            }
            if (isGrp == false)
            {
                break;
            }

            if (s[i] != s[i + 1])
            {
                v.push_back(s[i]);
                continue;;
            }
        }
        if (isGrp)
        {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}