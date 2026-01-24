/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1181                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1181                           #+#        #+#      #+#    */
/*   Solved: 2026/01/24 19:06:42 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparator(const string &a, const string &b)
{
    if (a.size() != b.size())
    {
        return a.size() < b.size();
    }
    else
    {
        return a < b;
    }
}

int main()
{
    int N;
    cin >> N;

    vector<string> v;
    while (N--)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(), v.end(), [](const string a, const string b)
         { return comparator(a, b); });

    for (int i = 0; i < v.size(); i++)
    {
        if (i > 0 && v[i] == v[i - 1]) // i > 0 : OutOfBounds 방지 (v[i-1])
        {
            continue;
        }
        cout << v[i] << "\n";
    }
    return 0;
}