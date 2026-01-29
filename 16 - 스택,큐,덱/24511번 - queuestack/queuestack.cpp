/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 24511                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/24511                          #+#        #+#      #+#    */
/*   Solved: 2026/01/29 15:14:11 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;

    vector<int> A;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;

        A.push_back(a);
        // 자료구조가 큐인 A의 i만 기록
        // 스택은 아무런 변화 X
    }

    vector<int> B;
    for (int i = 0; i < N; i++)
    {
        int b;
        cin >> b;
        if (A[i] == 0)
        {
            B.push_back(b);
        }
    }
    queue<int> q; // ※ 큐끼리만 생각하자!
    for (int i = B.size(); i > 0; i--)
    {
        q.push(B[i - 1]);
    }

    int M;
    cin >> M;
    vector<int> result;
    for (int i = 0; i < M; i++)
    {
        int c;
        cin >> c;
        q.push(c);
        result.push_back(q.front());
        q.pop();
    }
    for (int i = 0; i < M; i++)
    {
        cout << result[i] << " ";
    }
    cout << "\n";
    return 0;
}