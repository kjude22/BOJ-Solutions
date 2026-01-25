/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 18870                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/18870                          #+#        #+#      #+#    */
/*   Solved: 2026/01/25 20:26:34 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
 **중복제거**
 */
int main()
{
    int N;
    cin >> N;

    vector<int> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i];

    // 1) 정렬용 복사본
    vector<int> sorted = v;
    sort(sorted.begin(), sorted.end());

    // 2) 중복 제거
    sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());

    // 3) 각 값의 압축 좌표 출력 (lower_bound = 이진탐색)
    for (int i = 0; i < N; i++)
    {
        int compressed = lower_bound(sorted.begin(), sorted.end(), v[i]) - sorted.begin();
        cout << compressed << " ";
    }
    cout << "\n";
    return 0;
}