/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11047                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11047                          #+#        #+#      #+#    */
/*   Solved: 2026/02/24 16:14:27 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int arr[10];
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        arr[i] = n;
    }

    int cnt = 0;
    for (int i = N - 1; i >= 0; i--)
    {
        cnt += (K / arr[i]);
        K = K % arr[i];
        if(K==0)
        {
            cout << cnt << "\n";
            break;
        }
    }
    return 0;
}