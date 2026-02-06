# 25203번: Squirrel - <img src="https://static.solved.ac/tier_small/0.svg" style="height:20px" /> Unrated

<!-- performance -->

<!-- 문제 제출 후 깃허브에 푸시를 했을 때 제출한 코드의 성능이 입력될 공간입니다.-->

<!-- end -->

## 문제

[문제 링크](https://boj.kr/25203)

<p>You are in the upper-left corner in a M × N network of trees, at coordinates (1,1). A squirrel jumps from tree to tree. Being a computer science squirrel, it jumps such that it creates fractal patterns of... trees, of course! The S fractals look like the ones in the pictures:</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/a882ed0f-2e83-4a33-91fd-6b559a335bf0/-/preview/" style="width: 450px; height: 297px;"></p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/ed2ee4a8-25a8-4229-8c71-949a702078d9/-/preview/" style="width: 657px; height: 507px;"></p>

<p>The squirrel follows the following rules:</p>

<ul>
<li>The squirrel starts at a given tree</li>
<li>It then jumps to the north P trees, where P is a given power of two</li>
<li>It then jumps on two diagonals of length P/2</li>
<li>It then jumps forming four fractals of size P/2</li>
<li>It continues on until it creates fractals of size 1</li>
<li>The pictures show the first four fractals of sizes 1, 2, 4 and 8</li>
</ul>

<p>The squirrel keeps jumping until it finishes one fractal shape, then it starts again with the next fractal. In how many of the trees can you see the squirrel?</p>

## 입력

<p>The first line has three integers, M, N, and F. The following F lines describe F fractals. Each line has three integers, the coordinates of the starting tree, followed by the fractal size.</p>

## 출력

<p>Print one integer, the number of positions where you can see the squirrel.</p>

## 소스코드

[소스코드 보기](Squirrel.cpp)