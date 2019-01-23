#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtNetwork/QNetworkAccessManager>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    // Обработчик данных полученных от объекта QNetworkAccessManager
    void onResult(QNetworkReply *reply);

private:
    Ui::Widget *ui;
    QNetworkAccessManager *networkManager;
};

#endif // WIDGET_H
