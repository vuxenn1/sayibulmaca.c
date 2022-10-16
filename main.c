#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>

void sayiTahmin();
void baslatbitir();
void clrscr(void);

int main(){
    baslatbitir();
    return 0;
}

sayiTahmin(){
    int sayi, deneme=0;
    srand(time(NULL));
    int random = rand() % 100;
    int hak=5;

    while(hak!=0)
    {
        while(sayi!=random)
        {
            printf("\n%d Hakkin var.",hak);
            printf("\n100 ile 1 arasinda bir sayi giriniz : ");
            scanf("%d", &sayi);
            deneme++;
            hak--;
            if(sayi < random && hak >=1){
                printf("\nSayiyi arttirin.\n");
                }
            else if(sayi > random && hak>=1){
                printf("\nSayiyi azaltin.\n");
                }

            if(hak==0){
                break;
            }
        }
        if(hak==0){
            printf("\n\n\n-----------------Hakkin kalmadi-----------------");
            printf("\n-----------------Dogru cevap = %d-----------------",random);
            break;
        }
        else if(sayi==random && hak>0){
            printf("\nTebrikler %d. denemede bildiniz!!", deneme);
            break;
        }
    }
}
baslatbitir(){
    char rps=' ';
    do{
        sayiTahmin();
        printf("\nTekrar denemek ister misin? (Y/N): ");
        scanf("%c");
        scanf("%c", &rps);
        rps = toupper(rps);
        system("cls");

    }while(rps=='Y');
    printf("\n\n-------- Tesekkuler ! ! --------");

}
