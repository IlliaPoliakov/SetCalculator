#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<vector>
#include<algorithm>
#include "Set.h"
#include "IntegerSet.h"
#include "StringSet.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_AddButton_clicked()
{
    if(ui->comboBox->currentText()=="No type"){
        QMessageBox::warning(this,"Проблемка", "Надо бы тип данных выбрать. В углу, слева.");
    }
    else if(ui->comboBox->currentText()=="Integer"){
        if (ui->lineEdit1->text() != "" || ui->lineEdit2->text() != ""){
            if(ui->lineEdit1->text() != ""){
                if(ui->lineEdit1->text().toInt(0,10)){
                    intSet1.int_set.push_back(ui->lineEdit1->text().toInt(0,10));
                    ui->Set1Output->append(ui->lineEdit1->text());
                }
                else {
                    QMessageBox::warning(this,"Проблемка", "Тип введённых данных не совпадает с выбранным.");
                }
            }
            if(ui->lineEdit2->text() != ""){
                if(ui->lineEdit2->text().toInt(0,10)){
                    intSet2.int_set.push_back(ui->lineEdit2->text().toInt(0,10));
                    ui->Set2Output->append(ui->lineEdit2->text());
                }
                else {
                    QMessageBox::warning(this,"Проблемка", "Тип введённых данных не совпадает с выбранным.");
                }
            }
        }
    }
    else{
        if (ui->lineEdit1->text() != "" || ui->lineEdit2->text() != ""){
            if(ui->lineEdit1->text() != ""){
                strSet1.string_set.push_back(ui->lineEdit1->text().toLocal8Bit().constData());
                ui->Set1Output->append(ui->lineEdit1->text());
            }
            if(ui->lineEdit2->text() != ""){
                strSet2.string_set.push_back(ui->lineEdit2->text().toLocal8Bit().constData());
                ui->Set2Output->append(ui->lineEdit2->text());
            }
        }
    }
}

void MainWindow::on_UnionButton_clicked()
{
    if(ui->comboBox->currentText()=="No type"){
        QMessageBox::warning(this,"Проблемка", "Надо бы тип данных выбрать. В углу, слева.");
    }
    else if(ui->comboBox->currentText()=="Integer"){
        if(!intSet1.int_set.empty() || !intSet2.int_set.empty()){
            Set* se = intSet1.uni(&intSet2);
            IntegerSet* output = dynamic_cast<IntegerSet*>(se);
            ui->Set3Output->clear();
            for(int i: output->int_set){
                ui->Set3Output->append(QString("%1").arg(i));
            }
        }
        else {
            QMessageBox::warning(this,"Проблемка", "Даные отсутствуют");
        }
    }
    else{
        if(!strSet1.string_set.empty() || !strSet2.string_set.empty()){
            Set* se = strSet1.uni(&strSet2);
            StringSet* output = dynamic_cast<StringSet*>(se);
            ui->Set3Output->clear();
            for(std::string i: output->string_set){
                ui->Set3Output->append(QString::fromLocal8Bit(i.c_str()));
            }
        }
        else {
            QMessageBox::warning(this,"Проблемка", "Даные отсутствуют");
        }
    }
}

void MainWindow::on_IntersectButton_clicked()
{
    if(ui->comboBox->currentText()=="No type"){
        QMessageBox::warning(this,"Проблемка", "Надо бы тип данных выбрать. В углу, слева.");
    }
    else if(ui->comboBox->currentText()=="Integer"){
        if(!intSet1.int_set.empty() || !intSet2.int_set.empty()){
            Set* se = intSet1.intersect(&intSet2);
            IntegerSet* output = dynamic_cast<IntegerSet*>(se);
            ui->Set3Output->clear();
            for(int i: output->int_set){
                ui->Set3Output->append(QString("%1").arg(i));
            }
        }
        else {
            QMessageBox::warning(this,"Проблемка", "Даные отсутствуют");
        }
    }
    else{
        if(!strSet1.string_set.empty() || !strSet2.string_set.empty()){
            Set* se = strSet1.intersect(&strSet2);
            StringSet* output = dynamic_cast<StringSet*>(se);
            ui->Set3Output->clear();
            for(std::string i: output->string_set){
                ui->Set3Output->append(QString::fromLocal8Bit(i.c_str()));
            }
        }
        else {
            QMessageBox::warning(this,"Проблемка", "Даные отсутствуют");
        }
    }
}

void MainWindow::on_SimSubButton_clicked()
{
    if(ui->comboBox->currentText()=="No type"){
        QMessageBox::warning(this,"Проблемка", "Надо бы тип данных выбрать. В углу, слева.");
    }
    else if(ui->comboBox->currentText()=="Integer"){
        if(!intSet1.int_set.empty() || !intSet2.int_set.empty()){
            Set* se = intSet1.sim_sub(&intSet2);
            IntegerSet* output = dynamic_cast<IntegerSet*>(se);
            ui->Set3Output->clear();
            for(int i: output->int_set){
                ui->Set3Output->append(QString("%1").arg(i));
            }
        }
        else {
            QMessageBox::warning(this,"Проблемка", "Даные отсутствуют");
        }
    }
    else {
        if(!strSet1.string_set.empty() || !strSet2.string_set.empty()){
            Set* se = strSet1.sim_sub(&strSet2);
            StringSet* output = dynamic_cast<StringSet*>(se);
            ui->Set3Output->clear();
            for(std::string i: output->string_set){
                ui->Set3Output->append(QString::fromLocal8Bit(i.c_str()));
            }
        }
        else {
            QMessageBox::warning(this,"Проблемка", "Даные отсутствуют");
        }
    }
}

void MainWindow::on_ClearSet1Button_clicked()
{
    if(ui->Set1Output->toPlainText() ==""){
        QMessageBox::warning(this,"Проблемка", "Поле и так пустое");
    }
    else{
        intSet1.int_set = {};
        strSet1.string_set = {};
        ui->Set1Output->clear();
    }
}

void MainWindow::on_ClearSet2Button_clicked()
{
    if(ui->Set2Output->toPlainText() ==""){
        QMessageBox::warning(this,"Проблемка", "Поле и так пустое");
    }
    else{
        intSet2.int_set = {};
        strSet2.string_set = {};
        ui->Set2Output->clear();
    }
}

void MainWindow::on_CleaeResaltButton_clicked()
{
    if(ui->Set3Output->toPlainText() ==""){
        QMessageBox::warning(this,"Проблемка", "Поле и так пустое");
    }
    else{
        ui->Set3Output->clear();
    }
}

void MainWindow::on_comboBox_activated(const QString &arg1)
{
    intSet1.int_set = {};
    strSet1.string_set = {};
    ui->Set1Output->clear();
    intSet2.int_set = {};
    strSet2.string_set = {};
    ui->Set2Output->clear();
    ui->Set3Output->clear();
}
