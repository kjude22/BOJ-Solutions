/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11866                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11866                          #+#        #+#      #+#    */
/*   Solved: 2026/01/29 13:44:29 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    queue<int> q;
    for (int i = 1; i <= N; i++)
    {
        q.push(i);
    }

    cout << "<";
    while (1)
    {
        for (int i = 0; i < K - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }

        cout << q.front();
        q.pop();

        if (!q.empty())
        {
            cout << ", ";
        }
        else
        {
            break;
        }
    }
    cout << ">\n";
    return 0;
}