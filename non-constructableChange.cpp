#include <vector>
using namespace std;

int nonConstructibleChange(vector<int> coins) {
  sort(coins.begin(), coins.end());
	int changeICanCreateUpTo = 0;
	
	for (auto x : coins){
		if(x > changeICanCreateUpTo + 1){
			return changeICanCreateUpTo + 1;
		}
		
		changeICanCreateUpTo += x;
	}
	
  return changeICanCreateUpTo + 1;
}
