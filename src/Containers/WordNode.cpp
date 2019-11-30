#include "WordNode.hpp"
#include "Node.hpp"

Containers::WordNode::WordNode(){
	Containers::Node::Node();
	this->code="";
	this->next=nullptr;
}

void Containers::WordNode::setCode(std::string newCode){
	this->code=newCode;
}

void Containers::WordNode::setNext(Containers::WordNode::WordNode* next){
	this->next=next;
}

std::string Containers::WordNode::getCode(){
	return this->code;
}

Containers::WordNode::WordNode* Containers::WordNode::getNext(){
	return this->next;
}