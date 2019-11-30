#ifndef HASHTABLE_H
#define HASHTABLE_H
#include "WordNode.hpp"
#include "WordList.hpp"
#include <string>
#define TAM_VECTOR 10000
namespace GalacticMessenger{
	class HashTable{
	public:
		HashTable();
		//Containers::WordNode* createVector(int tam);
		int hash(std::string &word);
		void insert(std::string word);
		Containers:WordNode* search(std::string word);
		void setCode(std::string word, std::string code);
		std::string getCode(std::string word);
		int getCount(std::string word);
		int getTamVector();
		~HashTable();
	private:
		Containers::WordList* hashTable[TAM_VECTOR];
		//int tamVector; 
	};
}
#endif