//By:jamie O'Roke
//
//Souce code for Node.h
#include "Node.h"

Node::Node(){
	next = nullptr;
	hero = nullptr;
}
//This constructor shows an example of an initialization list. 
//It is using Character's copy constructor
Node::Node(Character & a_hero){
	next = nullptr;
	hero = new Character(a_hero);
}
Node::~Node(){
	delete hero;
}
Node *& Node::go_next(){
	return this->next;
}
void Node::connect_next(Node *& new_next){
	this->next = new_next;
}
//Wrapper function to kickstart the Character is_found function
bool Node::is_found(char * name){
	return hero->is_found(name);
}
//Wrapper function to kickstart the Character display_me function
void Node::display_me(){
	hero->display_me();
}
void Node::display_just_name(){
	hero->display_just_name();
}
