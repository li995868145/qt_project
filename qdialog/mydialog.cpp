#include "mydialog.h"
#include <QtGui>

MyDialog::MyDialog(QWidget *parent)
	:QDialog(parent)
{
	labelID = new QLabel("学号：");
	lineEditID = new QLineEdit;
	labelName = new QLabel("姓名：");
	lineEditName = new QLineEdit;
	labelAge = new QLabel("性别：");
	lineEditAge = new QLineEdit;
	
	QGridLayout *grid = new QGridLayout();
	grid->addWidget(labelID,0,0,1,1);
	grid->addWidget(lineEditID,0,1,1,3);
	grid->addWidget(labelName,1,0,1,1);
	grid->addWidget(lineEditName,1,1,1,3);
	grid->addWidget(labelAge,2,0,1,1);
	grid->addWidget(lineEditAge,2,1,1,3);
	printf("error2\n");

	QPushButton *okButton = new QPushButton("确定");
	QPushButton *resetButton = new QPushButton("重置");
	QPushButton *cancleButton = new QPushButton("取消");
	QHBoxLayout *btnLayout = new QHBoxLayout;
	btnLayout->addWidget(okButton);
	btnLayout->addWidget(resetButton);
	btnLayout->addWidget(cancleButton);

	QVBoxLayout *layout = new QVBoxLayout(this);
	layout->addLayout(grid);
	layout->addLayout(btnLayout);
	layout->setMargin(40);
	layout->setSpacing(20);
	
	connect(okButton,SIGNAL(clicked()),this,SLOT(slotEnsure));
	connect(resetButton,SIGNAL(clicked()),this,SLOT(slotReset()));
	connect(cancleButton,SIGNAL(clicked()),this,SLOT(close()));
}

void MyDialog::slotEnsure()
{

}

void MyDialog::slotReset()
{
	lineEditID->clear();
	lineEditName->clear();
	lineEditAge->clear();
}
