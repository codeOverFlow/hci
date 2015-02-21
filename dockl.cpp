#include "dockl.h"

DockL::DockL(QWidget *parent) :
    QWidget(parent)
{
    QHBoxLayout* t_layout = new QHBoxLayout();
    QPushButton* b1 = new QPushButton("b1");
    QPushButton* b2 = new QPushButton("b2");
    QPushButton* b3 = new QPushButton("b3");
    t_layout->addWidget(b1);
    t_layout->addWidget(b2);
    t_layout->addWidget(b3);

    QHBoxLayout* s_layout = new QHBoxLayout();
    QSlider* sl = new QSlider();
    sl->setRange(1,20);
    sl->setOrientation(Qt::Horizontal);

    QLabel* s_lab = new QLabel();
    connect(sl, SIGNAL(valueChanged(int)), s_lab, SLOT(setNum(int)));
    s_layout->addWidget(sl);
    s_layout->addWidget(s_lab);



    QVBoxLayout* g_layout = new QVBoxLayout(this);
    g_layout->addLayout(t_layout);
    g_layout->addLayout(s_layout);
}
