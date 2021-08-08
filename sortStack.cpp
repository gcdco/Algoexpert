#include <vector>
using namespace std;

vector<int> sortStack(vector<int> &stack) {
  if(stack.size() == 0){ return {};}
	
	int levelValue = stack.back();
	stack.pop_back();
	sortStack(stack);
	std::vector<int> temp;
	
	while(levelValue < stack.back() && stack.size() > 0){
		temp.push_back(stack.back());
		stack.pop_back();
	}
	
	stack.push_back(levelValue);
	
	while(temp.size() > 0){
		stack.push_back(temp.back());
		temp.pop_back();
	}
	
  return stack;
}
