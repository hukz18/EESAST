#pragma once
#include <vector>
#include <QWidget>
#include <qtimer.h>
#define Pi 3.1415926
#define APIrefresh 100.0
struct Status
{
	double X;
	double Y;
	double Radian;
};

struct goods
{
	double X;
	double Y;
	double value;
};
extern double Time;
extern Status Player[2];
extern std::vector<goods> Goods;


class Movement
{
public:
	void Move(double speed,int playerNum);
	void Rotate(double Degree,int playerNum);

};



