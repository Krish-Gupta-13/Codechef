#include <vector>
using namespace std;

void updateTree(int node, int startIdx, int endIdx, int targetIdx, int value, vector<int> &tree) {
if (startIdx == endIdx) {
tree[node] = value;
return;
}

int mid = (startIdx + endIdx) / 2;
if (targetIdx <= mid) {
updateTree(2 * node, startIdx, mid, targetIdx, value, tree);
} else {
updateTree(2 * node + 1, mid + 1, endIdx, targetIdx, value, tree);
}

tree[node] = max(tree[2 * node], tree[2 * node + 1]);
}

int queryTree(int node, int startIdx, int endIdx, int rangeStart, int rangeEnd, vector<int> &tree) {
if (startIdx > rangeEnd || endIdx < rangeStart) {
 return -1;
}
if (rangeStart <= startIdx && endIdx <= rangeEnd) {
return tree[node];
}
int mid = (startIdx + endIdx) / 2;

return max(queryTree(2 * node, startIdx, mid, rangeStart, rangeEnd, tree),
queryTree(2 * node + 1, mid + 1, endIdx, rangeStart, rangeEnd, tree));
}

vector<int> ninjaAndLessMaxElement(int length, vector<int> &input) {
vector<int> segmentTree(4 * length + 8, -1);
vector<vector<int>> positions(length + 1, vector<int>(1, 0));

for (int i = 0; i < length; i++) {
positions[input[i]].push_back(i + 1);
}

vector<int> result(length);
for (int i = 1; i <= length; i++) {
if (positions[i].size() <= 1) {
continue;
}

for (int j = 1; j < positions[i].size(); j++) {
result[positions[i][j] - 1] = queryTree(1, 1, length,
positions[i][j - 1] + 1,
positions[i][j] - 1, segmentTree);
}

for (int j = 1; j < positions[i].size(); j++) {
updateTree(1, 1, length, positions[i][j], i, segmentTree);
}
}

return result;
}