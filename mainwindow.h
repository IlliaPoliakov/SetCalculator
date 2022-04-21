#pragma once
#include "IntegerSet.h"
#include "StringSet.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_AddButton_clicked();

    void on_UnionButton_clicked();

    void on_IntersectButton_clicked();

    void on_SimSubButton_clicked();

    void on_ClearSet1Button_clicked();

    void on_ClearSet2Button_clicked();

    void on_CleaeResaltButton_clicked();

    void on_comboBox_activated(const QString &arg1);

private:
    IntegerSet intSet1;
    StringSet strSet1;
    IntegerSet intSet2;
    StringSet strSet2;
    Ui::MainWindow *ui;
};
