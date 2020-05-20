#pragma once
#include<iostream>
#include <vector>
#include <math.h>
#include <ctime>

typedef std::vector<std::vector<double>> matrix;

class Matrix
{
private:
	matrix Matr;
	bool WithinBorders(unsigned IndexRow, unsigned IndexCol) const;
public:
	
	Matrix();
	~Matrix();
	Matrix(unsigned Row, unsigned Col);

	enum ERRORS
	{
		IndexOutsideMatrix = 1, 
		MatricesNotEqual = 2, 
		LineNotEqualColoumn = 3, 
		DivByZero = 4, 
		OffLineIndex = 5, 
		NotRectMatrix = 6, 
		NotSquareMatric = 7, 
		DeterminateIsZero = 8, 
		OddElementsMatrix = 9 
	};

	matrix GetMatrix();
	void SetMatrix(matrix Matr1);
	void Set(std::vector<std::vector<float>>& matr);

	
	double GetElement(unsigned n, unsigned m);
	void SetElement(unsigned n, unsigned m, double Value);
	void Inverse();
	bool RepeatUsedLine(const std::vector<double>& ArrayIndexLine, unsigned IndexLine);
	
	std::vector<double> LineDivNumber(const std::vector<double>& Line, double Number);
	
	std::vector<double> SubLine(const std::vector<double>& Line1, const std::vector<double>& Line2, unsigned Index);

	bool SquareMatrix(const matrix& Matr1) const;
	void Unit(matrix& Matr1);
	double Detr(const matrix& M) const;
	double Detr() const;
	double Detr(const matrix& M, unsigned Row, unsigned Col) const;
	bool RectMatrix(const matrix& Matr1) const;

};
