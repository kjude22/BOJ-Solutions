/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 4134                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/4134                           #+#        #+#      #+#    */
/*   Solved: 2026/01/26 21:30:14 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    while(N--)
    {
        int num;
        cin >> num;

        bool is_prime = true;
        for (int i = 2; i < num/2; i++)
        {
            if (num % i == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime == false)
        {
            continue;
        }
    }
}