/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10816                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10816                          #+#        #+#      #+#    */
/*   Solved: 2026/01/31 20:17:13 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    int N, M;
    unordered_map<int, int> a;
    vector<int> b;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        if (a.count(n))
        {
            a[n]++;
        }
        else
        {
            a.insert({n, 1});
        }
    }
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        int n;
        cin >> n;
        b.push_back(n);
    }
    for (int i = 0; i < M; i++)
    {
        if (a.count(b[i]))
        {
            cout << a[b[i]] << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
    cout << endl;
    return 0;
}