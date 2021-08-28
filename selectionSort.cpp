#include <vector>
using namespace std;

vector<int> selectionSort(vector<int> array) {  
	for(int j = 0; j < array.size(); j++){
		int min = j;
		for(int i = j; i < array.size(); i++){
			if(array[i] <= array[min]){
				min = i;
			}
		}
		if(min != j){
			swap(array[j], array[min]);			
		}
	}
  return array;
}
