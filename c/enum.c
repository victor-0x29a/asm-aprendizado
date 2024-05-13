#include <assert.h>

int main()
{
    enum PaymentMethods
    {
        PIX = 1,
        PIX_POS // This is 2, now
    };

    int simulatedPaymentMethod = 2;
    assert(simulatedPaymentMethod == PIX_POS);
    assert(simulatedPaymentMethod != PIX);
    return 0;
}