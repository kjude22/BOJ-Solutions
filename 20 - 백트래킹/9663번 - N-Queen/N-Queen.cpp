/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 9663                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/9663                           #+#        #+#      #+#    */
/*   Solved: 2026/02/05 18:41:01 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

/* Better Solution
    NxN 체스판에 N개의 퀸 배치 -> **한 줄에 하나의 퀸**
    map 보단 col, diag1, diag2 를 통한 선형 탐색
*/
int N;
int cnt = 0;

// map[15][15] 대신 공격 경로를 O(1)에 체크할 배열들
bool col[15];   // 세로 줄 체크 (x)
bool diag1[30]; // / 방향 대각선 (y + x)
bool diag2[30]; // \ 방향 대각선 (y - x + N)

void BackTrack(int y) // y: 현재 놓으려는 행(Row)
{
    // 기저 사례: N개의 퀸을 모두 놓았으면 카운트 증가
    if (y == N)
    {
        cnt++;
        return;
    }

    // 현재 행(y)에서 모든 열(x)을 검사
    for (int x = 0; x < N; x++)
    {
        // 1. 세로(열)에 퀸이 없고
        // 2. / 대각선에 퀸이 없고
        // 3. \ 대각선에 퀸이 없다면
        if (!col[x] && !diag1[y + x] && !diag2[y - x + N])
        {
            // [invalid 역할] : 방문 표시
            col[x] = true;
            diag1[y + x] = true;
            diag2[y - x + N] = true;

            BackTrack(y + 1); // 다음 줄로 이동

            // [restore 역할] : 방문 표시 해제 (백트래킹)
            col[x] = false;
            diag1[y + x] = false;
            diag2[y - x + N] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    // 0번째 줄부터 퀸 놓기 시작
    BackTrack(0);

    cout << cnt << "\n";
    return 0;
}

/*
int N;
int map[15][15]; // -1 : 공격 불가 (사용 가능)
int cnt;
int min_x;
int min_y;

void init()
{
    cnt = 0;
    min_x = 0;
    min_y = 0;
    for (int i = 0; i < N; i++) // y
    {
        for (int j = 0; j < N; j++) // x
        {
            map[i][j] = -1;
        }
    }
}

void invalid(int y, int x, int q) // 퀸의 사정권 invalidate
{
    min_y = y + 1; // 다음 퀸은 다음 줄 부터 놓기

    for (int i = 0; i < N; i++) // y
    {
        for (int j = 0; j < N; j++) // x
        {
            if (map[i][j] == -1) // 비어있는 곳만 채우기 (복구할 때를 위해)
            {
                if (i == y || j == x || abs(i - y) == abs(j - x))
                    map[i][j] = q;
            }
        }
    }
}

void restore(int q)
{
    for (int i = 0; i < N; i++) // y
    {
        for (int j = 0; j < N; j++) // x
        {
            if (map[i][j] == q)
            {
                map[i][j] = -1;
            }
        }
    }
}

void BackTrack(int q) // q : Queen Number (1~N)
{
    if (q == N + 1)
    {
        cnt++;
        return;
    }
    if (q == 1)
    {
        init();
    }

    int Y = min_y; // 놓는 시점에서의 min_x, min_y를 기억하자
    int X = min_x; // 이전 퀸 보다는 다음 놓기위해

    for (int y = Y; y < N; y++)
    {
        for (int x = X; x < N; x++)
        {
            if (map[y][x] == -1)
            {
                invalid(y, x, q);
                BackTrack(q + 1);
                restore(q);
            }
            else
            {
                continue;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    BackTrack(1);
    cout << cnt << "\n";
    return 0;
}
*/