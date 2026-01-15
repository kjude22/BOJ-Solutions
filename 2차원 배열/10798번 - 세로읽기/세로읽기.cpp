/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10798                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10798                          #+#        #+#      #+#    */
/*   Solved: 2026/01/15 10:53:18 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < 15; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            if (j >= arr[i].length())
                continue;
            cout << arr[i][j];
        }
    }
    cout << endl;
    return 0;
}
