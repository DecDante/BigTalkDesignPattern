#ifndef WIDGET_H
#define WIDGET_H

#if _MSC_VER >= 1600 //对应的VS版本至少为VS2010
#pragma execution_character_set("utf-8")
#endif

#include <QWidget>
#include <vector>

class Animal;

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
  void OnCatShoutButtonClicked();
  void OnDogShoutButtonClicked();
  void OnSignButttonClicked();
  void OnRaceButttonClicked();
  void OnChangeButtonClicked();

private:
  Ui::Widget *m_pUi;

  std::vector<Animal*> m_vArrayAnimal;
};

#endif // WIDGET_H
