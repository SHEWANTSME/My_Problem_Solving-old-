//// binary search
//#include<iostream>
//#include<vector>
//using namespace std;
//int n, target;
//vector<int>arr;
//int binary_search(vector<int>&arr, int target, int st, int end) {
//	while (st<= end) {
//		int mid = (st + end) / 2;
//		if (arr[mid] == target) return mid;
//		else if (arr[mid] < target) end = mid - 1;
//		else st = mid + 1;
//	}return -1;
//}
//int main() {
//	cin >> n >> target;
//	for (int i = 0; i < n; i++) {
//		int x; cin >> x; arr.push_back(x);
//	}
//	int ans = binary_search(arr, target, 0, n - 1);
//	if (ans == -1)cout << "no any elements remained" << endl;
//	else cout << ans + 1 << endl;
//	
//}

// 13023 ABCDE -> RETRY
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int n, m;
//int main() {
//	cin >> n >> m;
//	
//}

//2251 ����
#include<iostream>
#include<algorithm>
#include<vector>
#define ff first
#define sc second
using namespace std;
int a, b, c;
int visited[201][201];
vector<int>v;
//pair<int, int>pp1;
//pair<int, int>pp2;
//pair<int, int>pp3;
void DFS(int aa, int bb, int cc) {
	if (visited[aa][bb])return;
	if (aa == 0) {	v.push_back(cc); }
	visited[aa][bb] = 1;
	if (aa + bb > b) DFS((aa + bb) - b, b, cc);
	if(aa+bb<=b) DFS(0, aa + bb, cc);
	if (bb + aa > a) DFS(a, (bb + aa) - a, cc);
	if(aa+bb<=a) DFS(bb + aa, 0, cc);
	if (cc + aa > a) DFS(a, bb, (cc + aa) - a);
	if(aa+cc<=a) DFS(cc + aa, bb, 0);
	if (cc + bb > b) DFS(aa, b, (cc + bb) - b);
	if(cc+bb<=b) DFS(aa, cc + bb, 0);
	DFS(aa, 0, bb + cc);
	DFS(0, bb, aa + cc);
}
int main() {
	cin >> a >> b >> c;
	if (a == b and b == c) {
		cout << c << endl; exit(0);
	}
	//pp1.ff = a;	pp1.sc= 0;
	//pp2.ff= b; pp2.sc= 0;
	//pp3.ff= c; pp3.sc = c;
	DFS(0, 0, c);
	//DFS(pp1.sc, pp2.sc, pp3.ff);
	sort(v.begin(), v.end());
	for (auto &e : v) 
		cout << e << " ";
	
	// 0  0  c
	// 0 b c-b
	// 
}























