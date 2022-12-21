#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int menu();
int calculator(int x);
int savemoney(int y, int z , int a);
int admin();
int editf();


int main(){
    int ch;
    printf("\t\t*******************Welcome to Drinking Water Vending Machine*******************\n");
    printf("\n\n\t\t\t\tSelect Water:\tChoose '1' \n\t\t\t\tEdit By Admin:\tChoose '2' \n\t\t\t\tExit Program:\tChoose '3' \n\n");
    printf("\t\t\t\tEnter Your Choose:\t");
    scanf("%d",&ch);
    printf("\n\n\n");


    if(ch == 1){
        system("cls");
        menu();
    }
    else if(ch == 2){
        system("cls");
        admin();
    }
    else if(ch == 3){
        exit(0);

    }
}

int editf(){
    printf("\twelcom admin");

}

int menu(){
    FILE *list;
    char water;
    int num;
    printf("********************Menu*********************\n\n");
    if ( (list = fopen("list.txt","r") ) == NULL){
        printf("Error");
        exit(1);
    }
    do{
        water = getc(list);
        putchar(water);
    }while(water != EOF);
    fclose(list);
    printf("\nSelect Number Front Of Water: ");
    scanf("%d",&num);
    system("cls");
    calculator(num);


}
int admin(){
    char admin[10] , password[10];
    printf("********************login*********************\n\n");
    printf("\tUser: ");
    scanf("%s",&admin);
    printf("\tPassword: ");
    scanf("%s",&password);
    if (strcmp(admin ,"admin") == 0 && strcmp(password , "1234") == 0){
        system("cls");
        editf();
    }
    else{
        printf("Worg password \n");
    }
}



int savemoney(int y , int z , int a){
    char return0;
    int sum = 0;
    sum += z;

    struct price{
        char namep[20], bath[20], stock[20];
        int pri, code, mon;
    }p1,p2,p3,p4,p5,p6,p7;

    FILE *savetang;
    savetang = fopen("list.txt","r");
    fscanf(savetang,"%d %s %d %s %s %d",&p1.code , &p1.namep , &p1.mon , &p1.bath , &p1.stock ,&p1.pri);
    fscanf(savetang,"%d %s %d %s %s %d",&p2.code , &p2.namep , &p2.mon , &p2.bath , &p2.stock ,&p2.pri);
    fscanf(savetang,"%d %s %d %s %s %d",&p3.code , &p3.namep , &p3.mon , &p3.bath , &p3.stock ,&p3.pri);
    fscanf(savetang,"%d %s %d %s %s %d",&p4.code , &p4.namep , &p4.mon , &p4.bath , &p4.stock ,&p4.pri);
    fscanf(savetang,"%d %s %d %s %s %d",&p5.code , &p5.namep , &p5.mon , &p5.bath , &p5.stock ,&p5.pri);
    fscanf(savetang,"%d %s %d %s %s %d",&p6.code , &p6.namep , &p6.mon , &p6.bath , &p6.stock ,&p6.pri);
    fscanf(savetang,"%d %s %d %s %s %d",&p7.code , &p7.namep , &p7.mon , &p7.bath , &p7.stock ,&p7.pri);
    fclose(savetang);
    if (a == 15){
        p1.pri -= y;
        printf("\n%d",p1.pri);
    }
    else if (a == 14){
        p2.pri -= y;
        printf("\n%d",p2.pri);
    }
    else if (a == 17){
        p3.pri -= y;
        printf("\n%d",p3.pri);
    }
    else if (a == 10){
        p4.pri -= y;
        printf("\n%d",p4.pri);
    }
    else if (a == 16){
        p5.pri -= y;
        printf("\n%d",p5.pri);
    }
    else if (a == 13){
        p6.pri -= y;
        printf("\n%d",p6.pri);
    }
    else if (a == 20){
        p7.pri -= y;
        printf("\n%d",p7.pri);
    }

    savetang = fopen("list.txt","w");
    fprintf(savetang,"%d %s %d %s %s %d\n",p1.code , p1.namep , p1.mon , p1.bath , p1.stock ,p1.pri);
    fprintf(savetang,"%d %s %d %s %s %d\n",p2.code , p2.namep , p2.mon , p2.bath , p2.stock ,p2.pri);
    fprintf(savetang,"%d %s %d %s %s %d\n",p3.code , p3.namep , p3.mon , p3.bath , p3.stock ,p3.pri);
    fprintf(savetang,"%d %s %d %s %s %d\n",p4.code , p4.namep , p4.mon , p4.bath , p4.stock ,p4.pri);
    fprintf(savetang,"%d %s %d %s %s %d\n",p5.code , p5.namep , p5.mon , p5.bath , p5.stock ,p5.pri);
    fprintf(savetang,"%d %s %d %s %s %d\n",p6.code , p6.namep , p6.mon , p6.bath , p6.stock ,p6.pri);
    fprintf(savetang,"%d %s %d %s %s %d\n",p7.code , p7.namep , p7.mon , p7.bath , p7.stock ,p7.pri);
    fclose(savetang);

    FILE *sf;
    char inc[100];
    int fm ,sum1;
    sf = fopen("save.txt","r");
    fscanf(sf , "%s %d" , &inc , &fm);
    fclose(sf);
    sum1 = fm + sum;

    sf = fopen("save.txt","w");
    fprintf(sf,"%s %d",inc,sum1);
    fclose(sf);

    printf("\nDo you want to Homepage ('y') or Return to Menu ('n'): ");
    return0 = getche();
    if(return0 == 'y'){
        system("cls");
        main();
    }
    if(return0 == 'n'){
        system("cls");
        menu();
    }

}

int calculator(int x){
    struct price{
        int coke ;int pepsi ;int fanta ;int est_cola ;int sprite ;int sponsor; int schweppes ; int refresh;
    }w_name = {15,14,17,10,16,13,20,20};

    int  n , a_c , bank , a , c , d , e , f , g , h;
    int  m_c1 , m_c2 , m_c3 , m_c4 , m_c5 , m_c6 , m_c7;
    int  p_c1 , p_c2 , p_c3 , p_c4 , p_c5 , p_c6 , p_c7;
    int  money;

    switch(x){
        case 1 :printf("\n\n1. Coke = 15 Bath ");
            printf("\n\nEnter number of products: ");
            scanf("%d",&p_c1);
            printf("Enter amount of money: ");
            scanf("%d",&money);

            m_c1 = p_c1 * w_name.coke;

            printf("\nThe total number of items = %d",p_c1);
            printf("\nThe total amount of money = %d",m_c1);

            a_c = money - m_c1;

            printf("\n\nTorn = %d Bath \n\n",a_c);

            a = a_c / 1000;

            printf("\nBank 1,000 = %d ",a);

            bank = a_c %1000;

            c = bank / 100;

            if (c>=5){
                printf("\nBank 500 = %d ",1);
                c=c-5;
                }

            else{

            }

            printf("\nBank 100 = %d ",c);

            d = a_c % 100;

            e = d / 10;

            if (e>=5){
                printf("\nBank 50 = %d ",1);
                e=e-5;
                }
            else{

            }
            f=e/2;
            printf("\nBank 20 = %d ",f);

            g=e%2;
            printf("\nCoin 10 = %d ",g);

            h = a_c % 10;

            if (h>=5){
                printf("\nCoin 5 = %d ",1);
                h=h-5;
                }

            else{

            }
            printf("\nCoin 1 = %d ",h);
            savemoney(p_c1 , m_c1 ,w_name.coke);

       break;

       case 2 :printf("\n\n2. Pepsi = 14 Bath ");
            printf("\n\nEnter number of products: ");
            scanf("%d",&p_c2);
            printf("Enter amount of money: ");
            scanf("%d",&money);

            m_c2 = p_c2 * w_name.pepsi;

            printf("\nThe total number of items = %d",p_c2);
            printf("\nThe total amount of money = %d",m_c2);

            a_c = money - m_c2;

            printf("\n\nTorn = %d Bath \n\n",a_c);

            a = a_c / 1000;

            printf("\nBank 1,000 = %d ",a);

            bank = a_c %1000;

            c = bank / 100;

            if (c>=5){
                printf("\nBank 500 = %d ",1);
                c=c-5;
                }

            else{

            }

            printf("\nBank 100 = %d ",c);

            d = a_c % 100;

            e = d / 10;

            if (e>=5){
                printf("\nBank 50 = %d ",1);
                e=e-5;
                }
            else{

            }
            f=e/2;
            printf("\nBank 20 = %d ",f);

            g=e%2;
            printf("\nCoin 10 = %d ",g);

            h = a_c % 10;

            if (h>=5){
                printf("\nCoin 5 = %d ",1);
                h=h-5;
                }

            else{

            }
            printf("\nCoin 1 = %d ",h);
            savemoney(p_c2, m_c2 , w_name.pepsi);

       break;

        case 3 :printf("\n\n3. Fanta = 17 Bath ");
            printf("\n\nEnter number of products: ");
            scanf("%d",&p_c3);
            printf("Enter amount of money: ");
            scanf("%d",&money);

            m_c3 = p_c3 * w_name.fanta;

            printf("\nThe total number of items = %d",p_c3);
            printf("\nThe total amount of money = %d",m_c3);

            a_c = money - m_c3;

            printf("\n\nTorn = %d Bath \n\n",a_c);

            a = a_c / 1000;

            printf("\nBank 1,000 = %d ",a);

            bank = a_c %1000;

            c = bank / 100;

            if (c>=5){
                printf("\nBank 500 = %d ",1);
                c=c-5;
                }

            else{

            }

            printf("\nBank 100 = %d ",c);

            d = a_c % 100;

            e = d / 10;

            if (e>=5){
                printf("\nBank 50 = %d ",1);
                e=e-5;
                }
            else{

            }
            f=e/2;
            printf("\nBank 20 = %d ",f);

            g=e%2;
            printf("\nCoin 10 = %d ",g);

            h = a_c % 10;

            if (h>=5){
                printf("\nCoin 5 = %d ",1);
                h=h-5;
                }

            else{

            }
            printf("\nCoin 1 = %d ",h);
            savemoney(p_c3, m_c3 , w_name.fanta);

       break;

        case 4 :printf("\n\n4. Est = 10 Bath ");
            printf("\n\nEnter number of products: ");
            scanf("%d",&p_c4);
            printf("Enter amount of money: ");
            scanf("%d",&money);

            m_c4 = p_c4 * w_name.est_cola;

            printf("\nThe total number of items = %d",p_c4);
            printf("\nThe total amount of money = %d",m_c4);

            a_c = money - m_c4;

            printf("\n\nTorn = %d Bath \n\n",a_c);

            a = a_c / 1000;

            printf("\nBank 1,000 = %d ",a);

            bank = a_c %1000;

            c = bank / 100;

            if (c>=5){
                printf("\nBank 500 = %d ",1);
                c=c-5;
                }

            else{

            }

            printf("\nBank 100 = %d ",c);

            d = a_c % 100;

            e = d / 10;

            if (e>=5){
                printf("\nBank 50 = %d ",1);
                e=e-5;
                }
            else{

            }
            f=e/2;
            printf("\nBank 20 = %d ",f);

            g=e%2;
            printf("\nCoin 10 = %d ",g);

            h = a_c % 10;

            if (h>=5){
                printf("\nCoin 5 = %d ",1);
                h=h-5;
                }

            else{

            }
            printf("\nCoin 1 = %d ",h);
            savemoney(p_c4, m_c4 ,w_name.est_cola);

       break;

        case 5 :printf("\n\n5. Sprite = 16 Bath ");
            printf("\n\nEnter number of products: ");
            scanf("%d",&p_c5);
            printf("Enter amount of money: ");
            scanf("%d",&money);

            m_c5 = p_c5 * w_name.sprite;

            printf("\nThe total number of items = %d",p_c5);
            printf("\nThe total amount of money = %d",m_c5);

            a_c = money - m_c5;

            printf("\n\nTorn = %d Bath \n\n",a_c);

            a = a_c / 1000;

            printf("\nBank 1,000 = %d ",a);

            bank = a_c %1000;

            c = bank / 100;

            if (c>=5){
                printf("\nBank 500 = %d ",1);
                c=c-5;
                }

            else{

            }

            printf("\nBank 100 = %d ",c);

            d = a_c % 100;

            e = d / 10;

            if (e>=5){
                printf("\nBank 50 = %d ",1);
                e=e-5;
                }
            else{

            }
            f=e/2;
            printf("\nBank 20 = %d ",f);

            g=e%2;
            printf("\nCoin 10 = %d ",g);

            h = a_c % 10;

            if (h>=5){
                printf("\nCoin 5 = %d ",1);
                h=h-5;
                }

            else{

            }
            printf("\nCoin 1 = %d ",h);
            savemoney(p_c5, m_c5 , w_name.sprite);

       break;

        case 6 :printf("\n\n6. Sponsor = 13 Bath ");
            printf("\n\nEnter number of products: ");
            scanf("%d",&p_c6);
            printf("Enter amount of money: ");
            scanf("%d",&money);

            m_c6 = p_c6 * w_name.sponsor;

            printf("\nThe total number of items = %d",p_c6);
            printf("\nThe total amount of money = %d",m_c6);

            a_c = money - m_c6;

            printf("\n\nTorn = %d Bath \n\n",a_c);

            a = a_c / 1000;

            printf("\nBank 1,000 = %d ",a);

            bank = a_c %1000;

            c = bank / 100;

            if (c>=5){
                printf("\nBank 500 = %d ",1);
                c=c-5;
                }

            else{

            }

            printf("\nBank 100 = %d ",c);

            d = a_c % 100;

            e = d / 10;

            if (e>=5){
                printf("\nBank 50 = %d ",1);
                e=e-5;
                }
            else{

            }
            f=e/2;
            printf("\nBank 20 = %d ",f);

            g=e%2;
            printf("\nCoin 10 = %d ",g);

            h = a_c % 10;

            if (h>=5){
                printf("\nCoin 5 = %d ",1);
                h=h-5;
                }

            else{

            }
            printf("\nCoin 1 = %d ",h);
            savemoney(p_c6, m_c6 ,w_name.sponsor);

       break;

       case 7 :printf("\n\n7. Schweppes = 20 Bath ");
            printf("\n\nEnter number of products: ");
            scanf("%d",&p_c7);
            printf("Enter amount of money: ");
            scanf("%d",&money);

            m_c7 = p_c7 * w_name.schweppes;

            printf("\nThe total number of items = %d",p_c7);
            printf("\nThe total amount of money = %d",m_c7);

            a_c = money - m_c7;

            printf("\n\nTorn = %d Bath \n\n",a_c);

            a = a_c / 1000;

            printf("\nBank 1,000 = %d ",a);

            bank = a_c %1000;

            c = bank / 100;

            if (c>=5){
                printf("\nBank 500 = %d ",1);
                c=c-5;
                }

            else{

            }

            printf("\nBank 100 = %d ",c);

            d = a_c % 100;

            e = d / 10;

            if (e>=5){
                printf("\nBank 50 = %d ",1);
                e=e-5;
                }
            else{

            }
            f=e/2;
            printf("\nBank 20 = %d ",f);

            g=e%2;
            printf("\nCoin 10 = %d ",g);

            h = a_c % 10;

            if (h>=5){
                printf("\nCoin 5 = %d ",1);
                h=h-5;
                }

            else{

            }
            printf("\nCoin 1 = %d ",h);
            savemoney(p_c7, m_c7 , w_name.schweppes);

       break;
    }



}



