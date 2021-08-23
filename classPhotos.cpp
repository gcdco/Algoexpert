#include <vector>
using namespace std;

bool classPhotos(vector<int> redShirtHeights, vector<int> blueShirtHeights) {
  // Write your code here.
	bool redTeamInBack = true;
	bool blueTeamInBack = true;
	sort(redShirtHeights.begin(), redShirtHeights.end());
	sort(blueShirtHeights.begin(), blueShirtHeights.end());
	
	for(int i = 0; i < redShirtHeights.size(); i++){
		if(blueShirtHeights[i] >= redShirtHeights[i])
			redTeamInBack = false;
	}

	for(int i = 0; i < blueShirtHeights.size(); i++){
		if(redShirtHeights[i] >= blueShirtHeights[i])
			blueTeamInBack = false;
	}
	
  return redTeamInBack || blueTeamInBack;
}
