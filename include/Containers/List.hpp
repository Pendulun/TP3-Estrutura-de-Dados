#ifndef GENERICLIST_H
#define GENERICLIST_H
namespace Containers{
	template <class T> GenericList{
		public:
			List();
			virtual void insert(T* Node);
			void createEmptyList();
			T* getHead();
			T* getLast();
			~List();
		private:
			T* head,last;
	};
}

#endif