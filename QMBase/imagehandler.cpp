#include "imagehandler.h"

ImageHandler::ImageHandler()
{

}

void ImageHandler::loadFile(const QString& fileName)
{
    delete m_image;
    m_image = new QImage(fileName);
}
