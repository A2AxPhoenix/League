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
        double record;
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
        double get_record() const;
		u64 get_standing() const; 
		u64 get_pointsFor() const; 
		u64 get_pointsAgainst() const; 
		double get_averagePointsFor() const; 
		double get_averagePointsAgainst() const; 
		u64 get_defense() const;
		u64 get_assists() const;
		double get_averageDefense() const;
		double get_averageAssists() const;
		u64 get_teamScore() const;
		double get_averageTeamScore() const;
		u64 get_rating() const;

        void set_name(std::string newName);
        void set_rank(std::string newRank);
        void set_homeStadium(std::string newHomeStadium);
        void set_wins(u64 newWins);
        void set_losses(u64 newLosses);
        void set_ties(u64 newTies);
        void set_record(double newRecord);
        void set_standing(u64 newStanding);
        void set_pointsFor(u64 newPointsFor);
        void set_pointsAgainst(u64 newPointsAgainst);
        void set_averagePointsFor(double newAveragePointsFor);
        void set_averagePointsAgainst(double newAveragePointsAgainst);
        void set_defense(u64 newDefense);
        void set_assists(u64 newAssists);
        void set_averageDefense(double newAverageDefense);
        void set_averageAssists(double newAverageAssists);
        void set_teamScore(u64 newTeamScore);
        void set_averageTeamScore(double newAverageTeamScore);
        void set_rating(u64 newRating);

        bool operator==(const Team &t);
        bool operator<(const Team &t);

        friend std::ostream& operator<<(std::ostream& outs, const Team &t);
        friend std::istream& operator>>(std::istream& ins, Team &t);
};

    bool sort_by_name(const Team &t1, const Team &t2);
    bool sort_by_rank(const Team &t1, const Team &t2);
    bool sort_by_wins(const Team &t1, const Team &t2);
    bool sort_by_losses(const Team &t1, const Team &t2);
    bool sort_by_tie(const Team &t1, const Team &t2);
    bool sort_by_record(const Team &t1, const Team &t2);
    bool sort_by_standing(const Team &t1, const Team &t2);
    bool sort_by_pointsFor(const Team &t1, const Team &t2);
    bool sort_by_pointsAgainst(const Team &t1, const Team &t2);
    bool sort_by_defense(const Team &t1, const Team &t2);
    bool sort_by_assists(const Team &t1, const Team &t2);
    bool sort_by_teamScore(const Team &t1, const Team &t2);
    bool sort_by_rating(const Team &t1, const Team &t2);
    void print_stats(const Team &t);

#endif
