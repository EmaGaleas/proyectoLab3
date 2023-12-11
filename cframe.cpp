#include "cframe.h"
#include "./ui_cframe.h"
#include <QImage>
#include <QPixmap>
#include <QLabel>

cframe::cframe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cframe)
{

    ui->setupUi(this);

//    QImage info(":/3.png");
//    QImage menu(":/0.png");
//    ui->lbl_info->setPixmap(QPixmap::fromImage(info));
//    ui->lbl_menu->setPixmap(QPixmap::fromImage(menu));

}

cframe::~cframe()
{
    delete ui;
}

