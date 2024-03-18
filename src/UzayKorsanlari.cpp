//
// Created by Hayrullah on 3/7/2024.
//
#include "UzayKorsanlari.h"
#include<iostream>




void UzayKorsanlari::UzayKorsanlariniBaslatacakFonksiyon() {


    KullaniciTercihiAlmaFonksiyonu();
    //cagrildiginda yapilmak istenenler buraya yazilabilir
}

bool UzayKorsanlari::KacmaTercihiSonucu() {
    int yuzdeKacmaIhtimali{50}; // Task'de belli bir oran vermedigi icin kacma ihtimali 50 verildi
    int randomGeneratedNumber =rand()%100;//random bir sayi olusturuldu

    //std::cout<<"Kacma tercihi sonucu random generated number"<<randomGeneratedNumber<<"\n";
     if(static_cast<int>(randomGeneratedNumber*BuGemi->hizKatsayisi)>=yuzdeKacmaIhtimali)// geminin hiz katsayisina gore kacma ihtimali degisir
     {
         return true;
     }
     else
     {
        return false;
     }
}


void UzayKorsanlari::PazarlikTercihiSonucu()
{
 UzayKorsanlariPazarlikTercihiIcinOlasilikFonkisyonu();// Pazarlikla ilgili baska bir sey yapilmak istenirse bu fonksiyona eklenebilir

}
void UzayKorsanlari:: UzayKorsanlariPazarlikTercihiIcinOlasilikFonkisyonu()
{
    int randomGeneratedNumber =static_cast<int>(std::rand()%100);//random bir sayi olusturuldu

    const int kacFarkliDegerdeParaIstenebilir{3}; // 10 20 30 olmak uzere 3 farkli para istenebilir

    const int herFarkliDegerArasindaKacAltinOlsun{10}; // Task de 10 20 30 icin arada 10 fark var eger ritmik artmiyorsa if blokloriyla her bir case icin asa

    int herBirSayiIcinDusenEsitOlasilik=static_cast<int> (100/kacFarkliDegerdeParaIstenebilir);

    for (int sayac{1};sayac<=kacFarkliDegerdeParaIstenebilir; ++sayac)
    {
        if((sayac*herBirSayiIcinDusenEsitOlasilik>randomGeneratedNumber)&& (sayac-1)*herBirSayiIcinDusenEsitOlasilik<=randomGeneratedNumber)
        {
            BuGemi->paraGuncelleme(-(sayac*herFarkliDegerArasindaKacAltinOlsun));
            std::cout<<"Mevcut bakiyeniz: "<<BuGemi->ParaOgrenme()<<"\n";
        }
    }
}


void UzayKorsanlari::SavasmaTercihiSonucu()
{
const int hasarAlmaOlasiligi{50};
int randomGeneratedNumber =std::rand()%100;//random bir sayi olusturuldu
if(hasarAlmaOlasiligi>=randomGeneratedNumber)
{
std::cout<<"Tebrikler Kacabildiniz\n";

}
else
{
    std::cout<<"Uzgunuz Kacamadiniz\n";
    BuGemi->saglikGuncelleme(30);
    std::cout<<"Kalan caniniz: "<<BuGemi->saglikOgrenme()<<"\n";
    if(!BuGemi->GemiOlduMu())
    {
        this->KullaniciTercihiAlmaFonksiyonu();
    }



}


}



void UzayKorsanlari::KullaniciTercihiAlmaFonksiyonu()
{
    int tercihiTutanInt{0};

    UzayKorsanlariKullaniciTercihiAlma:

    std::cout<<"\nUzay Korsanlari ile karsilastiniz!!!Lutfen birini tercih edin\nKacmak icin 1\nPazarlik icin 2\nSavasmak icin 3\n";

    std::cin>>tercihiTutanInt;

    if((tercihiTutanInt>UzayKorsanlariKarsisindaYapilabilecekSayisi)||(tercihiTutanInt<=0))
    {
        std::cout<<"Yanlis sayi girdiniz tekrar sayi secmeye yonlendiriliyorsunuz...\n";
        goto UzayKorsanlariKullaniciTercihiAlma;
    }
    else{
    OlaylarArasindaBusinessLogicYapanFonk(tercihiTutanInt);
    }
}



void UzayKorsanlari::OlaylarArasindaBusinessLogicYapanFonk(int tercihTutanInt)
{
    switch (tercihTutanInt) {

       case 1:

           if (BuGemi->yakit> static_cast<int>(BuGemi->defaultAzalanYakit*BuGemi->yakitAzalmaKatsayisi)) {

               int AzalanYakit = static_cast<int>(BuGemi->defaultAzalanYakit * BuGemi->yakitAzalmaKatsayisi);

               std::cout << "Yeterince yakitiniz var kacma denenecek ama bir miktar yakitiniz azalacak\n";
               std::cout <<"Azalan Yakit Miktari:" << AzalanYakit << "\n";
               BuGemi->yakitGuncelleme(AzalanYakit);


               if (KacmaTercihiSonucu()) {
                   std::cout << "Tebrikler Kacabildiniz!! \n";


               } else {
                   std::cout << "Uzgunuz tekrar yakalandiniz!!\n";
                   KullaniciTercihiAlmaFonksiyonu();

               }
           }

           else
           {
               std::cout<<"Yeterince yakitiniz yok kacamazsiniz baska bir sey secin \n";
               KullaniciTercihiAlmaFonksiyonu();

           }
           break;
       case 2:

           std::cout<< "Pazarligi tercih ettiniz belli miktarda paraniz azalacak (-) bakiyeye de ye de dusebilirsiniz\n";
           PazarlikTercihiSonucu();
           break;

       case 3:
           std::cout<<"Savasmayi tercih ettiniz ya hasar alacaksiniz ya da kazacaksiniz \n";
           SavasmaTercihiSonucu();
           } //switch case e ait "}"
} // fonksiyona ait "}"





void UzayKorsanlari::pureVirtualYapanFonksiyon() {}


UzayKorsanlari::UzayKorsanlari(std::shared_ptr<Gemi> AlinanGemi) {

    BuGemi=std::move(AlinanGemi);
    //this->KullaniciTercihiAlmaFonksiyonu();
    this->UzayKorsanlariniBaslatacakFonksiyon();
}
