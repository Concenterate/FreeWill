#include <QtTest/QtTest>

class FreeWillUnitTest : public QObject
{
	Q_OBJECT

private slots:
    void blobTest();
    void tensorTest();
    void operatorTest();
    void operatorSigmoidTest();
    void operatorSigmoidDerivativeTest();
    void operatorSigmoidCrossEntropyTest();
    void operatorSigmoidCrossEntropyDerivativeTest();
    void operatorDotProductWithBiasTest();
};