#include <stack>
using namespace std;

// Feel free to add new properties and methods to the class.
class MinMaxStack {
private:
	std::vector<int> stack;
	
public:
  int peek() {
    return stack.back();
  }

  int pop() {
		int val = stack.back();
		stack.pop_back();
    return val;
  }

  void push(int number) {
    stack.push_back(number);
	}

  int getMin() {
    // Write your code here.
    return *min_element(stack.begin(), stack.end());
  }

  int getMax() {
    // Write your code here.
		return *max_element(stack.begin(), stack.end());
  }
};
