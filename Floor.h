/*#include <fstream>
#include <iostream>

class Floor {
	//Vector of Enemies on board
	//Enemy* enemy_lst;
	//Vector of Items on board
	//Item* item_lst;
	//Pointer to Player 
	//Player* player;
	//pointer to array of floors?
	const int height;
    const int width;
    char **floor;
public:
	//remove enemy from vector/board
	//void killEnemy(Enemy& enemy);
	//remove item from board
	//void useItem(Item& item);
	//print board
	void printBoard();
	Floor(const int height, const int width, std::ifstream& file);
};*/

#include <fstream>
#include <iostream>

 class Floor
{
  
    //Vector of Enemies on board
    //Enemy* enemy_lst;
    //Vector of Items on board
    //Item* item_lst;
    //Pointer to Player 
    //Player* player;
    //pointer to array of floors?
  const int height;
  const int width;
  char **floor;

public:
    //remove enemy from vector/board
    //void killEnemy(Enemy& enemy);
    //remove item from board
    //void useItem(Item& item);
    //print board
  void printBoard ();
  
Floor (const int height, const int width, std::ifstream & file);

};