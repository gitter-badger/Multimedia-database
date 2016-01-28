#ifndef IMAGEHANDLER_H
#define IMAGEHANDLER_H

#include <QMainWindow>
#include <QString>

class ImageHandler : public QMainWindow
{
    Q_OBJECT

public:
    ImageHandler();
    void loadFile(const QString&);

    QImage *m_image = 0;


private:


};

#endif // IMAGEHANDLER_H
