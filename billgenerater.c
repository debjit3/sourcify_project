#include<stdio.h>
#include<conio.h>
int main()
{
    float total_amt , amt, sub_total, discount_amt, tax_amt,qty,val,discount,tax;
    printf("         <----WELCOME----->          \n");
    printf("Enter the quantity of item sold\n::");
    scanf("%f",&qty);
    printf("Enter the value of item \n::");
    scanf("%f",&val);
    printf("Enter the Discount percentage\n ::");
    scanf("%f",&discount);
    printf("Enter the tax \n::");
    scanf("%f",&tax);
    amt=qty*val;
    discount_amt=(amt*discount)/100.0;
    sub_total=amt- discount_amt;
    tax_amt=(sub_total*tax)/100.0;
    total_amt=sub_total+tax_amt;
    printf("\n\n\n**********BILL***********");
    printf("\n Quantity sold:  %f",qty);
    printf("\n Price Per Item: %f",val);
    printf("\n\t\t ....................");
    printf("\n Amount:         %f",amt);
    printf("\n Discount:   -   %f",discount_amt);
    printf("\n Discount Total: %f",sub_total);
    printf("\n Tax:        +   %f", tax_amt);
    printf("\n\t\t  ....................");
    printf("\n Total Amount:   %f",total_amt);
    return 0;

}
