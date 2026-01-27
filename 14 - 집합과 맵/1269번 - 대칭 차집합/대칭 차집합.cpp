/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1269                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1269                           #+#        #+#      #+#    */
/*   Solved: 2026/01/26 20:34:56 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    unordered_set<int> a, b;
    for (int i = 0; i < A; i++)
    {
        int num;
        cin >> num;
        a.insert(num);
    }
    for (int i = 0; i < B; i++)
    {
        int num;
        cin >> num;
        b.insert(num);
    }

    int result = 0;
    for (int x : a) // Better Solution : count()로 유무 확인
    {
        if (!b.count(x))
            result++;
    }
    for (int x : b)
    {
        if (!a.count(x))
            result++;
    }

    cout << result << "\n";
    return 0;
}
