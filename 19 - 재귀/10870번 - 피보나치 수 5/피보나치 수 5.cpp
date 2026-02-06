/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10870                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10870                          #+#        #+#      #+#    */
/*   Solved: 2026/02/05 19:25:47 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

long long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return (n * factorial(n - 1));
}

int main()
{
    int N;
    cin >> N;
    cout << factorial(N) << "\n";
    return 0;
}