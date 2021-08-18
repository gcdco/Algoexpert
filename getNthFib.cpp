using namespace std;

int getNthFib(int n) {
	if(n == 1) { return 0;}
	if(n == 2) { return 1;}
	
	int prev = 0, cur = 1, next;
	for(int i = 2; i < n; i++){
		next = prev + cur;
		prev = cur;
		cur = next;
		cout << next << endl;
	}
	
  return next;
}
