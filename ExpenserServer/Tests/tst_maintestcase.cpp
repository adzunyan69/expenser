#include <QtTest>

// add necessary includes here

class MainTestCase : public QObject
{
    Q_OBJECT

public:
    MainTestCase();
    ~MainTestCase();

private slots:
    void test_case1();

};

MainTestCase::MainTestCase()
{

}

MainTestCase::~MainTestCase()
{

}

void MainTestCase::test_case1()
{

}

QTEST_APPLESS_MAIN(MainTestCase)

#include "tst_maintestcase.moc"
