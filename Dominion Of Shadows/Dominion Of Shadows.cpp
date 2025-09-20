#include<iostream>

using namespace std;

//It's a dev code brench

struct Character {
	string name;
	string affiliation;
	int sanity;
};

struct Player {
	int ritualKnowledge;

};

struct Enemy {
	string name;
	int damage;
	int aggressiveness;
	int lvl;
};

struct PossessedEnemy {
	string demonName;
	string humanName;
	int possessionStrength;
	int demonLvl;
};

struct Item {
	int weight;
	int rarity;
};

int main() {
	cout << "Hello in \"Dominion Of Shadows\". Enjoy the game.";

	return 0;
}
