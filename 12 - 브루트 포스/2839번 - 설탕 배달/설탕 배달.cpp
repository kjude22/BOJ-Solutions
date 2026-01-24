/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2839                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2839                           #+#        #+#      #+#    */
/*   Solved: 2026/01/24 16:05:44 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int cnt = 0;
    // 5kg 봉지 & 3kg 봉지
    for (int i = N / 5; i >= 0; i--)
    {
        if ((N - (5 * i)) % 3 == 0)
        {
            int j = (N - (5 * i)) / 3;
            cnt = i + j;
            break;
        }
    }
    if (cnt == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << cnt << endl;
    }
    return 0;
}