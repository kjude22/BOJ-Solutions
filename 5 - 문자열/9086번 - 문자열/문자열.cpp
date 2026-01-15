/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 9086                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/9086                           #+#        #+#      #+#    */
/*   Solved: 2026/01/14 14:38:57 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int main_(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        string str;
        cin >> str;
        cout << str[0] << str[str.size() - 1] << endl;
    }
    return 0;
}

/* <Better Solution>
int main(void)
{
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        cout << s.front() << s.back() << "\n";
    }
    return 0;
}
*/
int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        string str;
        cin >> str;
        cout << str[0] << str[str.size() - 1] << endl;
    }
    return 0;
}
