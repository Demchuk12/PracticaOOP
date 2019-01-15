#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QSqlTableModel>
#include<databasehelper.h>

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    DataBaseHelper  *db;
    QSqlTableModel  *model;
    void setupModel(const QString &tableName, const QStringList &headers);
};

#endif // MAINWINDOW_H
