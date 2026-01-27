/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 14425                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/14425                          #+#        #+#      #+#    */
/*   Solved: 2026/01/27 18:51:11 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    unordered_set<string> us;
    while (N--)
    {
        string s;
        cin >> s;
        us.insert(s);
    }

    int cnt = 0;
    while (M--)
    {
        string s;
        cin >> s;
        if (us.count(s))
        {
            cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}