#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin>>t;

    while(t--){

        int n,k;

        cin>>n>>k;

        multiset<long long> s;

        for(int i=0;i<n;i++){

            long long l;

            cin>>l;

            s.insert(l);


 

        }

        long long sum=0;

        

        while(k--){

            long long p=*(--s.end());

            s.erase(s.find(p));

            s.insert(p/2);

            sum+=p;

        }

        cout<<sum<<endl;

    }

}
