#ifndef MAINGUI_H
#define MAINGUI_H

#include "core.h"

#include <QMainWindow>

namespace Ui {
class MainGUI;
}

class MainGUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainGUI(Core *app_core, QWidget *parent = 0);
    ~MainGUI();

public slots:
    void updateLCDs(int generation, int step);
    void updateSeed(time_t seed);
    void updateConsole(QString message);

private slots:
    void on_startButton_clicked();
    void on_pauseButton_toggled(bool checked);

    void on_speedSlider_valueChanged(int value);

    void on_fitnessSlider_valueChanged(int value);

    void on_consonanceSlider_valueChanged(int value);

    void on_activitySlider_valueChanged(int value);

    void on_exportButton_toggled(bool checked);

private:
    void updateFitnessGUI(double consonance, double activity);

private:
    Ui::MainGUI *ui;
    Core *core;

};

#endif // MAINGUI_H
