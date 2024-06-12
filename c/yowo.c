#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define APP_NAME "Yowo"
#define MAX_PRODUCT_NAME 20

enum paymentMethods
{
    Cash,
    Card,
    Pix
};

struct product
{
    char name[MAX_PRODUCT_NAME];
    int price;
    int quantity;
    enum paymentMethods payment;
};

struct product products[9999];

int questInt(char *message)
{
    printf("%s", message);
    int value;
    if (scanf("%d", &value) != 1)
    {
        printf("Type an integer value\n");
        exit(1);
    }
    return value;
}

char *questString(char *message, int sizeOfResult)
{
    printf("%s", message);
    char value[sizeOfResult];
    scanf("%s", value);
    char *parsedValue = value;
    return parsedValue;
}

void clearConsole(char *messageAfterClear)
{
    printf("\033[H\033[J");
    if (strcmp(messageAfterClear, ""))
    {
        printf("%s\n", messageAfterClear);
    }
}

bool isEnableForAddProduct()
{
    int productOccupied = 0;
    int totalProductSlot = sizeof(products) / sizeof(products[0]);

    for (int i = 0; i < totalProductSlot; i++)
    {
        if (strcmp(products[i].name, ""))
        {
            productOccupied++;
        }
    }
    return totalProductSlot > productOccupied;
};

int getAvailableSlot()
{
    int totalProductSlot = sizeof(products) / sizeof(products[0]);

    for (int i = 0; i < totalProductSlot; i++)
    {
        if (!strcmp(products[i].name, ""))
        {
            return i;
        }
    }

    return -1;
};

void noSlotAvailable()
{
    printf("No available slot for new product\n");
    return;
}

void createProduct()
{
    clearConsole("");
    if (!isEnableForAddProduct())
    {
        return noSlotAvailable();
    }
    int availableSlot = getAvailableSlot();

    if (availableSlot == -1)
    {
        return noSlotAvailable();
    }

    struct product newProduct;

    char *productName = questString("Product name: ", MAX_PRODUCT_NAME);

    int productPrice = questInt("Product price: ");

    int productQuantity = questInt("Product quantity: ");

    int paymentMethod = questInt("Payment method (0 - Cash, 1 - Card, 2 - Pix): ");

    strncpy(newProduct.name, productName, sizeof(newProduct.name) - 1);
    newProduct.price = productPrice;
    newProduct.quantity = productQuantity;
    newProduct.payment = paymentMethod;

    products[availableSlot] = newProduct;

    clearConsole("\033[0;32mProduct created with success\n\033[0;37m");
};

typedef enum
{
    TYPE_STRUCT,
    TYPE_NULL
} resTypes;

typedef struct
{
    resTypes ValueType;
    int productIndex;
    union
    {
        struct product productResponse;
    }
} getProductResponse;

getProductResponse getProduct(char *name)
{
    int totalProductSlot = sizeof(products) / sizeof(products[0]);
    getProductResponse GetProductResponse;

    for (int i = 0; i < totalProductSlot; i++)
    {
        if (!strcmp(products[i].name, name))
        {
            GetProductResponse.ValueType = TYPE_STRUCT;
            GetProductResponse.productResponse = products[i];
            GetProductResponse.productIndex = i;
            return GetProductResponse;
        }
    }

    GetProductResponse.ValueType = TYPE_NULL;
    GetProductResponse.productIndex = -1;
    return GetProductResponse;
}

void deleteProduct(char *name)
{
    getProductResponse productData = getProduct(name);

    if (productData.ValueType == TYPE_NULL)
    {
        clearConsole("");
        printf("\033[0;31mProduct not found\n\n\033[0;37m");
        return;
    }

    products[productData.productIndex] = (struct product){};

    printf("\033[0;32mProduct deleted with success\n\n\033[0;37m");
};

void showProduct(struct product Product, bool hasAdditionalMessage, char *additionalMessage)
{
    if (hasAdditionalMessage)
    {
        printf("%s\n\n", additionalMessage);
    }
    clearConsole("");
    printf("\033[0;32mProduct name: %s\n", Product.name);
    printf("Product price: %d\n", Product.price);
    printf("Product quantity: %d\n", Product.quantity);
    printf("Payment method: %d\n\n\033[0;37m", Product.payment);
};

void lobby(char *appName)
{
    printf("Welcome to %s!!", appName);
    printf("\n\n0 - Exit\n1 - Register a new product\n2 - Show a product by name\n3 - Delete a product\n\n");
    int res = questInt("Choose an option: ");
    switch (res)
    {
    case 0:
        clearConsole("Goodbye!");
        exit(0);
        break;
    case 1:
        createProduct();
        break;

    case 2:
        clearConsole("");
        char *productName = questString("Product name: ", MAX_PRODUCT_NAME);
        getProductResponse productData = getProduct(productName);
        clearConsole("");
        if (productData.ValueType == TYPE_NULL)
        {
            printf("\033[0;31mProduct not found\n\n\033[0;37m");
            break;
        }
        showProduct(productData.productResponse, false, "");
        break;
    case 3:
        clearConsole("");
        deleteProduct(questString("Product name for delete: ", MAX_PRODUCT_NAME));
        break;
    default:
        clearConsole("\033[0;31mInvalid option\n\n\033[0;37m");
        break;
    }
}

int main()
{
    clearConsole("");
    while (true)
    {
        lobby(APP_NAME);
    }
    return 0;
}