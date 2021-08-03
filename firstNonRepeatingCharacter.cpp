using namespace std;

int firstNonRepeatingCharacter(string string) {
  
	map<char, int> frequency;
	
	for(int i = 0; i < string.length(); i++){
		char character = string[i];
		auto currentChar = frequency.find(character);
		if(currentChar == frequency.end()){
			frequency[character] = 1;
		}
		else{
			frequency[character] += 1;
		}
	}
	
	for(int i = 0; i < string.size(); i++){
		char character = string[i];
		if(frequency[character] == 1)
			return i;
	}
	
  return -1;
}
