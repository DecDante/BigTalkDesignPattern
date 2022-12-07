#include "widget.h"
#include "ui_widget.h"

// debug
#include <iostream>

#include <QMessageBox>
#include <QString>

#include "Animal.h"
#include "IChange.h"

#include "Cat.h"
#include "Dog.h"
#include "Cattle.h"
#include "Sheep.h"
#include "MachineCat.h"
#include "StoneMonkey.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    m_pUi(new Ui::Widget)
{
  m_pUi->setupUi(this);

  this->setWindowTitle("AnimalsSport");
  this->setMinimumSize(1024, 960);

  connect(m_pUi->catShoutButton, SIGNAL(clicked()), this, SLOT(OnCatShoutButtonClicked()));
  connect(m_pUi->dogShoutButton, SIGNAL(clicked()), this, SLOT(OnDogShoutButtonClicked()));
  connect(m_pUi->signButton, SIGNAL(clicked()), this, SLOT(OnSignButttonClicked()));
  connect(m_pUi->raceButton, SIGNAL(clicked()), this, SLOT(OnRaceButttonClicked()));
  connect(m_pUi->changeButton, SIGNAL(clicked()), this, SLOT(OnChangeButtonClicked()));
}

Widget::~Widget()
{
  delete m_pUi;

  if (!m_vArrayAnimal.empty())
  {
    for (std::vector<Animal*>::iterator it = m_vArrayAnimal.begin(); it != m_vArrayAnimal.end(); ++it)
      delete *it;
  }
  m_vArrayAnimal.clear();
}

void Widget::OnCatShoutButtonClicked()
{
  // std::cout << "debug" << std::endl;

  Cat cat("����");
  cat.SetShoutNum(5);
  QMessageBox shoutBox;
  shoutBox.setWindowTitle(" ");
  shoutBox.setText(cat.Shout());
  shoutBox.exec();
}

void Widget::OnDogShoutButtonClicked()
{
  // std::cout << "debug" << std::endl;

  Dog dog("����");
  dog.SetShoutNum(5);
  QMessageBox shoutBox;
  shoutBox.setWindowTitle(" ");
  shoutBox.setText(dog.Shout());
  shoutBox.exec();
}

void Widget::OnSignButttonClicked()
{
  if (!m_vArrayAnimal.empty())
    return;

  m_vArrayAnimal.push_back(new Cat("С��"));
  m_vArrayAnimal.push_back(new Dog("��ë"));
  m_vArrayAnimal.push_back(new Cattle("С��"));
  m_vArrayAnimal.push_back(new Sheep("����"));

  m_vArrayAnimal.erase(m_vArrayAnimal.begin() + 1);
  m_vArrayAnimal.erase(m_vArrayAnimal.begin() + 1);
}

void Widget::OnRaceButttonClicked()
{
  for (std::vector<Animal*>::iterator it = m_vArrayAnimal.begin(); it != m_vArrayAnimal.end(); ++it)
  {
    QMessageBox shoutBox;
    shoutBox.setWindowTitle(" ");
    shoutBox.setText((*it)->Shout());
    shoutBox.exec();
  }
}

void Widget::OnChangeButtonClicked()
{
  MachineCat mcat("����");
  StoneMonkey wukong("�����");

  std::vector<IChange*> arrayChange;
  arrayChange.push_back(&mcat);
  arrayChange.push_back(&wukong);

  QMessageBox changeBox;
  changeBox.setWindowTitle(" ");
  changeBox.setText((arrayChange[0]->ChangeThing("���ָ����Ķ�����")));
  changeBox.exec();

  changeBox.setWindowTitle(" ");
  changeBox.setText((arrayChange[1]->ChangeThing("���ָ����Ķ�����")));
  changeBox.exec();  
}