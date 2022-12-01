#include "widget.h"
#include "ui_widget.h"

#include <iostream>

#include <QComboBox>
#include <QDoubleSpinBox>
#include <QSpinBox>
#include <QListWidget>
#include <QLabel>

#include "CashContext.h"

Widget::Widget(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::Widget),
  m_TotalPrice(0)
{
    ui->setupUi(this);

    ui->comboBox->addItem("正常收费");
    ui->comboBox->addItem("满300返100");
    ui->comboBox->addItem("打8折");

    connect(ui->confirmButton, SIGNAL(clicked()), this, SLOT(OnConfirmButtonClicked()));
    connect(ui->resetButton, SIGNAL(clicked()), this, SLOT(OnResetButtonClicked()));
}

void Widget::OnConfirmButtonClicked()
{
  double price = ui->priceSpinBox->value();
  double number = ui->numberSpinBox->value();

  QString strategy = ui->comboBox->currentText();
  CashContext cash_context(strategy);

  double result = cash_context.GetResult(price * number);
  m_TotalPrice += result;

  QString current_row;
  current_row.append("单件：").append(QString::number(price)).append(" 数量：").append(QString::number(number))
    .append(" ").append(ui->comboBox->currentText()).append(" 合计：").append(QString::number(result));

  ui->listWidget->addItem(current_row);

  ui->resultLabel->setText(QString::number(m_TotalPrice));
}

void Widget::OnResetButtonClicked()
{
  ui->priceSpinBox->setValue(0);
  ui->numberSpinBox->setValue(0);

  ui->comboBox->setCurrentIndex(0);
  ui->listWidget->clear();

  ui->resultLabel->setText("0.00");
}

Widget::~Widget()
{
    delete ui;
}
