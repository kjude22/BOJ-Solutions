/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2908                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2908                           #+#        #+#      #+#    */
/*   Solved: 2026/01/14 16:21:52 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    string strA = to_string(A);
    string strB = to_string(B);

    reverse(strA.begin(), strA.end());
    reverse(strB.begin(), strB.end());

    if (strA >= strB)
    {
        cout << strA << endl;
    }
    else
    {
        cout << strB << endl;
    }

    return 0;
}