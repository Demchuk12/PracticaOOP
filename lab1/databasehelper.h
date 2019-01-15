#ifndef DATABASEHELPER_H
#define DATABASEHELPER_H
#define DatabasePath "Data.db"
#include<QtSql>


static class DataBaseHelper
{
    void check(QSqlQuery*);
public:
    enum class ColumnsOfTable {ID,name};
    QSqlDatabase db;
    DataBaseHelper();
    QSqlQuery exec(QString);
    QSqlQuery* getTable(QString WHERE = "1");
};

#endif // DATABASEHELPER_H
