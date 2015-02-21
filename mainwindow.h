#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>
#include <QMainWindow>
#include <QMenuBar>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMenu>
#include <QLabel>
#include <QPixmap>
#include <QDockWidget>
#include <QPainter>
#include "dockl.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void create_menu(void);
    void create_docks(void);

private:
    QHBoxLayout* m_h_layout;
    QPainter* m_painter;
};

#endif // MAINWINDOW_H
