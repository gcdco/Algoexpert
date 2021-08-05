#include <vector>
#include <algorithm>
using namespace std;

vector<int> sunsetViews(vector<int> buildings, string direction) {
  if(buildings.size() == 0)
		return {};
	std::vector<int> buildingsWithAView {0};
	int start = buildings.size() - 1;
	int step = -1;

	if(direction == "EAST"){
		start = 0;
		step = 1;
	}
	int idx = start;
	while(idx >= 0 && idx < buildings.size()){
		while(buildingsWithAView.size() > 0 && 
			buildings[idx] >= buildings[buildingsWithAView[buildingsWithAView.size() - 1]]){
				buildingsWithAView.pop_back();
		}
		buildingsWithAView.push_back(idx);
		idx += step;
	}
	for(auto x : buildingsWithAView)
		cout << x;
	if(direction == "WEST"){
		reverse(buildingsWithAView.begin(), buildingsWithAView.end());
	}
	
	return buildingsWithAView;
}
