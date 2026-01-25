/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11651                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11651                          #+#        #+#      #+#    */
/*   Solved: 2026/01/25 20:17:46 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Point
{
    int x;
    int y;

    Point(int x_, int y_)
    {
        x = x_;
        y = y_;
    }

    bool operator<(const Point &p)
    {
        if (y != p.y)
        {
            return y < p.y;
        }
        else
        {
            return x < p.x;
        }
    }
};

int main()
{
    int N;
    cin >> N;
    vector<Point> v;
    while (N--)
    {
        int x, y;
        cin >> x >> y;
        Point p(x, y);
        v.push_back(p);
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].x << " " << v[i].y << "\n";
    }
    return 0;
}