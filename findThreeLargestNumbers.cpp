#include <vector>
#include <climits>
using namespace std;

vector<int> findThreeLargestNumbers(vector<int> array) {
  // Write your code here.
	int one = INT_MIN; 
	int two = INT_MIN;
	int three = INT_MIN;
	cout << one << two << three << endl;
	for(int i = 0; i < array.size(); i++){
		cout << one << " " << two << " " << three << endl;
		int current = array[i];
		if(current >= one){
			int tempOne = one;
			int tempTwo = two;
			one = current;
			two = tempOne;
			three = tempTwo;
		}
		else if(current > two){
			int tempTwo = two;
			int tempThree = three;
			two = current;
			three = tempTwo;
		}
		else if(current > three){
			three = current;
		}
	}
	
	vector<int> answer = {three, two, one};
	sort(answer.begin(), answer.end());
  return answer;
}
