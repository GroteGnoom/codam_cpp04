#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
	public:
		Brain();
		virtual ~Brain();
		Brain(const Brain& brain);
		Brain &operator=(const Brain& brain);
		void setIdea(int index, std::string idea);
		std::string getIdea(int index);
	private:
		std::string ideas[100];
};

#endif
