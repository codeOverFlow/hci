#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    /*create_menu();
    create_docks();
    m_h_layout = new QHBoxLayout();
    QLabel* l = new QLabel();
    QPixmap* p = new QPixmap(200,200);
    p->fill();
    m_painter = new QPainter(p);
    m_painter->setBackground(QBrush(Qt::white));
    m_painter->setPen(QPen(Qt::black, 1));
    m_painter->drawLine(0,0,200,200);
    m_painter->end();
    l->setPixmap(*p);*/
    DockL* dl = new DockL();
    setCentralWidget(dl);

}

MainWindow::~MainWindow()
{

}

void MainWindow::create_menu(void) {
    QMenu* menu_fichier = menuBar()->addMenu("&Fichier");
    QAction* nouveau = new QAction("&Nouveau", this);
    //connect(nouveau, SIGNAL(triggered()), this, SLOT(close()));
    QAction* ouvrir = new QAction("&Ouvrir", this);
    //connect(nouveau, SIGNAL(triggered()), this, SLOT(close()));
    QAction* exporter = new QAction("&Exporter", this);
    //connect(nouveau, SIGNAL(triggered()), this, SLOT(close()));
    QAction* quitter = new QAction("&Quitter", this);
    connect(quitter, SIGNAL(triggered()), qApp, SLOT(quit()));

    menu_fichier->addAction(nouveau);
    menu_fichier->addAction(ouvrir);
    menu_fichier->addAction(exporter);
    menu_fichier->addAction(quitter);
}

void MainWindow::create_docks(void) {
    /*ColorPickerWidget* picker = new ColorPickerWidget();
    picker->setMinimumSize(150,100);
    picker->setMaximumSize(200,150);*/

    DockL* dl = new DockL();

    QDockWidget* color = new QDockWidget("outils");
    color->setAllowedAreas(Qt::LeftDockWidgetArea);
    color->setWidget(dl);
    addDockWidget(Qt::LeftDockWidgetArea, color);
    addAction(color->toggleViewAction());
}
