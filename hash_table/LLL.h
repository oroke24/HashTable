//By: Jamie O'Roke
//
//LLL class is a Linear Linked list, it is unsorted, it inserts based on the stack concept
//
#include "Node.h"

class LLL{
	private:
		//class members
		Node * head;
	public:
		//constructors/Destructor
		LLL();
		~LLL();
		//class methods
		void insert_character(Character & a_hero);

		//displays node matching the name, if no match, says none found
		void display(char * name); //wrapper
		void display(char * name, Node * head); //recursive

		//returns the number of nodes in this list
		int display_all(); // wrapper
		int display_all(Node * head); // recursive

		//returns true if name already exists, false otherwise
		bool find_character(char * name); //wrapper
		bool find_character(char * name, Node * head); //recursive

		//removes character with matching name, if no match, says none found
		void remove_character(char * name); //wrapper
		Node *& remove_character(char * name, Node *& head); //recursive
	
};
