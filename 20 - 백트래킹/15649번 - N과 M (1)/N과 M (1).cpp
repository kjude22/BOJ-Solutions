/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 15649                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/15649                          #+#        #+#      #+#    */
/*   Solved: 2026/02/03 10:30:04 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int N, M;
int arr[8];
bool isUsed[8]; // 각 숫자의 사용여부
                // 조합 -> 각 숫자는 하나씩만 써야됨!

void BackTrack(int k) // k: 지금까지 채워진 자리
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

    for (int i = 1; i <= N; i++)
    {
        if (!isUsed[i])
        {
            arr[k] = i;
            isUsed[i] = true;
            BackTrack(k + 1);
            isUsed[i] = false;
        }
    }
}

int main()
{
    cin >> N >> M;
    BackTrack(0);
    return 0;
}