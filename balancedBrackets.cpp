#include <unordered_map>
#include <stack>
using namespace std;

bool balancedBrackets(string str) {
	string openingBrackets = "([{";
	string closingBrackets = ")]}";
	std::unordered_map<char, char> matchingBrackets {
		{')','('}, {']','['}, {'}','{'} 
	};
	
	std::stack<char> brackets;
	for(char character : str){
		if(openingBrackets.find(character) != string::npos){
			brackets.push(character);
		}
		else if(closingBrackets.find(character) != string::npos){
			if(brackets.size() == 0){
				return false;
			}
			if(brackets.top() == matchingBrackets[character]){
				brackets.pop();
			}
			else {
				return false;
			}
		}
	}
	return brackets.size() == 0;
}
