/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 15650                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/15650                          #+#        #+#      #+#    */
/*   Solved: 2026/02/03 11:19:35 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int N, M;
int arr[8];

void BackTrack(int k)
{
    if (k == M)
    {
        for (int i = 0; i < k; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    int min;
    if (k > 0)
    {
        min = arr[k - 1] + 1;
    }
    else
    {
        min = 1;
    }

    for (int i = min; i <= N; i++)
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