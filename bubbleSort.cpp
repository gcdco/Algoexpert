#include <vector>
using namespace std;

vector<int> bubbleSort(vector<int> array) {
  // Write your code here.
	bool isSorted = false;
	
	while(!isSorted) {
		isSorted = true;
		for(int i = 0; i < array.size() - 1; i++){
			if(array[i] > array[i+1]){
				swap(array[i], array[i+1]);
				isSorted = false;
			}
		}
	}
  return array;
}
