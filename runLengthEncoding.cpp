using namespace std;

string runLengthEncoding(string str) {
	int strSize = str.size();
	string newString = "";
	char currRun = str[0];
	int runSize = 1;

	for(int i = 1; i <= strSize; i++){
		if(currRun != str[i]){
			newString += to_string(runSize);
			newString += currRun;
			currRun = str[i];
			runSize = 1;
		}
		else if(currRun == str[i]){
			if(runSize == 9){
				newString += to_string(runSize);
				newString += currRun;
				runSize = 0;
			}
			runSize++;
		}	
	}
	
  return newString;
}
