#include "helloqt.h"

HelloQT::HelloQT(QApplication * app, QWidget *parent)
    : QWidget{parent}
{
    setWindowTitle("HelloQT App");

    _spin = new QSpinBox;
    _slider = new QSlider(Qt::Horizontal);
    _spin->setRange(0,130);
    _slider->setRange(0,130);
    QObject::connect(_spin, SIGNAL(valueChanged(int)),
                     _slider, SLOT(setValue(int)));
    QObject::connect(_slider, SIGNAL(valueChanged(int)),
                     _spin, SLOT(setValue(int)));
    _spin->setValue(35);

    _label = new QLabel("<h2><i>Hello</i> <font color=red>QT!</font></h2>");

    _button = new QPushButton("&Quit");
    QObject::connect(_button, SIGNAL(clicked()),
                     app, SLOT(quit()));

    _hLayout = new QHBoxLayout;
    _hLayout->addWidget(_label);
    _hLayout->addWidget(_button);

    _vLayout = new QVBoxLayout;
    _vLayout->addWidget(_spin);
    _vLayout->addWidget(_slider);
    _vLayout->addLayout(_hLayout);

    setLayout(_vLayout);
}

