/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 25192                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/25192                          #+#        #+#      #+#    */
/*   Solved: 2026/01/30 16:29:20 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    unordered_set<string> us;
    int cnt = 0;
    while (N--)
    {
        string s;
        cin >> s;

        if (s == "ENTER")
        {
            us.clear();
            continue;
        }
        else
        {
            if (us.insert(s).second) // 탐색 + 삽입 한번에
                cnt++;
            /*
            if (us.count(s) == 0) { // 탐색 1번
                us.insert(s);       // 탐색 1번 더
                cnt++;
                }
            */
        }
    }
    cout << cnt << "\n";
    return 0;
}