/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11399                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11399                          #+#        #+#      #+#    */
/*   Solved: 2026/02/25 11:30:22 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;

    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }

    sort(v.begin(), v.end());

    int sum = 0;
    int result = 0;
    for (int i = 0; i < N; i++)
    {
        sum += v[i];
        result += sum;
    }
    cout << result << "\n";
    return 0;
}