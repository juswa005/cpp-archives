#include <iostream>
using namespace std;

int main() {
    int lives;
    int score;
    int total_score;
    int score1, score2, score3;

    cout << "Welcome to the Quiz Game!" << endl;
    cout << "You start each level with 5 lives." << endl << endl;

    // ==================== EASY LEVEL ====================
    cout << "=== EASY LEVEL ===" << endl;
    lives = 5;
    score = 0;
    char answer;

    cout << "Q1: What is 2 + 2?" << endl;
    cout << "a) 3  b) 4  c) 5  d) 6" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'b' || answer == 'B')
    {
	score++;
    }

    else
    {
	lives--;
    }

    system("clear");

    cout << "Q2: Capital of France?" << endl;
    cout << "a) London  b) Berlin  c) Paris  d) Rome" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'c' || answer == 'C') 
    {
	score++;
    }

    else
    {
	lives--;
    }

    system("clear");

    cout << "Q3: Which is a fruit?" << endl;
    cout << "a) Carrot  b) Apple  c) Potato  d) Cucumber" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'b' || answer == 'B')
    {
	score++;
    }


    else
    {
	lives--;
    }

    system("clear");

    cout << "Q4: What color is the sky?" << endl;
    cout << "a) Blue  b) Green  c) Red  d) Yellow" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'a' || answer == 'A')
    {
        score++;
    }

    else
    {
        lives--;
    }

    system("clear");

    cout << "Q5: How many days in a week?" << endl;
    cout << "a) 5  b) 6  c) 7  d) 8" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'c' || answer == 'C')    
    {
        score++;
    }

    else
    {
        lives--;
    }

    system("clear");

    score1 = score;	//this will be used for the next round to count the total score

//score acquired checker, if will proceed to next round or not
    if (score >= 4)
    {
	cout << "You passed EASY LEVEL! Score: " << score << "/5" <<endl << endl;
    }

    else 
    {
	system("clear");
        cout << "Game Over! Score for this level: " << score << "/5" << endl;
	cout << "Total Score in the Whole game: " << score << "/5" << endl;
        cout << "Your Rank: Bronze" << endl;
        return 0;
    }

    // ==================== MEDIUM LEVEL ====================
    cout << "=== MEDIUM LEVEL ===" << endl;
    lives = 5;
    score = 0;

    cout << "Q1: Who wrote 'Romeo and Juliet'?" << endl;
    cout << "a) Shakespeare  b) Dickens  c) Hemingway  d) Twain" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'a' || answer == 'A')
    {
	score++;
    }

    else
    {
	lives--;
    }
    system("clear");

    cout << "Q2: 15 * 3 = ?" << endl;
    cout << "a) 45  b) 35  c) 40  d) 50" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'a' || answer == 'A')
    {
	score++;
    }
    else
    {
	lives--;
    }

    system("clear");

    cout << "Q3: Water boils at what temperature (°C)?" << endl;
    cout << "a) 90  b) 80  c) 100  d) 120" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'c' || answer == 'C')
    {
	score++;
    }
    else
    {
	lives--;
    }

    system("clear");

    cout << "Q4: Which planet is known as the Red Planet?" << endl;
    cout << "a) Mars  b) Earth  c) Jupiter  d) Venus" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'a' || answer == 'A')
    {
	score++;
    }
    else
    {
	lives--;
    }

    system("clear");

    cout << "Q5: How many continents are there?" << endl;
    cout << "a) 5  b) 6  c) 7  d) 8" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'c' || answer == 'C')
    {
	score++;
    }
    else
    {
	lives--;
    }

    system("clear");

    score2 = score; //for the total score logic later

//checkpoint ulit if mag proceed ba sa next round or no
    if (score >= 3)
    { 
	cout << "You passed MEDIUM LEVEL! Score: " << score << "/5" << endl << endl;
    }
    else 
    {
	system("clear");
	total_score = score1 + score2;
        cout << "Game Over! Score for this level: " << score << "/5" << endl;
	cout << "Total Score in the Whole Game: " << total_score << "/10" <<endl;
        cout << "Your Rank: Silver" << endl;
        return 0;
    }

    // ==================== HARD LEVEL ====================
    cout << "=== HARD LEVEL ===" << endl;
    lives = 5;
    score = 0;

    cout << "Q1: Square root of 144?" << endl;
    cout << "a) 10  b) 12  c) 14  d) 16" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'b' || answer == 'B')
    { 
	score++;
    }
    else
    {
	lives--;
    }

    system("clear");

    cout << "Q2: Who developed the theory of relativity?" << endl;
    cout << "a) Newton  b) Einstein  c) Tesla  d) Edison" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'b' || answer == 'B')
    { 
	score++;
    }
    else
    {
	lives--;
    }

    system("clear");

    cout << "Q3: First element in periodic table?" << endl;
    cout << "a) Hydrogen  b) Helium  c) Oxygen  d) Carbon" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'a' || answer == 'A')
    {
	score++;
    }
    else
    {
	lives--;
    }

    system("clear");

    cout << "Q4: What is 25 * 4?" << endl;
    cout << "a) 100  b) 90  c) 95  d) 105" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'a' || answer == 'A')
    {
	score++;
    }
    else
    {
	lives--;
    }

    system("clear");

    cout << "Q5: Largest ocean on Earth?" << endl;
    cout << "a) Atlantic  b) Indian  c) Pacific  d) Arctic" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'c' || answer == 'C')
    {
	score++;
    }
    else
    {
	lives--;
    }

    system("clear");





    score3 = score;
    if (score >= 3)
    {
	cout << "Congratulations! You completed HARD LEVEL!" << endl << "Your Rank: Gold" << endl;
    }
    else
    {
	system("clear");
	total_score = score1 + score2 + score3;
	cout << "Game Over! Score fot this level: " << score << "/5" << endl;
	cout << "Total Score for the Whole Game: " << total_score << "/15" << endl;
	cout << "Your Rank: Gold" << endl;

    }

    return 0;
}

