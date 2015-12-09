#include <QApplication>
#include "builtindialog.h"
#include <QTextCodec>
int main(int argc, char *argv[])
{
	QApplication app(argc,argv);
	QTextCodec::setCodecForTr(QTextCodec::codecForName("GB2312"));
        QTextCodec::setCodecForLocale(QTextCodec::codecForName("GB2312"));
        QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GB2312"));
        QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));

	BuiltInDialog myDialog;
	myDialog.show();
	return app.exec();
}
