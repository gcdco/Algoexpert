#include <vector>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string> words) {
  std::map<string, vector<string>> sortedWords;
	for(const auto& word : words){
		string current = word;
		sort(current.begin(), current.end());
		sortedWords[current].push_back(word);
	}
	
	std::vector<std::vector<string>> results;
	for(auto [key,values] : sortedWords){
		results.push_back(values);
	}

  return results;
}
