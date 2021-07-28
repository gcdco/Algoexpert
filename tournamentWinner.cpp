#include <vector>
#include <map>
#include <algorithm>
using namespace std;

string tournamentWinner(vector<vector<string>> competitions,
                        vector<int> results) {
	
	map<string, int> scores;
	
	for(int i = 0; i < competitions.size() - 1; i++) {
		// Check if teams are in the scores vector		
		std::map<string, int>::iterator itHome = scores.find(competitions[i][0]);
		std::map<string, int>::iterator itAway = scores.find(competitions[i][1]);
		// Add if not
		if(itHome == scores.end()){
			scores.insert(std::pair<string,int>(competitions[i][0],0));
		}
		if(itAway == scores.end()){
			scores.insert(std::pair<string,int>(competitions[i][1],0));
		}
	}
	
	for(int i = 0; i < competitions.size(); i++) {
		int winner = results[i];
		// Home team wins
		if(winner == 1){
			scores[competitions[i][0]] += 3;
		}
		// Away team wins
		if(winner == 0){
			scores[competitions[i][1]] += 3;
		}
	}
	
	string competitionWinner = "";
	int competitionWinnerScore = 0;
	for(const auto& team : scores)
	{
		 if(team.second > competitionWinnerScore){
			 competitionWinner = team.first;
			 competitionWinnerScore = team.second;
		 }
	}

  return competitionWinner;
}
