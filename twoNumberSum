#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  int sum = 0;
	int iIdx, jIdx = 0;
	for(int j = 0; j < array.size(); j++){
		sum = array[j];
		for(int i = j + 1; i < array.size(); i++){
			if((sum + array[i]) == targetSum ){
				std::vector<int> indexes;
				indexes.push_back(array[j]);
				indexes.push_back(array[i]);
				return indexes;
			}
		}
	}
	
  return {};
}
