/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2941                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2941                           #+#        #+#      #+#    */
/*   Solved: 2026/01/14 21:37:17 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
using namespace std;

/* <Better Solution>

int main() {
    // ★주의: "dz="가 "z="보다 먼저 와야 합니다. (중복 방지)
    vector<string> cro = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    ...
    for(int i = 0; i < cro.size(); i++) {
        while(true) {
            int idx = s.find(cro[i]);

            // 더 이상 없으면 다음 알파벳으로 넘어감
            if(idx == string::npos) break;

            // ★찾았다면 1글자("#")로 변경
            s.replace(idx, cro[i].length(), "#");
        }
    }
    ...
}
*/

/*
    경우의 수: 대다수의 경우는 Default
*/
int main()
{
    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '-')
        {
            if (s[i - 1] == 'c' || s[i - 1] == 'd')
                continue;
        }
        if (s[i] == '=')
        {
            if (s[i - 1] == 'c' || s[i - 1] == 's' || s[i - 1] == 'z')
                continue;
            else if (s[i - 1] == 'z' && s[i - 2] == 'd')
                continue;
        }
        if (s[i] == 'z')
        {
            if (s[i - 1] == 'd' && s[i + 1] == '=')
                continue;
        }
        if (s[i] == 'j')
        {
            if (s[i - 1] == 'l' || s[i - 1] == 'n')
                continue;
        }
        cnt++;
    }
    cout << cnt << endl;
}
