#include <stdio.h>
#include <stdlib.h>

int main()
{
    char again;

    do
    {
        int chocolata = 1, candy = 2, potato = 3, pepsi = 4, cocacola = 5;
        int z = 5, x = 5, c = 5, v = 5, b = 5, element, pass, coins, ch, cho;
        int e1 = 5, e2 = 5, e3 = 5, e4 = 5, e5 = 5, add;

        printf(" owner=0 \n chocolata=1 \n candy=2 \n potato=3 \n pepsi=4 \n cocacola=5 \n ");
        printf("Enter what you want : ");
        scanf("%d", &ch);

        if (ch == 1)
        {
            if (e1 == 0)
            {
                printf("Your order is not exist now !!!");
            }
            else
            {
                printf("price of chocolata= %d coins \n", z);
                for (int i = 0; i < z; i++)
                {
                    printf("Enter coins %d: ", i + 1);
                    scanf("%d", &coins);
                }
                e1--;
            }
        }
        else if (ch == 2)
        {
            if (e2 == 0)
            {
                printf("Your order is not exist now !!!");
            }
            else
            {
                printf("price of candy= %d coins \n", x);
                for (int i = 0; i < x; i++)
                {
                    printf("Enter coins %d:", i + 1);
                    scanf("%d", &coins);
                }
                e2--;
            }
        }
        else if (ch == 3)
        {
            if (e3 == 0)
            {
                printf("Your order is not exist now !!!");
            }
            else
            {
                printf("price of potato= %d coins \n", c);
                for (int i = 0; i < c; i++)
                {
                    printf("Enter coins %d:", i + 1);
                    scanf("%d", &coins);
                }
                e3--;
            }
        }
        else if (ch == 4)
        {
            if (e4 == 0)
            {
                printf("Your order is not exist now !!!");
            }
            else
            {
                printf("price of pepsi= %d coins \n", v);
                for (int i = 0; i < v; i++)
                {
                    printf("Enter coins %d:", i + 1);
                    scanf("%d", &coins);
                }
                e4--;
            }
        }
        else if (ch == 5)
        {
            if (e5 == 0)
            {
                printf("Your order is not exist now !!!");
            }
            else
            {
                printf("price of cocacola= %d coins \n", b);
                for (int i = 0; i < b; i++)
                {
                    printf("Enter coins %d:", i + 1);
                    scanf("%d", &coins);
                }
                e5--;
            }
        }
        else if (ch == 0) // owner
        {
            printf("Enter password : ");
            scanf("%d", &pass);

            if (pass == 3345)
            {
                printf("Enter what you want add :");
                scanf("%d", &cho);
                switch (cho)
                {
                case 1:
                    printf("Enter chocolata : ");
                    scanf("%d", &add);
                    e1 += add;
                    break;

                case 2:
                    printf("Enter candy : ");
                    scanf("%d", &add);
                    e2 += add;
                    break;

                case 3:
                    printf("Enter potato : ");
                    scanf("%d", &add);
                    e3 += add;
                    break;

                case 4:
                    printf("Enter pepsi : ");
                    scanf("%d", &add);
                    e4 += add;
                    break;

                case 5:
                    printf("Enter cocacola : ");
                    scanf("%d", &add);
                    e5 += add;
                    break;

                default:
                    printf("try again");
                }
            }
            else if (pass == 7777) // change price
            {
                printf("Enter new price of element : ");
                scanf("%d", &element);
                switch (element)
                {
                case 1:
                    printf("Enter new price : ");
                    scanf("%d", &z);
                    break;

                case 2:
                    printf("Enter new price : ");
                    scanf("%d", &x);
                    break;

                case 3:
                    printf("Enter new price : ");
                    scanf("%d", &c);
                    break;

                case 4:
                    printf("Enter new price : ");
                    scanf("%d", &v);
                    break;

                case 5:
                    printf("Enter new price : ");
                    scanf("%d", &b);
                    break;

                default:
                    printf("try again ");
                }
            }
        }
        else
        {
            printf("try again ");
            return 0;
        }

        printf("Do you want another else !? \n");
        scanf(" %c", &again); // Added space before %c to consume the newline character

    } while (again == 'y' || again == 'Y');

    return 0;
}
