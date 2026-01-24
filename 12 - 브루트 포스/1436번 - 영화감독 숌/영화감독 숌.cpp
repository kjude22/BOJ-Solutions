/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1436                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1436                           #+#        #+#      #+#    */
/*   Solved: 2026/01/24 15:48:46 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int cnt = 0;
    int num = 666;

    while (1)
    {
        string s = to_string(num);
        int sixs = s.find("666");

        if (sixs != std::string::npos)
        {
            cnt++;
            if (cnt == N)
            {
                cout << num << endl;
                break;
            }
        }
        num++;
    }
    return 0;
}