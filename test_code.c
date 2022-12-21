#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

int main()

{

      int i,j,k,p,q,r;

      int x,y,m,a,b,c,d,e,f,g,h;

      float n,l,o;

      int pepsi = 20;

      int cola = 30;

      int est = 25;

      int choice;

loop:

      printf("\n");

      printf("\n\n***-------Minimarket program-------***\n\n");

      printf("Main Menu\n");

      printf("\n\nSelect choice menu: \n1. Pepsi = 20 bath \n2. Cola = 30 bath \n3. Est = 25 bath \n4. Exit\n\n");

      scanf("%d",&choice);


      switch(choice){
          case 4:exit(0);}

        switch(choice){
            case 1: printf("\n\n1. Pepsi = 20 bath: ");
            printf("\n\nEnter number of products: ");
            scanf("%d",&p);
            printf("Enter amount of money: ");
            scanf("%f",&n);


                 i = p*pepsi;


           printf("\n\nThe total number of items = %d",p);

           printf("\n\nThe total amount of money = %d",i);


               m=n-i;

           printf("\n\nTorn = %d Bath \n\n",m);

            a=m/1000;

           printf("\nBank 1,000 = %d ",a);

            b=m%1000;

            c=b/100;

      if (c>=5)

      {

      printf("\nBank 500 = %d ",1);

            c=c-5;

      }

      else

      {



      printf("\nBank 100 = %d ",c);

           d=m%100;

           e=d/10;
      }
      if (e>=5)

      {

      printf("\nBank 50 = %d ",1);

           e=e-5;

      }

      else

      {



           f=e/2;

      printf("\nBank 20 = %d ",f);

           g=e%2;

      printf("\nCoin 10 = %d ",g);

           h=m%10;
      }
      if (h>=5)

      {

      printf("\nCoin 5 = %d ",1);

           h=h-5;

      }

      else

      {



      printf("\nCoin 1 = %d ",h);
      }
       break;


  case 2: printf("\n\n2. Cola = 30 bath: ");

           printf("\n\nEnter number of products: ");

           scanf("%d",&q);

           printf("\n\nEnter amount of money: ");

           scanf("%f",&l);


               j = q*cola;


           printf("\n\nThe total number of items = %d",q);

           printf("\n\nThe total amount of money = %d",j);


             m=l-j;

      printf("\n\nTorn = %d Bath \n\n",m);

            a=m/1000;

      printf("\nBank 1,000 = %d ",a);

            b=m%1000;

            c=b/100;

      if (c>=5)

      {

      printf("\nBank 500 = %d ",1);

            c=c-5;

      }

      else

      {

      }

      printf("\nBank 100 = %d ",c);

           d=m%100;

           e=d/10;

      if (e>=5)

      {

      printf("\nBank 50 = %d ",1);

           e=e-5;

      }

      else

      {

      }

           f=e/2;

      printf("\nBank 20 = %d ",f);

           g=e%2;

      printf("\nCoin 10 = %d ",g);

           h=m%10;

      if (h>=5)

      {

      printf("\nCoin 5 = %d ",1);

           h=h-5;

      }

      else

      {

      }

      printf("\nCoin 1 = %d ",h);

       break;

  case 3: printf("\n\n3. Est = 25 bath: ");

           printf("\n\nEnter number of products: ");

           scanf("%d",&r);

           printf("\n\nEnter amount of money: ");

           scanf("%f",&o);


                k = r*est;


           printf("\n\nThe total number of items = %d",r);

           printf("\n\nThe total amount of money = %d",k);


                 m=o-k;

          printf("\n\nTorn = %d Bath \n\n",m);

            a=m/1000;

          printf("\nBank 1,000 = %d ",a);

            b=m%1000;

            c=b/100;

      if (c>=5)

      {

      printf("\nBank 500 = %d ",1);

            c=c-5;

      }

      else

      {

      }

      printf("\nBank 100 = %d ",c);

           d=m%100;

           e=d/10;

      if (e>=5)

      {

      printf("\nBank 50 = %d ",1);

           e=e-5;

      }

      else

      {

      }

           f=e/2;

      printf("\nBank 20 = %d ",f);

           g=e%2;

      printf("\nCoin 10 = %d ",g);

           h=m%10;

      if (h>=5)

      {

      printf("\nCoin 5 = %d ",1);

           h=h-5;

      }

      else

      {

      }

      printf("\nCoin 1 = %d ",h);



      break;

      }

      goto loop;

      getch();

}
