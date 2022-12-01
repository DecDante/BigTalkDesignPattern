#ifndef WIDGET_H
#define WIDGET_H

#if _MSC_VER >= 1600 //��Ӧ��VS�汾����ΪVS2010
#pragma execution_character_set("utf-8")
#endif

#include <QWidget>

class QStandardItemModel;

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
  Q_OBJECT

public:
  explicit Widget(QWidget *parent = 0);
  ~Widget();

protected slots:
  void OnConfirmButtonClicked();
  void OnResetButtonClicked();

private:
   Ui::Widget *ui;
   double m_TotalPrice;
};

#endif // WIDGET_H
