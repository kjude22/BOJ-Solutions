/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 25203                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/25203                          #+#        #+#      #+#    */
/*   Solved: 2026/01/15 15:34:23 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int main()
{
    int N = 20;
    int cnt = 0;
    float sum = 0;
    while (N--)
    {
        string course;
        float credit;
        string grade;
        cin >> course >> credit >> grade;

        if (grade == "P")
        {
            continue;
        }
        if (grade == "A+")
        {
            cnt += credit;
            sum += (credit * (4.5));
            continue;
        }
        if (grade == "A0")
        {
            cnt += credit;
            sum += (credit * (4.0));
            continue;
        }
        if (grade == "B+")
        {
            cnt += credit;
            sum += (credit * (3.5));
            continue;
        }
        if (grade == "B0")
        {
            cnt += credit;
            sum += (credit * (3.0));
            continue;
        }
        if (grade == "C+")
        {
            cnt += credit;
            sum += (credit * (2.5));
            continue;
        }
        if (grade == "C0")
        {
            cnt += credit;
            sum += (credit * (2.0));
            continue;
        }
        if (grade == "D+")
        {
            cnt += credit;
            sum += (credit * (1.5));
            continue;
        }
        if (grade == "D0")
        {
            cnt += credit;
            sum += (credit * (1.0));
            continue;
        }
        if (grade == "F")
        {
            cnt += credit;
            continue;
        }
    }
    float result = sum / cnt;
    cout << result << endl;
    return 0;
}