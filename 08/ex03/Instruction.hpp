#pragma once
#include <array>
#include "Mindopen.hpp"

class Mindopen::Instruction
{
public:
	Instruction();
	virtual ~Instruction();
	Instruction(const Instruction& dec);
	Instruction & operator = (const Instruction& dec);
	virtual void execute(std::string::iterator &it, std::vector<Instruction*>::iterator &itIn) = 0;
protected:
	std::vector<Instruction>::iterator loopstart;
};
