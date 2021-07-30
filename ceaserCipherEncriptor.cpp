using namespace std;

const int A = 97;
const int Z = 122;

string caesarCypherEncryptor(string str, int key) {
	// a - z = 97 - 122 
  int newKey = key % 26;
	vector<char> newStr;
	
	for(int i = 0; i < str.size(); i++){
		int currChar = str[i];
		currChar += newKey;
		
		if(currChar > Z)
			currChar -= 26;
		
		newStr.push_back(currChar);
	}
	
  return string(newStr.begin(), newStr.end());
}
