#include <iostream>
#include<string>

using namespace std;

class character
{

public:
    void printName(){
        cout<<name<<endl;
    }

    string getname() { return name; }
    void addInventory(string item, int slot)
    {
        inventory[slot] = item;
    }
    void printInventory()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << inventory[i] << endl;
        }
    }

    void getInfo(){
        printName();
        printInventory();
    }

private:
    string inventory[5];
    string name;

public:

    // constructor
    character(string name):name(name)
    {
        //this-> name = name;
        inventory[0] = "dagger";
        inventory[1] = "empty";
        inventory[2] = "empty";
        inventory[3] = "empty";
        inventory[4] = "empty";
    };

};

int main(){
    character bob("bob");
    character nobody("nobody");

    bob.printName();
    bob.printInventory();

    cout<<endl;

    nobody.printName();
    nobody.printInventory();

    cout<<endl;

    bob.addInventory("sword",1);
    bob.addInventory("cloak",2);
    bob.getInfo();


}
