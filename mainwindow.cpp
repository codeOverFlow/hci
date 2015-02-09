#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    create_menu();
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
