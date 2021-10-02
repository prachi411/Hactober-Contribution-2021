#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n, m; // number of nodes and number of edges respectively.
	cin >> n >> m;
	vector<vector<pair<int, int> > > G(n + 1);

	vector<bool> vis(n + 1, false);

	for (int i = 0; i < m; i++)
	{
		int x, y, w;
		cin >> x >> y >> w;
		G[x].pb({y, w});
		G[y].pb({x, w});
	}
	priority_queue<pair<int, int> , vector<pair<int, int>>, greater<pair<int, int> > > pq;

	int ans = 0;
	// {weight,node}
	pq.push({0, 1});
	// Push any vertex let it be 1 and initially weight be 0
	while (!pq.empty())
	{
		pair<int, int> best = pq.top();
		pq.pop();
		int weight = best.first;
		int to = best.second;

		// Already included in MST
		if (vis[to]) continue;

		ans += weight;
		vis[to] = true;
		for (auto x : G[to])
		{
			if (vis[x.first] == false)
			{
				// x.first is not visited
				pq.push({x.second, x.first});
			}
		}
	}
	cout << ans << endl;
	return 0;
}
