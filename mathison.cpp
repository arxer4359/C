#include<bits/stdc++.h>

#define ll long long

using namespace std;

ll nc2(int n)

{

return 1LL * n * (n - 1) / 2;

}

ll nc3(int n){

return 1LL * n * (n - 1) * (n - 2) / 6;

}

int main(){

ios_base::sync_with_stdio(false);

 

int N, M;

cin >> N >> M;

int cnt[M]={0};

for (int i = 0; i < N; i++)

{

int x;

cin >> x;

cnt[x % M]++;

}

ll answer = 0;

for (int i = 0; i < M; i++)

{

if (cnt[i] > 0)

    {

for (int j = i; j < M; j++)

     {

if (cnt[j] > 0)

        {

int sum = (i + j) % M;

int k = (M - sum + M) % M;

if (i <= j && j <= k)

         {

if (i == j && j == k)

            {

answer += nc3(cnt[i]);

}

else if (i == j)

            {

answer += nc2(cnt[i]) * cnt[k];

}

else if (j == k)

            {

answer += nc2(cnt[j]) * cnt[i];

}

else

            {

answer += 1LL * cnt[i] * cnt[j] * cnt[k];

}

}

}

}

}

}

cout << answer << endl;

return 0;

}
