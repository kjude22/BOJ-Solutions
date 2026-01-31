/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 25501                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/25501                          #+#        #+#      #+#    */
/*   Solved: 2026/01/31 17:42:21 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int recursion(const string *s, int l, int r, int *cnt)
{
    (*cnt)++;
    if (l >= r)
        return 1;
    else if ((*s)[l] != (*s)[r])
        return 0;
    else
        return recursion(s, l + 1, r - 1, cnt);
}

void isPalindrome(const string *s)
{
    int cnt = 0;
    int isP = recursion(s, 0, (*s).length() - 1, &cnt);
    cout << isP << " " << cnt << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        isPalindrome(&s);
    }
    return 0;
}