/*Algoexpert solution - passed*/
using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
	int idx = 0;
	
	for(int i = 0; i < array.size(); i++){
		if(array[i] == sequence[idx]) {
			if (idx < sequence.size())
			idx++;
		}
	}
	
	if(idx == sequence.size())
		return true;
	else
		return false;
}
