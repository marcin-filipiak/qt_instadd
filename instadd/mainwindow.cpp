#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QWebEngineView>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QWebEngineProfile *prof = QWebEngineProfile::defaultProfile();
    //750x1334
    prof->setHttpUserAgent("Mozilla/5.0 (iPhone; CPU iPhone OS 9_3_2 like Mac OS X) AppleWebKit/601.1.46 (KHTML, like Gecko) Mobile/13F69 Instagram 8.4.0 (iPhone7,2; iPhone OS 9_3_2; nb_NO; nb-NO; scale=2.00; 690x500");

    QString url = "https://instagram.com/";
    view2->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    this->ui->verticalLayout->addWidget(view2);
    view2->show();
    view2->load(QUrl(url));
}


//skalowanie okna
void MainWindow::resizeEvent(QResizeEvent *event){
   // QMainWindow::resizeEvent(event);
   // QRect rect = ui->centralWidget->geometry();
   // ui->verticalLayoutWidget->setGeometry(10, 50, (rect.width()-20), (rect.height()-20));

}


MainWindow::~MainWindow()
{
    delete ui;
}



/*
//klikniecie w back
void MainWindow::on_BackButton_clicked()
{
    view2->back();

}
*/

/*
//klik i przejscie do url
void MainWindow::on_GoButton_clicked()
{
    view2->load(ui->UrlEdit->text());

    QString html;
    view2->page()->toHtml([&html](const QString &result){ html = result; });

    ui->plainTextEdit->setPlainText(html);

}
*/

