//By: Jamie O'Roke
//
//Source code for LLL.h
//
#include "LLL.h"

LLL::LLL(){
	this->head = nullptr;
}
LLL::~LLL(){
	Node * curr = head;
	while(curr){
		Node * temp = curr->go_next();
		delete curr;
		curr = temp;
	}
}
//class methods
void LLL::insert_character(Character & a_hero){ 
	if(find_character(a_hero.display_just_name()) == true) 
		cout << a_hero.display_just_name() << " already exists." << endl;
	else{
		//pushing new_node onto stack (unordered)
		Node * new_node = new Node(a_hero);
		new_node->connect_next(head);
		head = new_node;
	}
}
void LLL::display(char * name){ //wrapper
	if(find_character(name) == false) cout << name << " not found." << endl;
	else{
		cout << "Found:" << endl;
	       	display(name, head);
	}
}
void LLL::display(char * name, Node * head){ //recursive
	if(head == nullptr) return;
	if(head->is_found(name) == true) head->display_me();
	display(name, head->go_next());
}
int LLL::display_all(){ //wrapper
	return display_all(head);
}
int LLL::display_all(Node * head){ //recursive
	if(this->head == nullptr) cout << "list is empty..." << endl;
	if(head == nullptr){
		cout << "--------------------" << endl;
	       	return 0;	
	}
	head->display_me();
	return 1 + display_all(head->go_next());
}
bool LLL::find_character(char * name){ //wrapper
	return find_character(name, head);
}
bool LLL::find_character(char * name, Node * head){ //recursive
	if(head == nullptr) return false;
	if(head->is_found(name) == true) return true;
	return find_character(name, head->go_next());
}
void LLL::remove_character(char * name){ //wrapper
	if(find_character(name) == false) cout << name << " not found." << endl;
	else head = remove_character(name, head);
}
Node *& LLL::remove_character(char * name, Node *& head){ //recursive
	if(head == nullptr) return head;
	if(head->is_found(name) == true){
		Node * temp = head;
		head = head->go_next();
		delete temp;
		return head;
	}
	head->connect_next(remove_character(name, head->go_next()));
	return head;
	//remove_character(name, head->go_next());
}
