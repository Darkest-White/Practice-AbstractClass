#include<iostream>
using namespace std;


class Weapon
{
public:

	virtual void shoot() = 0;
};


class Pistol : public Weapon
{
public:

	void shoot() override
	{
		cout << "Bang!" << endl;
	}
};

class Rifle : public Weapon
{
public:

	void shoot() override
	{
		cout << "Baaaang!" << endl;
	}
};

class Bazooka : public Weapon
{
public:

	void shoot() override
	{
		cout << "Booom!" << endl;
	}
};


class Player
{
public:

	void shoot(Weapon* weapon)
	{
		weapon->shoot();
	}
};


int main()
{
	Pistol a;
	Player p;
	p.shoot(&a);
}