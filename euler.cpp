#include<iostream> 
#include <list> 
using namespace std;

class Graph {
	int V;
	list<int>* adj;
public:
	Graph(int V) {
		this->V = V;
		adj = new list<int>[V];
	}
	
	~Graph() {
		delete[] adj;
	}

	void addEdge(int v, int w);
};

void Graph::addEdge(int v, int w) {
	adj[v].push_back(w);
	adj[w].push_back(v);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	cin >> N >> M;
	int u[100], v[100], counter[100];
	
	Graph g(N);
	for (int i = 0; i < M; i++) {
		cin >> u[i] >> v[i];
		g.addEdge(u[i], v[i]);
	}
	for (int i = 0; i < N; i++) {
		counter[i] = 0;
		for (int j = 0; j < M; j++) {
			if (u[j] == i or v[j] == i)
				counter[i]++;
		}
	}
	
	int result = 0;
	int min = -1;
	int max = -1;
	for (int j = 0; j < N; j++) {
		if (counter[j] % 2 != 0) {
			result++;
			if (min == max)
				min = j;
			else max = j;
		}
	}
	if (result == 0) cout << "CYCLE" << '\n';
	else if (result == 2) cout << "PATH " << min << ' ' << max << '\n';
	else cout << "IMPOSSIBLE" << '\n';
}
