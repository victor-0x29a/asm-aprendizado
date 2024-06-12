#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>

#define MAX_AUT_DOC 20
#define MAX_BILLING_ADDRESS 50

struct payment
{
    char aut_doc[MAX_AUT_DOC];
    char billing_address[MAX_BILLING_ADDRESS];
    float value;
};

char confirmedPayments[255][MAX_AUT_DOC];

struct payment GeneratePayment(int);
void ConfirmPayment(char[MAX_AUT_DOC]);
bool isAlreadyConfirmed(char[MAX_AUT_DOC]);

int main()
{
    struct payment paymentModel = GeneratePayment(100);

    assert(paymentModel.value == 100);

    bool isConfirmed = isAlreadyConfirmed(paymentModel.aut_doc);

    assert(isConfirmed == false);

    ConfirmPayment(paymentModel.aut_doc);

    isConfirmed = isAlreadyConfirmed(paymentModel.aut_doc);

    assert(isConfirmed == true);

    return 0;
}

struct payment GeneratePayment(int value)
{
    struct payment new_payment;

    new_payment.value = value;
    new_payment.aut_doc[0] = 'A';

    return new_payment;
}

bool isAlreadyConfirmed(char aut_doc[MAX_AUT_DOC])
{
    bool isFound = false;
    for (int i = 0; i < 255; i++)
    {
        if (strcpy(confirmedPayments[i], aut_doc) == 0)
        {
            isFound = true;
            break;
        }
    }

    return isFound;
}

void ConfirmPayment(char aut_doc[MAX_AUT_DOC])
{
    bool alreadyConfirmed = false;

    for (int i = 0; i < 255; i++)
    {
        if (strcmp(confirmedPayments[i], aut_doc) == 0)
        {
            alreadyConfirmed = true;
            break;
        }
    }

    bool isFilled = false;
    for (int i = 0; i < 255; i++)
    {
        if (!isFilled)
        {
            strcpy(confirmedPayments[i], aut_doc);
            isFilled = true;
        }
    }

    if (isFilled)
    {
        printf("Payment confirmed: %s\n", aut_doc);
    }
    else
    {
        printf("Payment already confirmed: %s\n", aut_doc);
    }
}
