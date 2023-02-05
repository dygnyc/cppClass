#include <iostream>
#include <string>

using namespace std;

class character
{

public:
    void fight(character &opponent)
    {
        cout << "fight!" << endl;
        cout << getName() << " vs. " << opponent.getName() << endl;

        cout << getName() << " attacks for 20 damage" << endl;
        opponent.health -= 20;

        cout << opponent.getName() << " attachs for 30 damage" << endl;
        health -= 30;
    }

    string getName() { return name; }
    void printName()
    {
        cout << name << endl;
    }

    void addGold(int income)
    {
        gold += income;
    }
    void subtractGold(int expense)
    {
        gold -= expense;
    }

    void printInventory()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << inventory[i] << endl;
        };
    }
    void printAttributes()
    {
        cout << "int = " << intelligence << "\tstr = " << strength << "\tdex = " << dexterity << endl;
    }

    void printStats()
    {
        cout << "health = " << health << "\tmana = " << mana << "\t gold = " << gold << endl;
    }

    // constructor
    character(string name) : name(name)
    {
        health = 100;
        mana = 100;
        gold = 1000;
        intelligence = 10;
        strength = 10;
        dexterity = 10;
        inventory[0] = "empty";
        inventory[1] = "empty";
        inventory[2] = "empty";
        inventory[3] = "empty";
        inventory[4] = "empty";
    };

private:
    string name;
    int health, mana, gold;
    int intelligence, strength, dexterity;
    string inventory[5];
};

int main()
{
    character Jonas("Jonas");
    character Donny("Donny");

    cout << Jonas.getName() << endl;
    Jonas.printAttributes();
    Jonas.printStats();
    Jonas.printInventory();

    cout << "got some gold!" << endl;
    Jonas.addGold(1000);
    Jonas.printStats();

    cout << "lost some gold!" << endl;
    Jonas.subtractGold(500);
    Jonas.fight(Donny);

    Jonas.printStats();
    Donny.printStats();

    Donny.fight(Jonas);
    Jonas.printStats();
    Donny.printStats();

    return 0;
}
