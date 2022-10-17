#ifndef HELLOQT_H
#define HELLOQT_H

#include <QApplication>
#include <QtWidgets>

class HelloQT : public QWidget
{
        Q_OBJECT
    public:
        explicit HelloQT(QApplication * app, QWidget *parent = nullptr);

    signals:

    private:
        QSpinBox * _spin;
        QSlider * _slider;
        QLabel * _label;
        QPushButton * _button;
        QHBoxLayout * _hLayout;
        QVBoxLayout * _vLayout;

};

#endif // HELLOQT_H
