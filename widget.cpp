#include "API.h"
#include "widget.h"
#include <Qpainter>


Widget::Widget(QWidget* parent) :QWidget(parent), ui(new Ui::Widget)
{
	ui->setupUi(this);
	timer = new QTimer(this);
	timer->setTimerType(Qt::PreciseTimer);
	connect(timer, SIGNAL(timeout()), this, SLOT(update()));
	connect(timer, SIGNAL(timeout()), this, SLOT(Timing()));
	connect(ui->StartButton, SIGNAL(clicked()), this, SLOT(Start()));
	connect(ui->InitializeButton, SIGNAL(clicked()), this, SLOT(Initialize()));
	connect(ui->StopButton, SIGNAL(clicked()), this, SLOT(Stop()));
	connect(ui->ContinueButton, SIGNAL(clicked()), this, SLOT(Continue()));
	//connect(ui->P0Selected, SIGNAL(clicked()), this, SLOT(Switch(0)));
	//connect(ui->P1Selected, SIGNAL(clicked()), this, SLOT(Switch(1)));
}

void Widget::setText()
{
	char* curTime=new char[50]; itoa(Time, curTime, 10); curTime = strcat(curTime, "s");
	ui->time->setText(QApplication::translate("Widget",curTime , nullptr));
}

void Widget::setInitial()
{
	if (ui->P0Selected->isChecked())
	{
		Player[0].X = ui->PosX->text().toDouble();
		Player[0].Y = ui->PosY->text().toDouble();
		Player[0].Radian = ui->Degree->text().toDouble() / 180 * Pi;
	}
	else if (ui->P1Selected->isChecked())
	{
		Player[1].X = ui->PosX->text().toDouble();
		Player[1].Y = ui->PosY->text().toDouble();
		Player[1].Radian = ui->Degree->text().toDouble() / 180 * Pi;
	}
}

void Widget::drawPlayer(QPainter& painter,int num)
{
	painter.resetTransform();
	painter.translate(Player[num].X, Player[num].Y);
	painter.rotate(Player[num].Radian * 180 / Pi);   //使用角度旋转
	QPen pen(Qt::blue, 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
	if (num == 1) pen.setColor(Qt::red);
	painter.setPen(pen);
	painter.drawRect(-20, -25, 50, 40);
	painter.resetTransform();
}

Widget::~Widget()
{
    delete ui;
}


void Widget::paintEvent(QPaintEvent* event)
{
	this->setText();
	Movement myMovement;
	myMovement.Move(10, 0);
	QPainter painter(this);
	QRectF rectangle(0, 0, 898, 900);
	QBrush brush(Qt::green, Qt::Dense4Pattern);
	brush.setTexture(QPixmap("C:/Users/hukz1/Documents/map.png"));
	painter.setBrush(brush);
	painter.drawRect(rectangle);
	painter.setBrush(QBrush());
	drawPlayer(painter, 0); drawPlayer(painter, 1);
}
