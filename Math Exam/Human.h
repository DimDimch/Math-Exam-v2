#pragma once
#include "QuadricEquation.h"

class Human {
public:
	Human(string _name) : name(_name) {}
	virtual void SolveEquations(const vector<QuadricEquation>& tasks, list<Solution>& ans) = 0;
protected:
	string name;
};