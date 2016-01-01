#ifndef _mhshlUtils
#define _mhshlUtils

#include <curl/curl.h>
#include <vector>
#include <string>
#include <iostream>
#include "mhshl.h"

void db_addTeam(bool, std::string, std::string, std::string, int, int);
void db_addPlayer(bool varsity, std::string tID, std::string name, int identifier, int number, int season);
void db_updatePlayer(bool varsity, int season, Player *p);
void db_addGame(bool, std::string, int, int, int, int, std::string, std::string, int);
void db_updateGame(bool, int, Game*);
void db_addPenalty(bool, std::string, std::string, int, int, int, int, std::string);
void db_updatePenalty(bool, int, PenaltyEvent*);

void db_addGoal(bool, int, std::string, std::string, int, int, int, int, int, int);

std::vector<std::string> split(std::string str, std::string delim);
std::string extract(std::string str, std::string tag);

std::string fetchWebPage(std::string url);

void spaceBuffer(int len, std::string str);

std::string stripWhitespace(std::string s);

std::string twoPlace(int num);

void showTeams(League l);

void showPlayers(League l);

void showGames(League l);

void showPenalties(League l);

void showGoals(League l);

void showGoaliePerformances(League l);

void dumpStatus(League l);

std::string removeSubstring(std::string str, std::string substr);


int getYear(int startYear, int month);

std::string translateTeamID(std::string s);

int getDay(std::string date);

int getMonth(std::string date);

int getPeriod(std::string per);

int getMinutes(std::string time);

std::string getValue(std::string str, std::string value);



#endif
