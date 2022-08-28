#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
using u64 = uint64_t;

class Player {
	private:
		// Member Variables
		std::string name;
		std::string team;
		std::string rank;
		u64 gamesPlayed;
		u64 score;
		double averageScore;
		u64 goals;
		double averageGoals;
		u64 assists;
		double averageAssists; 
		u64 saves;
		double averageSaves;
		u64 mvp;
		u64 totalStriker;
		u64 totalPlaymaker;
		u64 totalSavior;
		u64 ownGoals;
	public:
		// Constructors
		Player();
		Player(std::string newName, std::string newTeam, std::string newRank);
		// Accessors
		std::string get_name() const;
		std::string get_team() const;
		std::string get_rank() const;
		u64 get_gamesPlayed() const;
		u64 get_score() const;
		double get_averageScore() const;
		u64 get_goals() const;
		double get_averageGoals() const;
		u64 get_assists() const;
		double get_averageAssists() const;
		u64 get_saves() const;
		double get_averageSaves() const;
		u64 get_mvp() const;
		u64 get_totalStriker() const;
		u64 get_totalPlaymaker() const;
		u64 get_totalSavior() const;
		u64 get_ownGoals() const;
		// Mutators
		void set_name(std::string newName);
		void set_team(std::string newTeam);
		void set_rank(std::string newRank);
		void set_gamesPlayed(u64 newGamesPlayed);
		void set_score(u64 newScore);
		void set_averageScore(double newAverageScore);
		void set_goals(u64 newGoals);
		void set_averageGoals(double newAverageGoals);
		void set_assists(u64 newAssists);
		void set_averageAssists(double newAverageAssists);
		void set_saves(u64 newSaves);
		void set_averageSaves(double newAverageSaves); 
		void set_mvp(u64 newMVP);
		void set_totalStriker(u64 newTotalStriker);
		void set_totalPlaymaker(u64 newTotalPlaymaker);
		void set_totalSavior(u64 newTotalSavior);
		void set_ownGoals(u64 newOwnGoals);
		// Overloads
		
		bool operator==(const Player &p);
		bool operator<(const Player &p);

		friend std::ostream& operator<<(std::ostream& outs, const Player &p);
		friend std::istream& operator>>(std::istream& ins, Player &p);
};

	// Sort Functions
	bool sort_by_name(const Player &p1, const Player &p2);
	bool sort_by_team(const Player &p1, const Player &p2);
	bool sort_by_rank(const Player &p1, const Player &p2);
	bool sort_by_score(const Player &p1, const Player &p2);
	bool sort_by_averageScore(const Player &p1, const Player &p2);
	bool sort_by_goals(const Player &p1, const Player &p2);
	bool sort_by_averageGoals(const Player &p1, const Player &p2);
	bool sort_by_assists(const Player &p1, const Player &p2);
	bool sort_by_averageAssists(const Player &p1, const Player &p2);
	bool sort_by_saves(const Player &p1, const Player &p2);
	bool sort_by_averageSaves(const Player &p1, const Player &p2);
	bool sort_by_mvps(const Player &p1, const Player &p2);

#endif
