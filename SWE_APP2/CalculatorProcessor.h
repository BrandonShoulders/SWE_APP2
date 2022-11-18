#pragma once
#include "wx/wx.h"
#include <vector>
#include <cstring>
#include <math.h>
#include <stdio.h>
#include <stack>
#include <deque>

class CalculatorProcessor
{

	/*instance should always be private or protected*/
private:

	/*singleton instance of object*/
	static CalculatorProcessor* _calculatorProcessor;

	/*constructor*/
	CalculatorProcessor() {};

public:

	/*
	* Singleton Class(CalculatorProcessor) should not be cloneable
	*/
	CalculatorProcessor(CalculatorProcessor& other) = delete;

	/*
	* Singleton Class(CalculatorProcessor) should not be assignable
	*/
	CalculatorProcessor& operator= (CalculatorProcessor& other) = delete;

	/* Get instance Method*/
	static CalculatorProcessor* GetInstance();

	/*Function to find precedence*/
	int precedence(char operand);

	/*Function to perform calculations*/
	double calculate(int a, int b, char operand);

	/*Function to return value or expression*/
	double evaluate(std::string tokens);

	/*Function for trigonometry*/
	double sinfuntion(double degree);
	double tanfuntion(double degree);
	double cosfuntion(double degree);

	const double pi = 3.14;

};