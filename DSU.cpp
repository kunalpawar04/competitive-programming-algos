int findParent(int node, vector<int>& parent) {
    if (node == parent[node]) return node;

    return parent[node] = findParent(parent[node], parent);
}

void unionByRank(int u, int v, vector<int>& parent, vector<int>& rank) {
    int pu = findParent(u, parent);
    int pv = findParent(v, parent);

    if (pu == pv) return;

    if (rank[pu] < rank[pv]) {
        parent[pu] = pv;
    } 
    else if (rank[pu] > rank[pv]) {
        parent[pv] = pu;
    } 
    else {
        parent[pv] = pu;
        rank[pu]++;
    }
}
