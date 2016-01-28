#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QImage>
#include <QKeyEvent>
#include "imagehandler.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionOpen_triggered();

private:
    void keyPressEvent(QKeyEvent *);
    Ui::MainWindow *ui;
    QImage *image;

    ImageHandler imgH;
};

#endif // MAINWINDOW_H
