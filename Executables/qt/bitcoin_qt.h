#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_bitcoin_qt.h"

class bitcoin_qt : public QMainWindow
{
	Q_OBJECT

public:
	bitcoin_qt(QWidget *parent = Q_NULLPTR);

private:
	Ui::bitcoin_qtClass ui;
};
