using namespace std;

string reverseWordsInString(string str) {
	std::vector<string> reversedStr;
	string whiteSpaceStr = "";
	string word = "";
	
	for(int i = 0; i <= str.length(); i++){
		char character = str[i];
		if(character == ' ' || character == 0){
			if(word.length() > 0){
				reversedStr.push_back(word);
				word = "";	
			}
			if(character != 0)
				reversedStr.push_back(" ");
		} else {
			word += character;
		}
		
		}
		string reversed = "";
		while(reversedStr.size() > 0){
			reversed += reversedStr.back();
			reversedStr.pop_back();
		}
		cout << reversed;
	
  return reversed;
}
