#include <bits/stdc++.h>

#define ll long long

using namespace std;

struct node

{

int p, l, c;

// parent, level, rank

};

int main()

{

ios_base::sync_with_stdio(false);

cin.tie(NULL);

int n, rc0, id, rc;

cin>>n>>rc0;

vector<node> ans(n+1);

queue<pair<pair<int, int>, int>> q; // id, cap, level

q.push(make_pair(make_pair(0, rc0), 0));

int curr, lev, rank, cap=0;

for(int i=1; i<=n; ++i)

{

 while(!cap)

 {

  curr = q.front().first.first;

  cap = q.front().first.second;

  lev = q.front().second+1;

  rank = 1;

  q.pop();

 }

 cin>>id>>rc;

 ans[i].p = curr;

 ans[i].l = lev;

 ans[i].c = rank;

 rank++;

 cap--;

 q.push(make_pair(make_pair(id, rc), lev));

}

for(int i=1; i<=n; ++i)

 cout<<ans[i].p<<" "<<ans[i].l<<" "<<ans[i].c<<endl;

}
