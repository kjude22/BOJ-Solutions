/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1427                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1427                           #+#        #+#      #+#    */
/*   Solved: 2026/01/24 18:33:36 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    string s = to_string(N);

    sort(s.begin(), s.end(),
         [](const int a, const int b)
         { return a > b; });

    for(char c : s)
    {
        cout << c;
    }
    cout << "\n";
    return 0;
}