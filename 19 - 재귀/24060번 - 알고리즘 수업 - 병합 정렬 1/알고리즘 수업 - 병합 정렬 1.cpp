/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 24060                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/24060                          #+#        #+#      #+#    */
/*   Solved: 2026/01/31 18:15:11 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
using namespace std;

int cnt = 0;
int result = -1; // 재귀 중간 출력은 전역변수로
void merge_sort(int *[], int, int, int);
void merge(int *[], int, int, int, int);

void merge_sort(int *A[], int p, int r, int K)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        merge_sort(A, p, q, K);
        merge_sort(A, q + 1, r, K);
        merge(A, p, q, r, K);
    }
}
void merge(int *A[], int p, int q, int r, int K)
{
    int i = p;
    int j = q + 1;
    int t = 0;
    int *tmp = new int[r - p + 1]; // ※ 임시 배열은 동적 할당
    while (i <= q && j <= r)
    {
        if ((*A)[i] <= (*A)[j])
        {
            tmp[t++] = (*A)[i++];
        }
        else
        {
            tmp[t++] = (*A)[j++];
        }
    }
    while (i <= q)
        tmp[t++] = (*A)[i++];
    while (j <= r)
        tmp[t++] = (*A)[j++];
    i = p;
    t = 0;
    while (i <= r)
    {
        (*A)[i++] = tmp[t++];
        cnt++;
        if (cnt == K)
        {
            result = tmp[t - 1];
        }
    }
    delete[] tmp;
}

int main()
{
    int N, K;
    cin >> N >> K;
    int *A = new int[N + 1];
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        A[i] = n;
    }
    merge_sort(&A, 0, N - 1, K); // 복사 비용 너무 큼
    cout << result << "\n";      // 포인터로 함수에 전달
    return 0;
}