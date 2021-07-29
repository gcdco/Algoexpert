using namespace std;

bool isPalindrome(string str) {
	int size = str.size();
	int head = 0;
	int tail = size - 1;
	bool palindrome = true;
	
	// If str is 1 char it is a palindrum
	if(size == 1)
		return true;
	
	for(int i = 0; i < size; i++){
		if (head == tail && palindrome == true)
			return true;
		if (head > tail && palindrome == true)
			return true;
		if(str[head] != str[tail])
			palindrome = false;
		head++;
		tail--;
	}
	return palindrome;
}
