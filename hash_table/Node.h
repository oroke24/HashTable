//By:jamie O'Roke
//
//Node class contains a Character and a next pointer, 
//also has constructor, getter, and setter

#include "Character.h"

class Node{
	private:
		Character * hero;
		Node * next;
	public:
		Node();
		Node(Character & a_hero);
		~Node();
		Node *& go_next();
		void connect_next(Node *& new_next);
		bool is_found(char * name);
		void display_me();
		void display_just_name();
};
