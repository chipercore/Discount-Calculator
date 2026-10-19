

#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);

    printf(" /░░░░    /░░░   /░░░░   /░ /░    /█▀▀▀/    /░░░░           /░░░░    /░░░    /░░░░    /█▀▀▀/\n");
    printf("│ ▒__/   │/_▒/  │_▒ /▒  │ ▒▒▒▒   │ ▓▓▓     │_▒ /▒          │ ▒__/   │_▒/▒   │_▒ /▒   │ ▓▓▓\n");
    printf("│ ▓       │ ▓   │ ▓▓▓/  │ ▓_/▓   │_▒_/     │ ▓▓▓/          │ ▓      │ ▓ ▓   │ ▓▓▓/   │_▒_/\n");
    printf("│ ████    /███  │ █_/   │ █│ █   │ ░░░░    │ █_/█          │ ████   │ ███   │ █_/█   │ ░░░░\n");
    printf("│/___/   │/__/  │//     │//│//   │/___/    │// //          │/___/   │/__/   │// //   │/___/\n");
    printf("                                                                                               ");
    printf("                                                  Dᴇᴠᴇʟᴏᴘᴇᴅ Bʏ Cʜɪᴘᴇʀ  • ᴠᴇʀsɪᴏɴ 1.0 • ᴄʜɪᴘᴇʀ ᴄᴏʀᴇ    ");
    printf("                                                                                             ");
    printf("                                                                                             ");
    printf("                                                                                             ");
    printf("                                                                                             ");
    printf("                                                                                             \n");

    int value;
    printf("Your Purchase amount:");
    scanf("%d",&value);

    if
        (value < 0)
        {
            printf("Invalid purchase amount.");
        }

    else if
            (value >= 5000)
        {
            int discount,final_price;
            discount = value * 10 / 100;
            final_price = value - discount;
            printf("Congratulations! You have been given a 10% discount for your purchases totaling %d Taka.",value);
            printf("Purchase amount: %d Taka\n", value);
            printf("Discount amount: %d Taka\n", discount);
            printf("Final price: %d Taka\n", final_price);

        }

    else

        {
        printf("We apologize, but we cannot offer a 10% discount on purchases below 5,000 BDT.");
        }




    return 0;
}




