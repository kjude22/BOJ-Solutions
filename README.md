## BOJ-Solutions 메모

# C++ 입출력 속도를 빠르게 하는 설정

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << endl 대신 cout << "\n" 사용

# 각 원소의 빈도를 구할 때 (최빈값 X)

    unordered_map<key, 빈도> us;
    us[key]++;

    ※  unordered_map은 '빈도'로 탐색할 수 없기 때문에
        최빈값 문제에서는 사용할 수 없다. (시간 초과)
        
# 최빈값 문제는 배열로

    "입력되는 정수의 절댓값은 4000을 넘지 않는다"
    -> freq[8001];  (BOJ 2108번)

# 배열 동적 할당 (임시 배열)

    int* arr = new int[N];

# 재귀 문제의 결과출력값은 전역변수로
    함수 내부에서 출력하면 다른 재귀함수에 의해
    계속 갱신됨.

# 함수 인자로 포인터 넘겨줄 때 (복사 비용 최소화)

    void func(int* A[], int* K) 
    { 
        (*A)[idx] = 10;
        func(A, K);
        ...
    };

    int arr[100];
    int k = 0;
    func(&arr, &k);


