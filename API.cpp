#include "API.h"
using namespace std;


void Movement::Move(double speed, int Num)
{
	//connect(&myTime, SIGNAL(timeout()), this, SLOT(moveSLOT(speed,playerNum)));
	Player[Num].X += speed * cos(Player[Num].Radian) * APIrefresh / 1000;
	Player[Num].Y += speed * sin(Player[Num].Radian) * APIrefresh / 1000;
}

void Movement::Rotate(double Degree, int Num)
{
	Player[Num].Radian += Degree / 180 * Pi;
	if (Player[Num].Radian > Pi) Player[Num].Radian -= Pi;
}
