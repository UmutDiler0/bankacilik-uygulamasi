#include <stdio.h>
#include <stdlib.h>
void menu(int bakiye)
{

    printf("1- para cek\n");
    printf("2-para yatir\n");
    printf("3-Havale ile para gonder\n");
    printf("4-Fatura ode\n");
    printf("5-cikis\n");
    printf("Yapmak istediginiz islemi seciniz:\n");
    int secenek;
    scanf("%d",&secenek);
    if(secenek==1)
    {
        paracek(bakiye);
    }
    else if(secenek==2)
    {
        parayatir(bakiye);
    }
    else if(secenek==3)
    {
        havale(bakiye);
    }
    else if(secenek==4)
    {
        faturaode(bakiye);
    }
    else if(secenek==5)
    {
        exit(0);
    }
    else
    {
        printf("hatali deger girdiniz\n");
    }

}
void paracek(int bakiye)
{
    int devam;
    int cek;
    do
    {

    printf("cekmek istediginiz miktari giriniz:\n");
        scanf("%d",&cek);
        if(bakiye<cek)
        {
            printf("yetersiz bakiye\n");
        }
        else
        {
            printf("yeni bakiyeniz=%d\n",bakiye-cek);
        }
        bakiye=bakiye-cek;
        printf("islemi durdurmak icin 0'a basiniz\n");
        scanf("%d",&devam);
        if(devam==0)
        {
            menu(bakiye);

        }
    }while(devam!=0);




}
void parayatir(int bakiye)
{
    int yatir;
    int devam;
    do
    {


    printf("yatirmak istediginiz miktari giriniz:\n");
    scanf("%d",&yatir);
    printf("yeni bakiye=%d\n",bakiye+yatir);
    bakiye=bakiye+yatir;
    printf("islemi sonlandirmak ve menuye dondurmek icin 0'a basiniz\n");
    scanf("%d",&devam);
    if(devam==0)
    {
        menu(bakiye);
    }
    }while(devam!=0);



}
void havale(int bakiye)
{
    int miktar;
    int devam;
    do
    {


    printf("Gondermek sitediginiz miktari giriniz:\n");
    scanf("%d",&miktar);
    printf("yeni bakiyeniz:%d\n",bakiye-miktar);
    bakiye=bakiye-miktar;
    printf("islemi sonlandirmak ve menuye dondurmek icin 0'a basiniz\n");
    scanf("%d",&devam);
    if(devam==0)
    {
        menu(bakiye);
    }
    }while(devam!=0);

}
void faturaode(bakiye)
{
    int tur;
    int devam;
    do{
    int elektrik=300,dogalgaz=600,internet=250;
    printf("1-Elektrik\n");
    printf("2-Dogalgaz\n");
    printf("3-Internet\n");
    printf("odemek istediginiz fatura turunu seciniz:\n");
    scanf("%d",&tur);
    if(tur==1)
    {
        printf("elektrik faturaniz odendi yeni bakiyeniz:%d\n",bakiye-elektrik);
        bakiye=bakiye-elektrik;
    }
    else if(tur==2)
    {
        printf("dogalgaz faturaniz odendi ve yeni bakiyeniz:%d\n",bakiye-dogalgaz);
        bakiye=bakiye-dogalgaz;
    }
    else if(tur==3)
    {
        printf("internet faturaniz odendi ve yeni bakiyeniz:%d\n",bakiye-internet);
        bakiye=bakiye-internet;
    }
    else
    {
        printf("hatali deger girdiniz\n");
    }
    printf("islemi sonlandirmak ve menuye donmek icin 0'a basiniz\n");
    scanf("%d",&devam);
    if(devam==0)
    {
        menu(bakiye);
    }
}while(devam!=0);



}
int main()
{
    printf("Bankamiza Hosgeldiiz\n\n");
    int bakiye=1000;
    menu(bakiye);
}
