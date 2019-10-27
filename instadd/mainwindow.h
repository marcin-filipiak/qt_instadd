#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWebEngineView>
#include <QWebEngineProfile>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QWebEngineView *view2 = new QWebEngineView();
     void resizeEvent(QResizeEvent *event) override;
     explicit MainWindow(QWidget *parent = 0);
     ~MainWindow();

private slots:
    //void on_BackButton_clicked();
    //void on_GoButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
