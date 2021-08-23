#include <algorithm>
using namespace std;

int minimumWaitingTime(vector<int> queries) {
  // Write your code here.
	int totalWaitTime = 0;
	sort(queries.begin(), queries.end());
	for(int i = 0; i < queries.size(); i++){
		int queriesLeft = queries.size() - (i + 1);
		totalWaitTime +=  queriesLeft * queries[i];
	}
  return totalWaitTime;
}
