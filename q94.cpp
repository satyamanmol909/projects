#include <iostream>
using namespace std;

class Player {
protected:
    string name;
    int age;
    int jerseyNumber;

public:
    Player(string n, int a, int jn) {
        name = n;
        age = a;
        jerseyNumber = jn;
    }

    void displayPlayerInfo() {
        cout << "Name: " << name << "\nAge: " << age << "\nJersey Number: " << jerseyNumber << endl;
    }
};

class Batsman : public Player {
private:
    int runs;
    int bestScore;
    string battingType;

public:
    Batsman(string n, int a, int jn, int r, int bs, string bt) : Player(n,a,jn)
    {
       
        runs = r;
        bestScore = bs;
        battingType = bt;
    }

    void displayBatsmanInfo() {
        displayPlayerInfo();
        cout << "\033[32mRuns: " << runs << "\nBest Score: " << bestScore << "\nBatting Type: " << battingType << endl;
    }
};

class Bowler : public Player {
private:
    int wickets;
    int bestBowling;
    string bowlingType;

public:
    Bowler(string n, int a, int jn, int w, int bb, string bt):Player(n,a,jn) 
    {
        
        wickets = w;
        bestBowling = bb;
        bowlingType = bt;
    }

    void displayBowlerInfo() {
        displayPlayerInfo();
        cout << "\033[31m"<<"Wickets: " << wickets << "\nBest Bowling: " << bestBowling << "\nBowling Type: " << bowlingType << endl;
    }
};

int main() {
    Batsman batsman("Virat Kohli", 34, 18, 12000, 183, "Right-hand");
    cout << "Batsman Information: " << endl;
    batsman.displayBatsmanInfo();
    cout << endl;

    Bowler bowler("Jasprit Bumrah", 30, 93, 200, 6, "Right-arm fast");
    cout << "Bowler Information: " << endl;
    bowler.displayBowlerInfo();

    return 0;
}

//public: - whole program
//private:- only in the class
//protected: - only in the class and its derived classes
