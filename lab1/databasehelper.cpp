#include "databasehelper.h"
#include<QMessageBox>
#include<QDir>
#include<QDebug>

DataBaseHelper::DataBaseHelper()
{
        db =  QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("Data.db");

        if(!db.open()) {
            QMessageBox::warning(nullptr, "Error open", db.lastError().text());
            return;
        }
}
QSqlQuery DataBaseHelper::exec(QString e){
    if(!db.isOpen())  {
        db =  QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("college.db");
    }
    if(!db.open()) {
        QMessageBox::warning(nullptr, "Error open", db.lastError().text());

    }

    return db.exec(e);
}
QSqlQuery* DataBaseHelper::getTable(QString where ){
    QSqlQuery*  query = new QSqlQuery( db);

    query->exec("SELECT * FROM TestTable WHERE " + where);

    return query;
}
