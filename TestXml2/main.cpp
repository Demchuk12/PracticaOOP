#include <QCoreApplication>
#include<QXmlStreamWriter>
#include<QXmlStreamReader>
#include<QFile>
#include<QString>
#include<iostream>
#include<QIODevice>
using namespace std;

class Man{
    int age;
    QString name;
    bool lex;
public:
    Man(QString name){
        QFile* file = new QFile(name);
        if(!file->open(QIODevice::ReadOnly | QIODevice::Text)){
            cout<<"error"<<endl;
            return;
        }
        QXmlStreamWriter xml(file);
        xml.setAutoFormatting(true);
        xml.writeStartDocument();
        xml.writeStartElement("etap");
        xml.writeStartElement("first");
        xml.writeCharacters(QString().number(age));
        xml.writeEndElement();
        xml.writeStartElement("second");
        xml.writeCharacters(name);
        xml.writeEndElement();
        xml.writeStartElement("third");
        xml.writeCharacters(QString().number(lex));
        xml.writeEndElement();
        xml.writeEndElement();
        xml.writeEndDocument();
        file->close();


    }

};
int main(int argc, char *argv[]){

    QCoreApplication a(argc, argv);

    return a.exec();
}
