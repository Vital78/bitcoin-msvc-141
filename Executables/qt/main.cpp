#include "bitcoin_qt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	bitcoin_qt w;
	w.show();
	return a.exec();
}
