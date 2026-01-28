/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 12789                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/12789                          #+#        #+#      #+#    */
/*   Solved: 2026/01/28 13:56:34 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    int N;
    cin >> N;

    queue<int> q;
    stack<int> s;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        q.push(n); // back에 삽입
    }

    bool valid = true;
    int cur = 1;
    while (!s.empty() || !q.empty())
    {
        if (!q.empty() && q.front() == cur) // 줄 맨앞이 현재 순서
        {
            q.pop();
            cur++;
            continue;
        }
        else if (!s.empty() && s.top() == cur) // 공간 맨앞이 현재 순서
        {
            s.pop();
            cur++;
            continue;
        }
        else
        {
            if (q.empty()) // 공간 맨앞이 현재 순서 X && 줄이 없을때 : 실패
            {
                valid = false;
                break;
            }
            s.push(q.front());
            q.pop();
        }
    }

    if (valid)
    {
        cout << "Nice" << "\n";
    }
    else
    {
        cout << "Sad" << "\n";
    }
    return 0;
}