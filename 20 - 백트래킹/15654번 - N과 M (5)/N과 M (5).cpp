/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 15654                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/15654                          #+#        #+#      #+#    */
/*   Solved: 2026/02/03 11:41:15 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<int> v;
int arr[8];
bool isUsed[8]; // 각 v[i]의 사용여부 (숫자 X)

void BackTrack(int k)
{
    if (k == M)
    {
        for (int i = 0; i < M; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 0; i < N; i++)
    {
        int num = v[i];
        if (!isUsed[i])
        {
            arr[k] = num;
            isUsed[i] = true;
            BackTrack(k + 1);
            isUsed[i] = false;
        }
    }
}

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    BackTrack(0);
    return 0;
}