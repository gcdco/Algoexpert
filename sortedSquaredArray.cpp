#include <vector>
#include <cmath>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
  int arrayLowIndex = 0;
	int arrayHighIndex = array.size() - 1;
	vector<int> squaredArray(array.size(), -1);
	
	for(int i = array.size() - 1; i >= 0; i--){
		int lowArrayValue = array[arrayLowIndex];
		int highArrayValue = array[arrayHighIndex];
		
		if(abs(lowArrayValue) >= abs(highArrayValue)){
			squaredArray[i] = lowArrayValue * lowArrayValue;
			arrayLowIndex++;
		}
		else if(abs(lowArrayValue) < abs(highArrayValue)){
			squaredArray[i] = highArrayValue * highArrayValue;
			arrayHighIndex--;
		}
	}
	
  return squaredArray;
}
