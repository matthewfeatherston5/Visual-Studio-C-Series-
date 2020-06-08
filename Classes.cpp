#include <iostream>
#include <string>
#include "pointers1.h"


class Player
{
public:

	int x, y;
	int speed;

	Player(int aX, int aY, int aSpeed)
	{
		x = aX;
		y = aY;
		speed = aSpeed;
	}

	~Player() {
		std::cout << "Destructor called" << std::endl;
	}

	void Move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
};

int main()
{
	Player player(1, 2, 5);
		player.Move( 1, -1);

		std::cout << player.x << std::endl;


		int example[5];
		int* exPtr = example;
		//*(exPtr + 2) =  6;

		for (int i = 0; i < 5; i++)
		{
			example[i] = 3;
		}

		*(exPtr + 2) = 6;

		char name[] = "matt";
		name[2] = 'b';

		std::string myName = "matthew";
		int myStrSize = myName.size();

		std::cout << "My Name is: " << myName << " " << "My Size is: " << myStrSize << std::endl;
		//Person p("Y", "Male");


}