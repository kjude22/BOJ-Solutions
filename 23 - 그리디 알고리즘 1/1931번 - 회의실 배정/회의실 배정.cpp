/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1931                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1931                           #+#        #+#      #+#    */
/*   Solved: 2026/02/25 11:43:18 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const pair<long long, long long> &a,
         const pair<long long, long long> &b)
{
    if (a.second != b.second)
    {
        return a.second < b.second;
    }
    else
    {
        return a.first < b.first;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;

    vector<pair<long long, long long>> v; // 벡터 함수.md에 기록
    for (int i = 0; i < N; i++)
    {
        int b, e;
        cin >> b >> e;
        v.push_back({b, e});
    }
    sort(v.begin(), v.end(), cmp); // ※ 끝나는 시간 기준으로 정렬

    long long cnt = 0;
    long long start = 0;
    for (int i = 0; i < N; i++)
    {
        if (v[i].first >= start)
        {
            cnt++;
            start = v[i].second;
        }
    }
    cout << cnt << "\n";
    return 0;
}