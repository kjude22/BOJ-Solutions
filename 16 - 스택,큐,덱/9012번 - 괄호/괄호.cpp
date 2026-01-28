/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 9012                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/9012                           #+#        #+#      #+#    */
/*   Solved: 2026/01/28 13:25:23 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N--)
    {
        string ps;
        cin >> ps;
        stack<int> s;

        bool invalid = false;
        for (int i = 0; i < ps.size(); i++)
        {
            if (ps[i] == '(')
            {
                s.push(1);
            }
            else if (ps[i] == ')')
            {
                if (s.empty()) // 빈 스택에 pop 방지
                {
                    invalid = true;
                    break;
                }
                s.pop();
            }
        }

        if (invalid || !s.empty())
        {
            cout << "NO" << "\n";
        }
        else
        {
            cout << "YES" << "\n";
        }
    }
    return 0;
}