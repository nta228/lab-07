#include <stdio.h>
 
int main ()
{
   int y;
   int menu;
   int price;
   do
   {
       printf("Nhap so theo menu de order do uong \n");
       printf("Capuchino 1 gia 50k \nCapuchino Caramel 2 gia 70k \nEspresso 3 gia 100k");
       scanf("%d", &menu);
       
       switch(menu)
       {
           case 1:
            printf("Ban da order thanh cong Capuchino");
            price += 50000;
            break;
           case 2:
            printf("Ban da order thanh cong Capuchino Caramel");
            price += 70000;
            break;
            case 3:
            printf("Ban da order thanh cong Espresso");
            price += 100000;
            break;
       }
       printf("\nBan co muon tiep tuc order khong ? ( Nhap 0 de huy hoac so bat ki de tiep tuc): \n");
       scanf("%d", &y);
       
       
       
   }
   while(y != 0);
   
   printf("\nSo tien can thanh toan la : %d VND", price);

   printf("\nGood Bye. See you again !\n");

   return 0;
}


