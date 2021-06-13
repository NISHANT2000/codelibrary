#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
#define endl "\n"
using namespace std;

int main() {
	ll n;
	priority_queue<int> pq;
	pq.push(5);
	pq.push(10);
	pq.push(15);
	
	while(!pq.empty())
	{
	    cout<<pq.top()<<" ";
	    pq.pop();
	}
	return 0;
}
