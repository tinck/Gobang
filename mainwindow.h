#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#define POINTS_WIDTH 15
#define POINTS_LENGTH 15
#define SCREEN_WIDTH 640
#define SCREEN_LENGTH 660
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void paintEvent(QPaintEvent *);
    void mouseReleaseEvent(QMouseEvent *);
private:
    Ui::MainWindow *ui;
    int layout[POINTS_WIDTH][POINTS_LENGTH];
    int player;
};

#endif // MAINWINDOW_H
