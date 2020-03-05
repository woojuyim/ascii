#include "Cat.h"

Cat::Cat() {
	name = "Black Cat of Death";
	level = 2;
	attack = rand() % 2 + 1;
	defense = rand() % 2;
	speed = rand() % 4;
	health = rand() % 3 + 4;
}
void Cat::enemyAction(Character* user1) {
	std::cout << "It's the Black Cat of Death's turn. \n";
	srand((unsigned)time(0));
	if ((rand() % 100) < 30) {
		int _damage;
		srand((unsigned)time(0));
		if ((rand() % 100) < 30) {
			_damage = (getattack() - user1->getdefense()) * 3;
			if (_damage <= 0)
				_damage = 1;
			std::cout << "The Black Cat of Death scratched your face! You lost " << _damage << " HP \n";
			user1->takedamage(_damage);

		}
		else
			std::cout << "The Black Cat of Death was overcome with tiredness to move. \n";
	}

	else {
		int _damage;
		_damage = getattack() - user1->getdefense();
		if (_damage <= 0)
			_damage = 0;
		std::cout << "The Black Cat of Death used its powers of die! You lost " << _damage << " HP \n";
		user1->takedamage(_damage);

	}
}
void Cat::getStruck(Character* user1) {
	srand((unsigned)time(0));
	std::cout << "You attempted to beat the Black Cat of Death! \n";
	if ((rand() % 100) < 30) {
		int _damage = (user1->getattack() - getdefense()) * 3;
		takedamage(_damage);
		std::cout << "Your hit directly hit the Black Cat of Death! It whimpered and meowed softly... It took " << _damage << " damage \n";
	}
	else {
		std::cout << "The cat nimbly dodged the attack... \n";
	}
}
void Cat::itemChance(Character* user1) {
	int chance = rand() % 101;
	if (chance > 80) {
		user1->itemget("Potion");
		std::cout << "You found a Potion. \n";
	}
	else if (chance < 5) {
		user1->itemget("Mega Potion");
		std::cout << "You found a Mega Potion. \n";
	}
}

void Cat::draw() {
	int prob = rand() % 100;
	if (prob < 55)
		drawcat();
	else
		drawcat1();
}
void Cat::drawcat1() {
	std::cout << "   (""`-''-/"").___..--''""`-._ " << std::endl
		<< "   `6_ 6  )   `-.  (     ).`-.__.`) " << std::endl
		<< "  (_Y_.)'  ._   )  `._ `. ``-..-' " << std::endl
		<< "   _..`--'_..-_/  /--'_. ' ,' " << std::endl
		<< "  (  ),-''  (  ),'   ((.-'	 " << std::endl << std::endl;
}

void Cat::drawcat(){
	std::cout << "          (`.          " << std::endl
		<< "           ) )        " << std::endl
		<< "	  ( ( "			<< std::endl
		<< "	   \\ \\ "			<< std::endl
		<< "	    \\ \\ "		<< std::endl
		<< "	  .-'  `-. "		<< std::endl
		<< "	 /        `. "			<< std::endl
		<< "	(      )    `-._ ,    _" << std::endl
		<< "	 )   ,'         (.\\--'( " << std::endl
		<< "	 \\  (         ) /      \\ " << std::endl
		<< "	  \\  \\_(     / (    <6 (6 " << std::endl
		<< "	   \\_)))\\   (   `._  .:Y)__ " << std::endl
		<< "	    '''  \\   `-._.'`---^_))) " << std::endl
		<< "	          `-._ )))       ``` " << std::endl
		<< "	               ```           " << std::endl << std::endl;
}