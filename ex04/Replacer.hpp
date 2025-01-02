#ifndef FILEREPLACER_HPP
#define FILEREPLACER_HPP

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <stdexcept>

class Replacer {

	private:
		std::string filename;
		std::string s1;
		std::string s2;
		std::string readFile() const;
		void writeFile(const std::string &content) const;
		std::string replace(const std::string &content) const;
	public:
		Replacer(const std::string &filename, const std::string &s1, const std::string &s2);
		void process() const;
};

#endif
