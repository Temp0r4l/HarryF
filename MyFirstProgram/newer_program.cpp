#include <string>
 
#include <iostream>
 
using namespace std;
 
class player {
public:
    player(); 
    player(string inputName); 
 
    string name; 
     
    void Greet();
};

player::player()
{
	name + "Default";
}

player::player(string theName)
{
	name = theName;
}

void player::Greet()
{
	cout << "Hey there " << name << "!" << endl;
}
