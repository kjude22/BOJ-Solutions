/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 15651                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/15651                          #+#        #+#      #+#    */
/*   Solved: 2026/02/03 11:35:09 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int N, M;
int arr[8];

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

        arr[k] = i;
        BackTrack(k + 1);
    }
}

int main()
{
    cin >> N >> M;
    BackTrack(0);
    return 0;
}