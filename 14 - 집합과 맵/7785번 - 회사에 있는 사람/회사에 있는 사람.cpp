/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 7785                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/7785                           #+#        #+#      #+#    */
/*   Solved: 2026/01/27 19:04:04 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    unordered_set<string> us;
    while (N--)
    {
        string name;
        cin >> name;

        string cmd;
        cin >> cmd;
        if (cmd == "enter")
        {
            us.insert(name);
        }
        else if (cmd == "leave")
        {
            us.erase(name);
        }
        else
        {
            cout << "\nInvalid Command\n";
        }
    }

    vector<string> v;
    for (string x : us)
    {
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }

    return 0;
}

// Better Solution