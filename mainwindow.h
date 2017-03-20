#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>
#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0, QApplication* a = NULL);
    ~MainWindow();
    
private slots:
    void on_capture_clicked();

    void on_switch_2_clicked();

    void on_pip_clicked();

    void on_exit_clicked();

private:
    QPlatformNativeInterface *platInf;
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
