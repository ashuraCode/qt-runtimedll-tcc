#ifndef ASHURADLL_H
#define ASHURADLL_H

#include <QMainWindow>

namespace Ui {
class AshuraDLL;
}

class AshuraDLL : public QMainWindow
{
    Q_OBJECT

public:
    explicit AshuraDLL(QWidget *parent = 0);
    ~AshuraDLL();

private slots:
    void on_qcompile_clicked();
    void on_qrun_clicked();
    void on_qbrowse_clicked();

private:
    Ui::AshuraDLL *ui;
};

#endif // ASHURADLL_H
