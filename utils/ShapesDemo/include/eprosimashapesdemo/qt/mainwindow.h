/*************************************************************************
 * Copyright (c) 2014 eProsima. All rights reserved.
 *
 * This copy of eProsima RTPS ShapesDemo is licensed to you under the terms described in the
 * EPROSIMARTPS_LIBRARY_LICENSE file included in this distribution.
 *
 *************************************************************************/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "eprosimashapesdemo/shapesdemo/ShapesDemo.h"


namespace Ui {
class MainWindow;
}

class UpdateThread;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    ShapesDemo* getShapesDemo(){
        return &m_shapesDemo;
    }

    void updateDrawArea();

    void updateInterval(uint32_t ms);

private slots:
    void on_bt_publish_clicked();

    void on_push_Start_clicked();

    void on_push_Stop_clicked();

    void on_bt_subscribe_clicked();

    void on_actionPreferences_triggered();

private:
    Ui::MainWindow *ui;
    ShapesDemo m_shapesDemo;
    UpdateThread* mp_updateThread;
};

#endif // MAINWINDOW_H
