#include<stdio.h>
int main()
{
    int bank;
    unsigned long amount =1000,deposit,withdraw;
    int choice,pin,k;
    char transaction='y';
    printf("Choose your bank");
    printf("\n1. J&K \n 2. PNB \n 3.SBI \n 4. HDFC\n");
    scanf("%d",&bank);
    switch(bank){

case 1:
 // While Loop
    while(pin !=1496)
    {
        // Output Statement(prompt)
        printf("Enter the pin number:");
        // Input statement
        scanf("%d",&pin);
    //    If statement
        if (pin !=1496)
        // Outputstatement(prompt)
        printf("please enter valid pin\n");

    }
    do
    {
        // Output statement(prompt)
        printf("*********WELCOME TO J&K ATM SERVICE*********\n");
        // output statement(prompt)
        printf("Choose any option:\n");
        // Output statement(prompt)
        printf("1. check balance\n");
        // Output statement(prompt)
        printf("2. withdraw cash\n");
        // Output statement(prompt)
        printf("3. deposit cash\n");
        // Output statement(prompt)
        printf("4. quit\n");
        // Output statement(prompt)
        printf("**************?**************?*\n\n");
        // Output statement(prompt)
        printf("Enter your choice: ");
        // Input statement
        scanf("%d",&choice);
        // Switch Statement
        switch (choice)
        {
       case 1:
              // Outputstatement(prompt)
              printf("\n YOUR BALENCE IN Rs ; %lu", amount);
              break;
       case 2:
              // Outputstatement(prompt)
              printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
              //    Input Statement
              scanf ("%lu", &withdraw);
            //   If Else
              if (withdraw % 100 !=0)
              {
                 // Outputstatement(prompt)
                  printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");

              }
              else if (withdraw >(amount - 500))
              {
                // Outputstatement(prompt)
                 printf("\n INSUFFICENT BALANCE");

              }
              else
              {
                  amount=amount-withdraw;
                // Outputstatement(prompt)
                  printf("\n\nPLEASE COLLECT CASH");
                // Outputstatement(prompt)
                  printf("\n YOUR CURRENT BALANCE IS %lu",amount);
              }
              break;
        case 3:
               // Outputstatement(prompt)
               printf("\n ENTER THE AMOUNT TO DEPOSIT");
               //    Input Statement
               scanf("%lu",&deposit);
               amount = amount + deposit;
               // Outputstatement(prompt)
               printf("YOUR BALANCE IS %lu",amount);
               break;
        case 4:
               // Outputstatement(prompt)
                printf("\n THANK YOU FOR USING ATM");
                break;
        default:
               // Outputstatement(prompt)
                 printf("\n INVALID CHOICE");

               }
               // Outputstatement(prompt)
               printf("\n\n\n DO YOU WISH TO HAVE ANOTHER TRANSACTION?(y/n):\n");
               fflush(stdin);
            //    Input Statement
               scanf("%c",&transaction);
               if (transaction=='n'||transaction=='N')
                k=1;

    }
    // While Loop
    while(!k);
    // Output Statement (prompt)
    printf("\n\n THANKS FOR USING OUR ATM SERVICE\n");
    break;
    case 2:
     // While Loop
    while(pin !=5678)
    {
        // Output Statement(prompt)
        printf("Enter the pin number:");
        // Input statement
        scanf("%d",&pin);
    //    If statement
        if (pin !=5678)
        // Outputstatement(prompt)
        printf("please enter valid pin\n");

    }
    do
    {
        // Output statement(prompt)
        printf("*********WELCOME TO PNB ATM SERVICE*********\n");
        // output statement(prompt)
        printf("Choose any option:\n");
        // Output statement(prompt)
        printf("1. check balance\n");
        // Output statement(prompt)
        printf("2. withdraw cash\n");
        // Output statement(prompt)
        printf("3. deposit cash\n");
        // Output statement(prompt)
        printf("4. quit\n");
        // Output statement(prompt)
        printf("**************?**************?*\n\n");
        // Output statement(prompt)
        printf("Enter your choice: ");
        // Input statement
        scanf("%d",&choice);
        // Switch Statement
        switch (choice)
        {
       case 1:
              // Outputstatement(prompt)
              printf("\n YOUR BALENCE IN Rs ; %lu", amount);
              break;
       case 2:
              // Outputstatement(prompt)
              printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
              //    Input Statement
              scanf ("%lu", &withdraw);
            //   If Else
              if (withdraw % 100 !=0)
              {
                 // Outputstatement(prompt)
                  printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");

              }
              else if (withdraw >(amount - 500))
              {
                // Outputstatement(prompt)
                 printf("\n INSUFFICENT BALANCE");

              }
              else
              {
                  amount=amount-withdraw;
                // Outputstatement(prompt)
                  printf("\n\nPLEASE COLLECT CASH");
                // Outputstatement(prompt)
                  printf("\n YOUR CURRENT BALANCE IS %lu",amount);
              }
              break;
        case 3:
               // Outputstatement(prompt)
               printf("\n ENTER THE AMOUNT TO DEPOSIT");
               //    Input Statement
               scanf("%lu",&deposit);
               amount = amount + deposit;
               // Outputstatement(prompt)
               printf("YOUR BALANCE IS %lu",amount);
               break;
        case 4:
               // Outputstatement(prompt)
                printf("\n THANK YOU FOR USING ATM");
                break;
        default:
               // Outputstatement(prompt)
                 printf("\n INVALID CHOICE");

               }
               // Outputstatement(prompt)
               printf("\n\n\n DO YOU WISH TO HAVE ANOTHER TRANSACTION?(y/n):\n");
               fflush(stdin);
            //    Input Statement
               scanf("%c",&transaction);
               if (transaction=='n'||transaction=='N')
                k=1;

    }
    // While Loop
    while(!k);
    // Output Statement (prompt)
    printf("\n\n THANKS FOR USING OUR ATM SERVICE\n");
    break;
    case 3:
     // While Loop
    while(pin !=1234)
    {
        // Output Statement(prompt)
        printf("Enter the pin number:");
        // Input statement
        scanf("%d",&pin);
    //    If statement
        if (pin !=1234)
        // Outputstatement(prompt)
        printf("please enter valid pin\n");

    }
    do
    {
        // Output statement(prompt)
        printf("*********WELCOME TO SBI ATM SERVICE*********\n");
        // output statement(prompt)
        printf("Choose any option:\n");
        // Output statement(prompt)
        printf("1. check balance\n");
        // Output statement(prompt)
        printf("2. withdraw cash\n");
        // Output statement(prompt)
        printf("3. deposit cash\n");
        // Output statement(prompt)
        printf("4. quit\n");
        // Output statement(prompt)
        printf("**************?**************?*\n\n");
        // Output statement(prompt)
        printf("Enter your choice: ");
        // Input statement
        scanf("%d",&choice);
        // Switch Statement
        switch (choice)
        {
       case 1:
              // Outputstatement(prompt)
              printf("\n YOUR BALENCE IN Rs ; %lu", amount);
              break;
       case 2:
              // Outputstatement(prompt)
              printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
              //    Input Statement
              scanf ("%lu", &withdraw);
            //   If Else
              if (withdraw % 100 !=0)
              {
                 // Outputstatement(prompt)
                  printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");

              }
              else if (withdraw >(amount - 500))
              {
                // Outputstatement(prompt)
                 printf("\n INSUFFICENT BALANCE");

              }
              else
              {
                  amount=amount-withdraw;
                // Outputstatement(prompt)
                  printf("\n\nPLEASE COLLECT CASH");
                // Outputstatement(prompt)
                  printf("\n YOUR CURRENT BALANCE IS %lu",amount);
              }
              break;
        case 3:
               // Outputstatement(prompt)
               printf("\n ENTER THE AMOUNT TO DEPOSIT");
               //    Input Statement
               scanf("%lu",&deposit);
               amount = amount + deposit;
               // Outputstatement(prompt)
               printf("YOUR BALANCE IS %lu",amount);
               break;
        case 4:
               // Outputstatement(prompt)
                printf("\n THANK YOU FOR USING ATM");
                break;
        default:
               // Outputstatement(prompt)
                 printf("\n INVALID CHOICE");

               }
               // Outputstatement(prompt)
               printf("\n\n\n DO YOU WISH TO HAVE ANOTHER TRANSACTION?(y/n):\n");
               fflush(stdin);
            //    Input Statement
               scanf("%c",&transaction);
               if (transaction=='n'||transaction=='N')
                k=1;

    }
    // While Loop
    while(!k);
    // Output Statement (prompt)
    printf("\n\n THANKS FOR USING OUR ATM SERVICE\n");
    break;
    case 4:
     // While Loop
    while(pin !=6969)
    {
        // Output Statement(prompt)
        printf("Enter the pin number:");
        // Input statement
        scanf("%d",&pin);
    //    If statement
        if (pin !=6969)
        // Outputstatement(prompt)
        printf("please enter valid pin\n");

    }
    do
    {
        // Output statement(prompt)
        printf("*********WELCOME TO HDFC ATM SERVICE*********\n");
        // output statement(prompt)
        printf("Choose any option:\n");
        // Output statement(prompt)
        printf("1. check balance\n");
        // Output statement(prompt)
        printf("2. withdraw cash\n");
        // Output statement(prompt)
        printf("3. deposit cash\n");
        // Output statement(prompt)
        printf("4. quit\n");
        // Output statement(prompt)
        printf("**************?**************?*\n\n");
        // Output statement(prompt)
        printf("Enter your choice: ");
        // Input statement
        scanf("%d",&choice);
        // Switch Statement
        switch (choice)
        {
       case 1:
              // Outputstatement(prompt)
              printf("\n YOUR BALENCE IN Rs ; %lu", amount);
              break;
       case 2:
              // Outputstatement(prompt)
              printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
              //    Input Statement
              scanf ("%lu", &withdraw);
            //   If Else
              if (withdraw % 100 !=0)
              {
                 // Outputstatement(prompt)
                  printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");

              }
              else if (withdraw >(amount - 500))
              {
                // Outputstatement(prompt)
                 printf("\n INSUFFICENT BALANCE");

              }
              else
              {
                  amount=amount-withdraw;
                // Outputstatement(prompt)
                  printf("\n\nPLEASE COLLECT CASH");
                // Outputstatement(prompt)
                  printf("\n YOUR CURRENT BALANCE IS %lu",amount);
              }
              break;
        case 3:
               // Outputstatement(prompt)
               printf("\n ENTER THE AMOUNT TO DEPOSIT");
               //    Input Statement
               scanf("%lu",&deposit);
               amount = amount + deposit;
               // Outputstatement(prompt)
               printf("YOUR BALANCE IS %lu",amount);
               break;
        case 4:
               // Outputstatement(prompt)
                printf("\n THANK YOU FOR USING ATM");
                break;
        default:
               // Outputstatement(prompt)
                 printf("\n INVALID CHOICE");

               }
               // Outputstatement(prompt)
               printf("\n\n\n DO YOU WISH TO HAVE ANOTHER TRANSACTION?(y/n):\n");
               fflush(stdin);
            //    Input Statement
               scanf("%c",&transaction);
               if (transaction=='n'||transaction=='N')
                k=1;

    }
    // While Loop
    while(!k);
    // Output Statement (prompt)
    printf("\n\n THANKS FOR USING OUR ATM SERVICE\n");
    break;
    deafault:
    printf("INVALID");
    }
    return 0;
}


