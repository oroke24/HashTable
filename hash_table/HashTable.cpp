//By:jamie O'Roke
//
//Souce code for Node.h

#include <fstream>
#include "HashTable.h"

//constructors/destructor
HashTable::HashTable(){
	size = 0;
	table = new LLL[this->size];
}
HashTable::HashTable(int size){
	this->size = size;
	table = new LLL[this->size];
}
HashTable::~HashTable(){
	delete [] table;
}
//public class methods
void HashTable::insert_character(char * key, Character a_hero){
	int index = hash_function(key); 
	table[index].insert_character(a_hero);
}
void HashTable::display_character(char * key){
}
void HashTable::display_all_characters(){
	for(int i = 0; i < size; i++){
		cout << "--------------------" << endl;
		cout << "Index " << i << endl << endl;
		table[i].display_all();
	}
}
int HashTable::load_all_from_file(string filename){
	ifstream file_to_read;
	file_to_read.open(filename);
	if(file_to_read){
		string name, powers, species, description;
		while(!file_to_read.eof()){
			getline(file_to_read, name, '|');
			getline(file_to_read, powers, '|');
			getline(file_to_read, species, '|');
			getline(file_to_read, description);
			Character reusable_slot(name, powers, species, description);
			insert_character(reusable_slot.display_just_name(), reusable_slot);
			//reusable_slot.display_me();
			file_to_read.peek();
		}
	}
	else cout << "File doesn't exits." << endl;
	return 0;
}
void HashTable::find_character(char * key){
}
void HashTable::remove_character(char * key){
}
int HashTable::hash_function(char * key){
	int index_value = 0;
	for(int i = 0; i < (int)strlen(key); i++){
		index_value += (int)key[i];
		if((5 < i) && (i < 10)) index_value = index_value + index_value;
	}
	//This chunk is just for testing purposes
	//cout << "Before mod: " << index_value; //Testing index value
	index_value = index_value % size; //modding by size of table
	//cout << ", Aftere mod: " << index_value << endl; //Testing index value after mod

	return index_value;
}
