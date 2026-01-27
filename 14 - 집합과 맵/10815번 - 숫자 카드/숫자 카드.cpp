/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10815                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10815                          #+#        #+#      #+#    */
/*   Solved: 2026/01/26 18:25:23 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    unordered_set<int> v;
    vector<int> u;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        v.insert(num);
    }
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        int num;
        cin >> num;
        u.push_back(num);
    }

    for (int i = 0; i < M; i++)
    {
        if(v.find(u[i]) == v.end())
        {
            cout << 0 << " ";
        }
        else
        {
            cout << 1 << " ";
        }
    }
    cout << endl;
    return 0;
}