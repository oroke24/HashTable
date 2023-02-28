//By:jamie O'roke
//
//This is where the main function exists.   It acts as the client
//
#include "HashTable.h"

int main(){
	int size;
	string file = "characters.txt";
	cout << "Enter size of table: ";
	cin >> size;
	HashTable hashtable(size);
	hashtable.load_all_from_file(file);
	hashtable.display_all_characters();

	/*
	//Making a character with all strings in the constructor
	Character first("john", "human", "walks and jumps"); 
	Character second("lucy", "dog", "barks and bites"); 
	Character third("zoey", "alien", "observes and laughs"); 
	
	//cout << "Copying identical twin" << endl;
	//Making a node with a Character object in the constructo
	//Node second(first);
	
	//cout << "twin is: " << endl;
	//calling the node's wrapper function to kickstart the Character's display function
	//second.display_me();

	LLL list;
	list.insert_character(first);
	list.insert_character(second);
	list.insert_character(third);

	cout << "Here are all of your champs: " << endl;
	int number_of_champs = list.display_all();
	cout << "There are " << number_of_champs << " in this list." << endl;


	string name;
	cout << endl << "Enter name to remove (try john): ";
	cin >> name;
 	char * cname = new char[strlen(name.c_str()) + 1];
	strcpy(cname, name.c_str());

	cout << "Removing " <<  cname << " from list..." << endl;
	list.remove_character(cname);

	cout << "looking for " << cname << " again." << endl;
	list.display(cname);

	cout << endl;

	cout << "Here are all of your champs again: " << endl;
	number_of_champs = list.display_all();
	cout << "Now there are " << number_of_champs << " in this list." << endl;


	//cout << "Hello World" << endl;
	*/
	return 0;
}
