//By: jamie O'Roke
//source code for Character.h
//
#include "Character.h"

//Regular constructor
Character::Character(string name, string powers, string species, string description){
	//Deep copy the name notice the .c_str() method from the String class
	this->name = new char[strlen(name.c_str()) + 1];
	strcpy(this->name, name.c_str());
	
	//The String class handles deep copying for the species and description
	this->powers = powers;
	this->species = species;
	this->description = description;
}

//Copy constructor
Character::Character(const Character & to_copy){
	//Deep copy the name 
	this->name = new char[strlen(to_copy.name) + 1];
	strcpy(this->name, to_copy.name);
	//this->name = to_copy.name;

	//The String class handles deep copying for the species and description
	this->powers = to_copy.powers;
	this->species = to_copy.species;
	this->description = to_copy.description;
}
//Constructor with no args
Character::Character(){
	this->name = nullptr;
}
Character::~Character(){
	delete name;
}

//function to display just the name
char * Character::display_just_name(){
	return this->name;
}
//string Character::display_just_species();
//string Character::display_just_description();
void Character::display_me(){
	//one cout statement, displaying all contents 
	cout << "Name: " << name << endl <<
		"Powers: " << powers << endl << 
		"Species: " << species << endl << 
		"Description: " << description << endl << endl;
}
//compares this name with one provided, returns true if they match, false otherwise
bool Character::is_found(char * name){
	if(strcmp(this->name, name) == 0) return true;
	return false;
}
