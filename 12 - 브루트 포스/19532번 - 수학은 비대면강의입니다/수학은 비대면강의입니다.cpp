/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 19532                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/19532                          #+#        #+#      #+#    */
/*   Solved: 2026/01/24 15:15:13 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    int x, y;
    // a*e x + b*e y = c*e
    // b*d x + b*e y = b*f
    if (b == 0)
    {
        x = c / a;
        y = (f - d * x) / e;
        cout << x << " " << y << endl;
        return 0;
    }

    x = (c * e - b * f) / (a * e - b * d); // (a * e - b * d) == 0 : 遺덇???
    y = (c - a * x) / b;                   // (b == 0) : 媛??

    cout << x << " " << y << endl;
    return 0;
}
