#ifndef COMMANDS_HPP
#define COMMANDS_HPP

#include "Figure.hpp"

using namespace bredyuk;

namespace commands
{
	int isInputNumber(const std::string& num);
	bool isRectangle(const Polygon& poly);
	void area(const std::vector<Polygon>& data);
	void min(const std::vector<Polygon>& data);
	void max(const std::vector<Polygon>& data);
	void count(const std::vector<Polygon>& data);
	void rects(const std::vector<Polygon>& data);
	void intersections(const std::vector<Polygon>& data);
}

#endif
