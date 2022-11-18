#include "CalculatorProcessor.h"
#include <stack>
#include <deque>

CalculatorProcessor* CalculatorProcessor::_calculatorProcessor = nullptr;

CalculatorProcessor* CalculatorProcessor::GetInstance() {
	if (_calculatorProcessor == nullptr)
	{
		_calculatorProcessor = new CalculatorProcessor();
	}
	return _calculatorProcessor;
}
int CalculatorProcessor::precedence(char operand)
{
	if (operand == '(-)')
	{
		return 3;
	}
	if (operand == '*' || operand == '/' || operand == '%')
	{
		return 2;
	}
	if (operand == '+' || operand == '-')
	{
		return 1;
	}
	else {
		return 0;
	}
}
double CalculatorProcessor::calculate(int a, int b, char operand) {

	switch (operand)
	{
	case '+': return (double)a + b;
	case '-': return (double)a - b;
	case '*': return (double)a * b;
	case '/': return (double)a / b;
	case '%': return a % b;
	}
}

double CalculatorProcessor::evaluate(std::string tokens) {


	/* stack LIFO last in first out order*/
	std::stack<char> operators;
	/* deque FIFO first in first out order*/
	std::deque<int> value;

	for (unsigned int i = 0; i < tokens.length(); i++) {


		//if current token is whitespace skip
		if (tokens[i] == ' ')
		{
			continue;
		}
		/*if currrent token is open brace parenthesis push to the stack*/
		else if (tokens[i] == '(')
		{
			operators.push(tokens[i]);
		}
		/*if current token is a number, push to deque*/
		if (isdigit(tokens[i]))
		{
			int val = 0;

			/*May have more than one digit in the number*/
			while (i < tokens.length() && isdigit(tokens[i]))
			{
				val = (val * 10) + (tokens[i] - '0');
				i++;
			}
			value.push_back(val);

			/*at this point i points to the next char in line so it skips one char.
			*Since we increment i during the loop we need to decrement by 1 to correct offset
			*/
			i--;
		}
		//Close brace encountered, solve entire brace.
		else if (tokens[i] == ')')
		{
			while (!operators.empty() && operators.top() != '(')
			{
				int num2 = value.front();
				value.pop_front();

				int num1 = value.front();
				value.pop_front();

				char operands = operators.top();
				operators.pop();

				value.push_back(calculate(num1, num2, operands));
			}
			if (!operators.empty())
			{
				operators.pop();
			}
		}
		/*if current token is an operator*/
		else
		{
			while (!operators.empty() && precedence(operators.top()) >= precedence(tokens[i]))
			{
				int val2 = value.front();
				value.pop_front();

				int val1 = value.front();
				value.pop_front();

				char operands = operators.top();
				operators.pop();

				value.push_back(calculate(val1, val2, operands));

			}
			/*Push current token to stack*/
			operators.push(tokens[i]);
		}
		while (!operators.empty())
		{
			int val2 = value.front();
			value.pop_front();

			int val1 = value.front();
			value.pop_front();

			char op = operators.top();
			operators.pop();

			value.push_back(calculate(val1, val2, op));
		}

	}
	return (double)value.front();
}

double CalculatorProcessor::sinfuntion(double degree)
{
	double radians = degree * pi / 180;
	return sin(radians);
}
double CalculatorProcessor::tanfuntion(double degree)
{
	double radians = degree * pi / 180;

	return tan(radians);
}
double CalculatorProcessor::cosfuntion(double degree)
{
	double radians = degree * pi / 180;
	return cos(radians);
}