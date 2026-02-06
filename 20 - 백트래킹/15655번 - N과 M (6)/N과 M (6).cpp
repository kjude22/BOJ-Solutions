/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 15655                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/15655                          #+#        #+#      #+#    */
/*   Solved: 2026/02/03 12:00:21 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<int> v;
int idx[8];
int arr[8];

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
    int minIdx;
    if (k > 0)
    {
        minIdx = idx[k - 1] + 1;
    }
    else
    {
        minIdx = 0;
    }

    for (int i = minIdx; i < N; i++)
    {
        int num = v[i];

        arr[k] = num;
        idx[k] = i;
        BackTrack(k + 1);
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