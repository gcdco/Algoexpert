#include <vector>
using namespace std;

vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
	sort(array.begin(), array.end());
	vector<vector<int>> triplets;

	for(vector<int>::iterator currPtr = array.begin();
			currPtr < array.end() - 2; currPtr++) {
		
		vector<int>::iterator rightPtr = array.end() - 1;
		vector<int>::iterator leftPtr = currPtr + 1;

		int sum = *currPtr + *leftPtr + *rightPtr;
		
		while(leftPtr < rightPtr){
			if(sum == targetSum){
				triplets.push_back({*currPtr, *leftPtr, *rightPtr});
				rightPtr = array.end() - 1;
				leftPtr++;
				sum = *currPtr + *leftPtr + *rightPtr;
			}
			else if(sum < targetSum){
				leftPtr++;				
				sum = *currPtr + *leftPtr + *rightPtr;
			}
			else if(sum > targetSum){
				rightPtr--;
				sum = *currPtr + *leftPtr + *rightPtr;
			}
		}
	}
	
	return triplets;
}
