/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11650                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11650                          #+#        #+#      #+#    */
/*   Solved: 2026/01/24 18:43:35 by kkwan010315   ###          ###   ##.kr    */
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

    bool operator<(const Point &a)
    {
        if (x != a.x)
        {
            return x < a.x;
        }
        else
        {
            return y < a.y;
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
        int x_, y_;
        cin >> x_ >> y_;
        Point p(x_, y_);

        v.push_back(p);
    }

    sort(v.begin(), v.end());

    for(Point p: v)
    {
        cout << p.x << " " << p.y << "\n";
    }

    return 0;
}