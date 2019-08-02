#ifndef PM_H
#define PM_H

#include <QDialog>

namespace Ui {
class PM;
}

class PM : public QDialog
{
    Q_OBJECT

public:
    explicit PM(QWidget *parent = nullptr);
    ~PM();

private:
    Ui::PM *ui;
};

#endif // PM_H
