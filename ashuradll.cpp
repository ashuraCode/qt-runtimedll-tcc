#include "ashuradll.h"
#include "ui_ashuradll.h"
#include <QFileDialog>
#include "conns/loadexecute.h"
#include "conns/tcccompile.h"


AshuraDLL::AshuraDLL(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AshuraDLL)
{
    ui->setupUi(this);
}

AshuraDLL::~AshuraDLL()
{
    delete ui;
}

void AshuraDLL::on_qcompile_clicked()
{
    if (QFile(ui->qfile_path->text()).exists()) {
        if (TccCompile::tcc_dll(ui->qfile_path->text().toStdString(), "tmp.dll"))
            ui->qstatus->setText("Compiled");
        else
            ui->qstatus->setText("Failed");
    }
}

void AshuraDLL::on_qrun_clicked()
{
    if (LoadExecute::run("tmp.dll", "hello_func"))
        ui->qrunstatus->setText("Launched");
    else
        ui->qrunstatus->setText("Failed");
}

void AshuraDLL::on_qbrowse_clicked()
{
    QString file = QFileDialog::getOpenFileName(NULL, "Choose file", ".", "Code (*.c *.cpp)");
    ui->qfile_path->setText(file);
}
