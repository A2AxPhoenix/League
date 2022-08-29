#ifndef TEAM_H
#define TEAM_H

#include <iostream>
#include <vector>
#include "Player.h"
using u64 = uint64_t;

class Team {
	private:
		std::vector<Player> players;
		std::string name;
		std::string rank;
		std::string homeStadium;
		u64 wins;
		u64 losses;
		u64 ties;
		u64 standing; 
		u64 pointsFor;
		u64 pointsAgainst;
		double averagePointsFor;
		double averagePointsAgainst;
		u64 defense;
		u64 assists;
		double averageDefense;
		double averageAssists;
		u64 teamScore;
		double averageTeamScore;
		// Determines who may be the underdog and the expected winner.
		u64 rating;
	public:
		std::vector<Player> get_players() const; 
		std::string get_name() const; 
		std::string get_rank() const;
		std::string get_homeStadium() const;
		u64 get_wins() const; 
		u64 get_losses() const; 
		u64 get_ties() const; 
		u64 get_standing() const; 
		u64 get_pointsFor() const; 
		u64 get_pointsAgainst() const; 
		double get_averagePointsFor() const; 
		double get_averagePointsAgainst() const; 
		u64 get_defense() const;
		u64 get_assists() const;
		double get_averageDefense() const;
		double get_averageAssisrs() const;
		u64 get_teamScore() const;
		double get_averageTeamScore() const;
		u64 get_rating() const;
};

#endif
