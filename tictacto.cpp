#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class PlayerOne
{
private:
    string name;
    char point;

public:
    void SetName(string);
    string GetName();
    void SetPoint(char);
    char GetPoint();
    string nextMove();
};

void PlayerOne::SetName(string name)
{
    this->name = name;
}

string PlayerOne::GetName()
{
    return name;
}

void PlayerOne::SetPoint(char point)
{
    this->point = point;
}

char PlayerOne::GetPoint()
{
    return point;
}

string PlayerOne::nextMove()
{
    string rowCol;
    bool correctRow = false, correctCol = false;

    do
    {
        cout << name << " (" << point << "), please give row (1,2,3) and column (a,b,c): ";
        cin >> rowCol;
        cout << endl;

        if(rowCol[0] == '1' || rowCol[0] == '2' || rowCol[0] == '3')
            correctRow = true;

        else
        {
            cerr << "wrong row, please try again!";
            cout << endl;
        }

        if(rowCol[1] == 'a' || rowCol[1] == 'b' || rowCol[1] == 'c')
            correctCol = true;

        else
        {
            cerr << "wrong column, please try again!";
            cout << endl;
        }
    }
    while(!correctRow || !correctCol);

    return rowCol;
}

class PlayerTwo
{
private:
    char point;

public:
    void SetPoint(char);
    char GetPoint();
    string nextMove();
};

void PlayerTwo::SetPoint(char point)
{
    this->point = point;
}

char PlayerTwo::GetPoint()
{
    return point;
}

string PlayerTwo::nextMove()
{
    int box;
    string rowCol;

    box = (rand() % 9) + 1;

    if(box == 1)
        rowCol = "1a";

    if(box == 2)
        rowCol = "1b";

    if(box == 3)
        rowCol = "1c";

    if(box == 4)
        rowCol = "2a";

    if(box == 5)
        rowCol = "2b";

    if(box == 6)
        rowCol = "2c";

    if(box == 7)
        rowCol = "3a";

    if(box == 8)
        rowCol = "3b";

    if(box == 9)
        rowCol = "3c";

    return rowCol;
}

class Gameboard
{
private:
    string string1, string2, string3;

public:
    Gameboard();
    ~Gameboard();
    void printGameBoard();
    bool doMove(string, char);
    bool gameOver(char, int);
    bool hasWon(char);
};

Gameboard::Gameboard()
{
    string1 = " | | ";
    string2 = " | | ";
    string3 = " | | ";
}

Gameboard::~Gameboard(){}

void Gameboard::printGameBoard()
{
    cout << "  a b c" << endl;
    cout << "1 " << string1 << endl;
    cout << "  -+-+-" << endl;
    cout << "2 " << string2 << endl;
    cout << "  -+-+-" << endl;
    cout << "3 " << string3 << endl << endl;

}

bool Gameboard::doMove(string rowCol, char point)
{
    bool moveSuccessful = false;

    if(rowCol[0] == '1' && rowCol[1] == 'a' && string1[0] == ' ')
    {
        string1[0] = point;
        moveSuccessful = true;
    }

    if(rowCol[0] == '1' && rowCol[1] == 'b' && string1[2] == ' ')
    {
        string1[2] = point;
        moveSuccessful = true;
    }

    if(rowCol[0] == '1' && rowCol[1] == 'c' && string1[4] == ' ')
    {
        string1[4] = point;
        moveSuccessful = true;
    }

    if(rowCol[0] == '2' && rowCol[1] == 'a' && string2[0] == ' ')
    {
        string2[0] = point;
        moveSuccessful = true;
    }

    if(rowCol[0] == '2' && rowCol[1] == 'b' && string2[2] == ' ')
    {
        string2[2] = point;
        moveSuccessful = true;
    }

    if(rowCol[0] == '2' && rowCol[1] == 'c' && string2[4] == ' ')
    {
        string2[4] = point;
        moveSuccessful = true;
    }

    if(rowCol[0] == '3' && rowCol[1] == 'a' && string3[0] == ' ')
    {
        string3[0] = point;
        moveSuccessful = true;
    }

    if(rowCol[0] == '3' && rowCol[1] == 'b' && string3[2] == ' ')
    {
        string3[2] = point;
        moveSuccessful = true;
    }

    if(rowCol[0] == '3' && rowCol[1] == 'c' && string3[4] == ' ')
    {
        string3[4] = point;
        moveSuccessful = true;
    }

    return moveSuccessful;
}

bool Gameboard::gameOver(char point, int moveNum)
{
    bool endOfGame = hasWon(point);

    if(!endOfGame && moveNum == 5)
    {
        endOfGame = true;
        cout << "The game ends in a tie!" << endl << endl;
    }

    return endOfGame;
}

bool Gameboard::hasWon(char point)
{
    bool won = false;

    if((string1[0] == point && string1[2] == point && string1[4] == point) || (string2[0] == point && string2[2] == point && string2[4] == point) || (string3[0] == point && string3[2] == point && string3[4] == point))
        won = true;

    if((string1[0] == point && string2[0] == point && string3[0] == point) || (string1[2] == point && string2[2] == point && string3[2] == point) || (string1[4] == point && string2[4] == point && string3[4] == point))
        won = true;

    if((string1[0] == point && string2[2] == point && string3[4] == point) || (string1[4] == point && string2[2] == point && string3[0] == point))
        won = true;

    return won;
}

int main()
{
    PlayerTwo computer;
    PlayerOne human;

    int moveNumHuman, moveNumComp;
    unsigned int seed;
    string playerName;
    char whoStarts, playAgain, moveSign;
    bool correctInput;
    string overThere;
    bool moveDone, winner;

    cout << "Tic Tac Toe" << endl;
    cout << "***-***-***" << endl << endl;

    cout << "seed value for initialisation of random number generator: ";
    cin >> seed;
    srand(seed);
    cout << endl;

    cout << "what's your name? ";
    cin >> playerName;
    human.SetName(playerName);
    cout << endl;

    do
    {
        Gameboard game;
        moveNumComp = 0;
        moveNumHuman = 0;
        correctInput = false;

        do
        {
            cout << "who starts (c = computer or h = human)? ";
            cin >> whoStarts;
            cout << endl;

            if(whoStarts == 'c' || whoStarts == 'C' || whoStarts == 'h' || whoStarts == 'H')
                correctInput = true;

            else
            {
                cerr << "your input was incorrect!";
                cout << endl;
            }
        }
        while(!correctInput);

        if(whoStarts == 'c' || whoStarts == 'C')
        {
            computer.SetPoint('o');
            human.SetPoint('x');

            do
            {
                do
                {
                    overThere = computer.nextMove();
                    moveDone = game.doMove(overThere, 'o');
                }
                while(!moveDone);

                game.printGameBoard();
                moveNumComp++;

                winner = false;

                if(moveNumComp >= 3)
                    winner = game.hasWon('o');

                if(winner)
                    cout << "Computer wins!" << endl << endl;

                if(moveNumComp >= 3)
                    if(game.gameOver('o', moveNumComp))
                        break;

                do
                {
                    overThere = human.nextMove();
                    moveDone = game.doMove(overThere, 'x');

                    if(!moveDone)
                        cout << "place occupied, please try again!" << endl;

                }
                while(!moveDone);

                game.printGameBoard();
                moveNumHuman++;

                winner = false;

                if(moveNumHuman >= 3)
                    winner = game.hasWon('x');

                if(winner)
                    cout << human.GetName() << " (x) you win!" << endl << endl;

                if(moveNumHuman >= 3)
                    if(game.gameOver('x', moveNumHuman))
                        break;
            }
            while(!game.gameOver(computer.GetPoint(), moveNumComp));
        }

        else
        {
            correctInput = false;

            do
            {
                cout << human.GetName() << ", please choose a sign (x, o): ";
                cin >> moveSign;
                cout << endl;

                if(moveSign == 'x' || moveSign == 'X' || moveSign == 'o' || moveSign == 'O')
                    correctInput = true;

                else
                {
                    cerr << "your input was incorrect!";
                    cout << endl;
                }
            }
            while(!correctInput);

            if(moveSign == 'x' || moveSign == 'X')
            {
                human.SetPoint(moveSign);
                computer.SetPoint('o');
            }

            if(moveSign == 'o' || moveSign == 'O')
            {
                human.SetPoint(moveSign);
                computer.SetPoint('x');
            }

            do
            {
                do
                {
                    overThere = human.nextMove();
                    moveDone = game.doMove(overThere, human.GetPoint());

                    if(!moveDone)
                        cout << "place occupied, please try again!" << endl;
                }
                while(!moveDone);

                game.printGameBoard();
                moveNumHuman++;

                winner = false;

                if(moveNumHuman >= 3)
                    winner = game.hasWon(human.GetPoint());

                if(winner)
                    cout << human.GetName() << " (" << human.GetPoint() << ") you win!" << endl << endl;

                if(moveNumHuman >= 3)
                    if(game.gameOver(human.GetPoint(), moveNumHuman))
                        break;

                do
                {
                    overThere = computer.nextMove();
                    moveDone = game.doMove(overThere, computer.GetPoint());
                }
                while(!moveDone);

                game.printGameBoard();
                moveNumComp++;

                winner = false;

                if(moveNumComp >= 3)
                    winner = game.hasWon(computer.GetPoint());

                if(winner)
                    cout << "Player-2 wins!" << endl << endl;

                if(moveNumComp >= 3)
                    if(game.gameOver(computer.GetPoint(), moveNumComp))
                        break;
            }
            while(!game.gameOver(human.GetPoint(), moveNumHuman));
        }

        do
        {
            correctInput = false;

            cout << "you want to play once more (n = no, y = yes)? ";
            cin >> playAgain;
            cout << endl;

            if(playAgain == 'y' || playAgain == 'Y' || playAgain == 'n' || playAgain == 'N')
                correctInput = true;

            else
            {
                cerr << "Wrong input.!!";
                cout << endl;
            }
        }
        while(!correctInput);

        if(playAgain == 'y' || playAgain == 'Y')
                game.~Gameboard();
    }
    while(playAgain == 'y' || playAgain == 'Y');

    return 0;
}