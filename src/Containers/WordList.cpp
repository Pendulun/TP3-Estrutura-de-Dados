#include "WordList.hpp"
#include "List.hpp"
#include "WordNode.hpp"

Containers::WordList:WordList(){
	Containers::List::List();
	this->size=0;
}

Containers::WordList::~WordList(){
	Containers::List::~List();
}

//Insert at the beggining
void Containers::WordList::insert(Containers::WordNode* node){
	node->setNext()=this->first->getNext();
	this->first->setNext()=node;
}

unsigned int Containers::WordList::getSize(){
	return this->size;
}

//Returns a pointer to the WordNode in the WordList with word attribute equals word parameter
// or nullptr if it do not exists
Containers::WordNode* Containers::WordNode::searchWord(std::string word){
	Containers::WordNode* searchNode=nullptr;
	searchNode = this->head->getNext();
	
	while(true){
		if(searchNode->getWord()==word){
			return searchNode;
		}else{
			searchNode=searchNode->getNext();
		}
		if(searchNode==nullptr){
			return nullptr;
		}
	}
}