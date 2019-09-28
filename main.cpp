#include "API.h"
#include "widget.h"
#include <QApplication>

double Time = 0;
std::vector<goods> Goods;
Status Player[2] = { {840,55,3.1415926 / 2},{65,850,0} };

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
    Widget w;
    w.show();
	
    return a.exec();
}
