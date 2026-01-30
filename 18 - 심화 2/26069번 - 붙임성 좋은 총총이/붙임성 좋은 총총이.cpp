/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 26069                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/26069                          #+#        #+#      #+#    */
/*   Solved: 2026/01/30 17:05:20 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int N;
    cin >> N;
    unordered_set<string> us;
    us.insert("ChongChong");
    while(N--)
    {
        string a, b;
        cin >> a >> b;
        if(us.count(a) || us.count(b))
        {
            us.insert(a).second;
            us.insert(b).second;
        }
    }
    cout << us.size() << "\n";
    return 0;
}