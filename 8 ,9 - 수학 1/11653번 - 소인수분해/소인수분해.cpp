/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11653                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11653                          #+#        #+#      #+#    */
/*   Solved: 2026/01/15 14:39:29 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

/* 오래 걸리는 작업은 조건부!! (시간초과 해결) */
int main()
{
    int N;
    cin >> N;
    int prime = 2;
    while (N > 1)
    {
        if (N % prime == 0) // 먼저 나눠지는지 확인
        {
            bool isPrime = true;
            for (int i = 2; i < prime; i++) // ★ 오래 걸리는 작업은 최소로 (조건부로!)
            {
                if (prime % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            if (!isPrime)
            {
                prime++;
                continue;
            }

            while (N % prime == 0)
            {
                cout << prime << endl;
                N /= prime;
            }
            prime++;
        }
        else
            prime++;
    }
    return 0;
}