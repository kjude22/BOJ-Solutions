/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1764                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1764                           #+#        #+#      #+#    */
/*   Solved: 2026/02/02 10:24:39 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    unordered_set<string> us;
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        us.insert(s);
    }
    int cnt = 0;
    vector<string> v;
    for (int i = 0; i < M; i++)
    {
        string s;
        cin >> s;
        if (us.count(s))
        {
            v.push_back(s);
            cnt++;
        }
    }
    sort(v.begin(), v.end());
    cout << cnt << "\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }
    return 0;
}