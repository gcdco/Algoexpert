#include <vector>
using namespace std;

int tandemBicycle(vector<int> redShirtSpeeds, vector<int> blueShirtSpeeds,
                  bool fastest) {
  // Write your code here.
	sort(redShirtSpeeds.begin(), redShirtSpeeds.end());
	if(fastest == true){
		sort(blueShirtSpeeds.begin(), blueShirtSpeeds.end(), greater<int>());		
	}
	else {
			sort(blueShirtSpeeds.begin(), blueShirtSpeeds.end());	
	}
	
	int totalTime = 0;
	for (int i = 0; i < redShirtSpeeds.size(); i++){
		if(redShirtSpeeds[i] >= blueShirtSpeeds[i]){
			totalTime += redShirtSpeeds[i];
		} else {
			totalTime += blueShirtSpeeds[i];
		}
	}
  return totalTime;
}
