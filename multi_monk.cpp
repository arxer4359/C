#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()

{

   ll n,x,product=1;

    cin>>n ;

    priority_queue<ll,vector<ll>,greater<ll>> pq;

    for(int i=0;i<n;i++)

    {

     cin>>x;

    if(pq.size()==3)

     {

    if(x>pq.top())

         {

                 product=(product/pq.top())*x;

                 cout<< product <<endl;

                 pq.push(x);

                 pq.pop();

                

             }

         else cout<<product<<endl;

     }

     else

     {

         pq.push(x);

            product*= x;

            if(pq.size()!=3) cout<<-1<<endl;

            if(pq.size()==3 ) cout<<product<<endl;

     }

    }

return 0;

}

