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

	int totalSpeed = 0;
	for (int i = 0; i < redShirtSpeeds.size(); i++){
		totalSpeed += max(redShirtSpeeds[i], blueShirtSpeeds[i]);
		/*
		if(redShirtSpeeds[i] >= blueShirtSpeeds[i]){
			totalSpeed += redShirtSpeeds[i];
		} else {
			totalSpeed += blueShirtSpeeds[i];
		}*/
	}
  return totalSpeed;
}
