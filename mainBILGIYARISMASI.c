#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



void hosgeldinizfonksiyonu(){
    printf("*** BILGI YARISMASINA HOSGELDINIZ ***\n");
    printf("=====================================\n");
    printf("--Yarisma puan sistemlidir.\n--Sisteme kayitli iseniz giris yapiniz, kayitli degilseniz lutfen kayit olunuz.\n\n");
}
int secimfonksiyonu(){
    int secim;
    printf("Asagidaki seceneklerden seciminizi yapiniz.\n[1]--Giris Yap\n[2]--Kayit Ol\n");
    scanf("%d", &secim);
    return secim;
} 
int girisyapfonksiyonu(char kullaniciadi[20], int sifre){
    char istenenkullaniciadi[20];
    int istenensifre;
    while(1){
    	printf("Kullanici adinizi giriniz: ");
        scanf("%s", &istenenkullaniciadi);
        printf("Sifrenizi giriniz: ");
        scanf("%d", &istenensifre);
        if(strcmp(istenenkullaniciadi,kullaniciadi)==0 || strcmp(istenensifre,sifre)==0){
        	printf("Giris basarili. Yarisma ekranina yonlendiriliyorsunuz.\n");
        	break;
    	}
    	else{
	    	printf("Giris basarisiz. Yeniden giris yap ekranina yonlendiriliyorsunuz. Lutfen bekleyiniz.\n");
	    	continue;
	    }
	}
    
}
struct yarismacilar{
	char isim[20],soyisim[20],kullaniciadi[20];
	int sifre;
};


struct yarismacilar yarismacikayit(){
	struct yarismacilar kayit();
	char isim[20],soyisim[20],kullaniciadi[20];
	int sifre;
	printf("Adiniz: ");
	scanf("%s",&isim);
	printf("Soyadiniz: ");
	scanf("%s",&soyisim);
	printf("Kullanici adi olusturunuz: ");
	scanf("%s",&kullaniciadi);
	printf("Sifre olusturunuz: ");
	scanf("%d",&sifre);
	printf("Kaydiniz basariyla olusturuldu. Giris yap ekranina yonlendiriliyorsunuz.\n\n");
	girisyapfonksiyonu(kullaniciadi,sifre);
};

int main() {
    
   // bilgiyarismasi

   char kullaniciadi[20];
   int sifre;
   char ad[20],soyad[20];
   hosgeldinizfonksiyonu();
    int secim=secimfonksiyonu();
   if(secim==1){
       girisyapfonksiyonu(kullaniciadi,sifre);
   }
   else if(secim==2){
       struct yarismacilar yarismacibir=yarismacikayit();
   }
   




	return 0;
}
