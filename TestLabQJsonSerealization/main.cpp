#include <QCoreApplication>
#include<QByteArray>
#include<QFile>
#include<QJsonObject>
#include<QJsonDocument>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QJsonObject ingredient;
    ingredient["name"] = QString("testName");
    ingredient["date"] = QString("testDate");

    QJsonDocument doc(ingredient);
    QByteArray bytes = doc.toJson();

  /*  QFile file("TestJson.json");
    file.open(QIODevice::ReadOnly);
    QByteArray rawData = file.readAll();

    // Parse document
    QJsonDocument doc(QJsonDocument::fromJson(rawData));

    // Get JSON object
    QJsonObject json = doc.object();
*/
    return a.exec();
}
