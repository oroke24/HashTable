//By: jamie O'Roke
//
//Class Character holds name, species, and Description,
//has a copy constructor, a function to display, and a function to display just the name
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Character{
	private:
		//class members
		char * name;
		string powers;
		string species;
		string description;
	public:
		//constructors
		Character();
		Character(string name, string powers, string species, string description);
		Character(const Character & to_copy);
		~Character();
		//class methods
		char * display_just_name();
		string display_just_species();
		string display_just_description();
		void display_me();
		bool is_found(char * name);

		
};
