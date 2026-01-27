/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1620                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1620                           #+#        #+#      #+#    */
/*   Solved: 2026/01/27 19:27:42 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    unordered_map<string, int> um;
    vector<string> v;
    for (int i = 1; i <= N; i++)
    {
        string s;
        cin >> s;
        um.insert({s, i});
        v.push_back(s);
    }

    while (M--)
    {
        string cmd;
        cin >> cmd;
        if (cmd[0] > '0' && cmd[0] <= '9') // 숫자
        {
            int n = stoi(cmd);
            cout << v[n - 1] << "\n";
        }
        else
        { // 문자열
            int key = um[cmd];
            cout << key << "\n";
        }
    }
    return 0;
}