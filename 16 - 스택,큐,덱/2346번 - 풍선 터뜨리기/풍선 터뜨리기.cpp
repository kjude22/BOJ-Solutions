/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2346                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2346                           #+#        #+#      #+#    */
/*   Solved: 2026/01/29 14:05:12 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <queue>
using namespace std;

/*
    ※ 원형 버퍼 한바퀴 이상 돌 때, 모듈러 연산 필수!!
*/
int main()
{
    int N;
    cin >> N;
    queue<int> q;
    vector<int> v;
    v.push_back(0); // v[0] = -1 (인덱스 번호에 맞추는 용도)
    for (int i = 1; i <= N; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
        q.push(i);
    }
    int cnt = 1;
    for (int i = 0; i < N; i++) // !q.empty()
    {
        for (int j = 0; j < cnt - 1; j++)
        {
            q.push(q.front());
            q.pop();
        }
        int out = q.front();
        cout << out << " ";

        int size = q.size();
        if (v[out] >= 0 && size > 1)
        {
            cnt = v[out];
        }
        else if (v[out] < 0 && size > 1)
        {
            cnt = (v[out] % (size - 1)) + size;
            // ※ 원형 버퍼 한바퀴 이상 돌 때, 모듈러 연산 필수!!
        }
        q.pop();
    }
    cout << "\n";
    return 0;
}