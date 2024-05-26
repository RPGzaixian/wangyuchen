#include "saving.h"
#include "ui_saving.h"
#include"widget.h"
Saving::Saving(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Saving)
{
    ui->setupUi(this);
}

Saving::~Saving()
{
    delete ui;
}

void Saving::on_pushButton_clicked()
{
    this->ret->show();
    this->close();
}

