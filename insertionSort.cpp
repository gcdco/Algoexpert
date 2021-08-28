#include <vector>
using namespace std;

vector<int> insertionSort(vector<int> array) {
	if(array.size() == 0){
		return {};
	}
	for(int j = 0; j < array.size() - 1; j++){
		for(int i = array.size() - 1; i > j; i--){
			if(array[i] < array[i-1]){
				swap(array[i], array[i-1]);
			}
		}
	}	
  return array;
}
