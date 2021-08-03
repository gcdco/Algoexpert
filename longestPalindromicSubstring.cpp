using namespace std;

std::vector<int> getLongestPalindromeFrom(string str, int leftIdx, int rightIdx);

string longestPalindromicSubstring(string str) {
	std::vector<int> currentLongest {0, 1};
	for(int i = 0; i < str.length(); i++){
		std::vector<int> odd = getLongestPalindromeFrom(str, i - 1, i + 1);
		std::vector<int> even = getLongestPalindromeFrom(str, i -1, i);
		std::vector<int> longest = ((odd[1] - odd[0]) > (even[1] - even[0])) ?
			odd
			:
			even;
		currentLongest = 
		((currentLongest[1] - currentLongest[0]) > (longest[1] - longest[0])) ?
			currentLongest
			:
			longest;
	}
	
  return str.substr(currentLongest[0], currentLongest[1] - currentLongest[0]);
}

std::vector<int> getLongestPalindromeFrom(
string str, int leftIdx, int rightIdx){
	while(leftIdx >= 0 && rightIdx < str.length()){
		if(str[leftIdx] != str[rightIdx]){
			break;
		}
		leftIdx--;
		rightIdx++;
	}
	return std::vector<int>{leftIdx + 1, rightIdx};
	
}
