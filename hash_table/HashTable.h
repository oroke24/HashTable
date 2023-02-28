//By:jamie O'Roke
//
//Souce code for Node.h

#include "LLL.h"

class HashTable{
	private:
		//class members
		int size;
		Character reusable_hero_slot;
		//private class method
		int hash_function(char * key);
		LLL * table;
	public:
		//constructors/destructor
		HashTable();
		HashTable(int size);
		~HashTable();
		//public class methods
		void insert_character(char * key, Character a_hero);
		void display_character(char * key);
		void display_all_characters();
		int load_all_from_file(string filename);
		void find_character(char * key);
		void remove_character(char * key);


};
