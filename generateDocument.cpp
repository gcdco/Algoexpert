using namespace std;

bool generateDocument(string characters, string document) {
	map<char, int> charFrequency;
	
	// populate
	for (int i = 0; i < document.size(); i++){
		char character = document[i];
		auto charExistsInMap = charFrequency.find(character);
		if(charExistsInMap != charFrequency.end()){
			charExistsInMap->second += 1;
		}
		else {
			std::pair<char, int> newKey (character, 1);
			charFrequency.insert(newKey);
		}
	}
	
	// count
	std::map<char, int> charFrequencyInCharacters;
	for (int i = 0; i < characters.size(); i++){
		char character = characters[i];
		auto charExistsInMap = charFrequencyInCharacters.find(character);
		if(charExistsInMap != charFrequencyInCharacters.end()){
			charExistsInMap->second += 1;
		}
		else {
			std::pair<char, int> newKey (character, 1);
			charFrequencyInCharacters.insert(newKey);
		}
	}
	
	// create document
	for(const auto& character : charFrequency){
		auto charExistsInMap = charFrequencyInCharacters.find(character.first);
		if(charExistsInMap == charFrequencyInCharacters.end()){
			return false;
		}
		if(charExistsInMap->second < character.second){
			return false;
		}
	}
	
  return true;
}
