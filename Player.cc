#include "Player.h"
#include <stdexcept>
using P = Player;
using u64 = uint64_t;
using namespace std;

P::Player() {
	name = "Player1";
	team = "Home Team";
	rank = "Bronze 1";
}
P::Player(string newName, string newTeam, string newRank) {
	set_name(newName);
	set_team(newTeam);
	set_rank(newRank);
}
		// Accessors
		string P::get_name() const { return name; }
		string P::get_team() const { return team; }
		string P::get_rank() const { return rank; }
		u64 P::get_gamesPlayed() const { return gamesPlayed; }
		u64 P::get_score() const { return score; }
		double P::get_averageScore() const { return averageScore; } 
		u64 P::get_goals() const { return goals; }
		double P::get_averageGoals() const { return averageGoals; }
		u64 P::get_assists() const { return assists; }
		double P::get_averageAssists() const { return averageAssists; }
		u64 P::get_saves() const { return saves; }
		double P::get_averageSaves() const { return averageSaves; }
		u64 P::get_mvp() const { return mvp; }
		u64 P::get_totalStriker() const { return totalStriker; }
		u64 P::get_totalPlaymaker() const { return totalPlaymaker; }
		u64 P::get_totalSavior() const { return totalSavior; }
		u64 P::get_ownGoals() const { return ownGoals; }
		// TODO: Finish the Mutators and the remaining functions below
		// Mutators
		void P::set_name(string newName) {}
		void P::set_team(string newTeam) {}
		void P::set_rank(string newRank) {}
		void P::set_gamesPlayed(u64 newGamesPlayed) {}
		void P::set_score(u64 newScore) {}
		void P::set_averageScore(double newAverageScore) {}
		void P::set_goals(u64 newGoals) {}
		void P::set_averageGoals(double newAverageGoals) {}
		void P::set_assists(u64 newAssists) {}
		void P::set_averageAssists(double newAverageAssists) {}
		void P::set_saves(u64 newSaves) {}
		void P::set_averageSaves(double newAverageSaves) {}
		void P::set_mvp(u64 newMVP) {}
		void P::set_totalStriker(u64 newTotalStriker) {}
		void P::set_totalPlaymaker(u64 newTotalPlaymaker) {}
		void P::set_totalSavior(u64 newTotalSavior) {}
		void P::set_ownGoals(u64 newOwnGoals) {}
		// Overloads
		
		bool P::operator==(const Player &p) {}
		bool P::operator<(const Player &p) {}

		ostream& operator<<(ostream& outs, const Player &p) {}
		istream& operator>>(istream& ins, Player &p) {}

	// Sort Functions
	bool sort_by_name(const Player &p1, const Player &p2) {}
	bool sort_by_team(const Player &p1, const Player &p2) {}
	bool sort_by_rank(const Player &p1, const Player &p2) {}
	bool sort_by_score(const Player &p1, const Player &p2) {}
	bool sort_by_averageScore(const Player &p1, const Player &p2) {}
	bool sort_by_goals(const Player &p1, const Player &p2) {}
	bool sort_by_averageGoals(const Player &p1, const Player &p2) {}
	bool sort_by_assists(const Player &p1, const Player &p2) {}
	bool sort_by_averageAssists(const Player &p1, const Player &p2) {}
	bool sort_by_saves(const Player &p1, const Player &p2) {}
	bool sort_by_averageSaves(const Player &p1, const Player &p2) {}
	bool sort_by_mvps(const Player &p1, const Player &p2) {}
