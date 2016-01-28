#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    imgH        (),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *_pEvent)
{
    if(QEvent::KeyPress == _pEvent->type())
    {
        switch(_pEvent->key())
        {
        case Qt::Key_Escape:
            this->close();
            break;
        }
    }
}

void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Open Image"), "/home", tr("Image Files (*.png *.jpg *.bmp *.ppm *.pbm)"));
    imgH.loadFile(fileName);
    QGraphicsScene* scene = new QGraphicsScene();
    QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(*imgH.m_image));
    scene->addItem(item);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->show();
}
