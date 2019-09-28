#ifndef WIDGET_H
#define WIDGET_H
#include "API.h"
#include <QWidget>
#include <cstring>
#include "ui_widget.h"

using namespace std;
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
	void setText();
	void setInitial();
	void drawPlayer(QPainter &painter,int num);
    ~Widget();
public slots:
	void Start() { Initialize(); timer->start(APIrefresh); }
	void Initialize(){
		setInitial();
		Time = 0; timer->stop(); update();
	}
	void Stop() { timer->stop(); }
	void Continue() { timer->start(APIrefresh); }
	void Timing(){ Time += APIrefresh / 1000; }
	void Switch(int Num){
		if (!Num){
			ui->PosX->setText(QApplication::translate("Widget", "840", nullptr));
			ui->PosY->setText(QApplication::translate("Widget", "55", nullptr));
			ui->Degree->setText(QApplication::translate("Widget", "90", nullptr));
		}else { 
			ui->PosX->setText(QApplication::translate("Widget", "65", nullptr));
			ui->PosY->setText(QApplication::translate("Widget", "850", nullptr));
			ui->Degree->setText(QApplication::translate("Widget", "0", nullptr));
		}
	}
protected:
	void paintEvent(QPaintEvent* event);
private:
    Ui::Widget *ui;
	QTimer *timer;
	
};

#endif // WIDGET_H
