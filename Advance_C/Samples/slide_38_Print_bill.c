/* Slide 38 */

/* Question: Printing bill by getting name of the buyed product, and each product amount as well as total amount of all products with help of calculate predefined cost of some avaialable products */


#include<stdio.h>

int main()
{
    char item1[20], item2[20], item3[20];
    
    int quantity[3];

    float cost[3];

    float total[3], total_bill = 0;
    
    int total_quantity;
        
        printf("Enter the item names: ");
        scanf("%s", item1);

        printf("Enter no of pcs: ");
        scanf("%d", &quantity[0]);

        printf("Enter the cost: ");
        scanf("%f", &cost[0]);

        printf("\n");


        printf("Enter the item names: ");
        scanf("%s", item2);

        printf("Enter no of pcs: ");
        scanf("%d", &quantity[1]);

        printf("Enter the cost: ");
        scanf("%f", &cost[1]);

        printf("\n");


        printf("Enter the item names: ");
        scanf("%s", item3);

        printf("Enter no of pcs: ");
        scanf("%d", &quantity[2]);

        printf("Enter the cost: ");
        scanf("%f", &cost[2]);


    for (int i = 0; i < 3; i++)
    {
        total[i] = quantity[i] * cost[i];
            
        total_bill = total[i] + total_bill;
    }
    
    printf("\n____________________________________________________________\nS.NO\tName\tQuantity\tCost\tAmount\n________________________________________________________________\n");
    printf("1\t%s\t%d\t\t%3.2f\t%.2f\n", item1,quantity[0],cost[0],total[0]);
    printf("2\t%s\t%d\t\t%3.2f\t%.2f\n", item2,quantity[1],cost[1],total[1]);
    printf("3\t%s\t%d\t\t%3.2f\t%.2f\n", item3,quantity[2],cost[2],total[2]);
    printf("___________________________________________________________\nTotal\t\t%d\t\t\t%.2f\n___________________________________________________________________\n",quantity[0]+quantity[1]+quantity[2], total_bill);
    
        return 0;
}
    





