#include <vector>
using namespace std;

int binarySearch(vector<int> array, int target) {
  // Write your code here.
	int middle = -1;
	int left = 0;
	int right = array.size() - 1;
	for(int i = 0; i < array.size(); i++) {
		middle = (left + right) / 2;
		if(left > right){
			return -1;
		}
		if (array[middle] == target){
			return middle;
		}
		else if (target <= array[middle]){
			right = middle;
		}
		else if(target > array[middle]){
			right = array.size() - 1;
			left = middle + 1;
		}
	}
	
  return -1;
}
