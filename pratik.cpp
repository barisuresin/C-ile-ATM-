#include <stdio.h>
int main()
{
	int islem, tutar, bakiye = 1000, geri=1;
	printf("Islemler:\n 1)Para Cekme\n 2)Para Yatirma\n 3)Havale Yapma\n 4)Bakiye Sorgulama\n 5)Kart Iade\n");
	printf("Islem seciniz: ");
	scanf("%d",&islem);
	if( islem >= 6)
	{
		printf("Mal boyle bi islem mi var? bi tusa bas da kapansin program.");
	}
	
	else if( islem == 1)
	{
	printf("Bakiyeniz:%d\n",bakiye);
	printf("Cekmek istediginiz miktari giriniz:");
	scanf("%d",&tutar);
	bakiye = bakiye - tutar; 
	printf("Yeni bakiyeniz: %d\n",bakiye);
	printf("Baska Islem yapmak isterseniz lutfen 1'e basiniz");
		scanf("%d",&geri);
	
	}
	else if( islem == 2)
	{
		printf("Bakiyeniz:%d\n",bakiye);
		printf("Yatirmak Istediginiz Miktari Giriniz:");
		scanf("%d",&tutar);
		bakiye= tutar + bakiye;
		printf("Isleminiz Tamamlanmistir!\n");
		printf("Yeni bakiyeniz:%d\n",bakiye);
		printf("Baska Islem yapmak isterseniz lutfen 1'e basiniz");
		scanf("%d",&geri);
		{
	int islem, tutar, bakiye = 1000, geri=1;
	printf("Islemler:\n 1)Para Cekme\n 2)Para Yatirma\n 3)Havale Yapma\n 4)Bakiye Sorgulama\n 5)Kart Iade\n");
	printf("Islem seciniz: ");
	scanf("%d",&islem);
	if( islem >= 6)
	{
		printf("Mal boyle bi islem mi var? bi tusa bas da kapansin program.");
	}
	
	else if( islem == 1)
	{
	printf("Bakiyeniz:%d\n",bakiye);
	printf("Cekmek istediginiz miktari giriniz:");
	scanf("%d",&tutar);
	bakiye = bakiye - tutar; 
	printf("Yeni bakiyeniz: %d\n",bakiye);
	printf("Baska Islem yapmak isterseniz lutfen 1'e basiniz");
		scanf("%d",&geri);
		
	
	}
	else if( islem == 2)
	{
		printf("Bakiyeniz:%d\n",bakiye);
		printf("Yatirmak Istediginiz Miktari Giriniz:");
		scanf("%d",&tutar);
		bakiye= tutar + bakiye;
		printf("Isleminiz Tamamlanmistir!\n");
		printf("Yeni bakiyeniz:%d\n",bakiye);
		printf("Baska Islem yapmak isterseniz lutfen 1'e basiniz");
		scanf("%d",&geri);
	}
	else if( islem == 3)
	{
		printf("Bakiyeniz:%d\n",bakiye);
		printf("Havale yapmak istediginiz miktari giriniz:");
		scanf("%d",&tutar);
		bakiye = bakiye - tutar;
		printf("Isleminiz Tamamlanmistir!\n Hesabinizda kalan miktar:%d\n",bakiye);
		printf("Baska Islem yapmak isterseniz lutfen 1'e basiniz");
		scanf("%d",&geri);
		
	}
	else if( islem == 4)
	{
		printf("Hesabinizdaki bakiye:%d\n",bakiye);
		printf("Baska Islem yapmak isterseniz lutfen 1'e basiniz");
		scanf("%d",&geri);
		
	}
	else if( islem == 5)
	{
		printf("Kartinizi Almayi Unutmayin :)\n");
		printf("Baska Islem yapmak isterseniz lutfen 1'e basiniz");
		scanf("%d",&geri);
		
		
	}
		
	return 0;
}
		
	}
	else if( islem == 3)
	{
		printf("Bakiyeniz:%d\n",bakiye);
		printf("Havale yapmak istediginiz miktari giriniz:");
		scanf("%d",&tutar);
		bakiye = bakiye - tutar;
		printf("Isleminiz Tamamlanmistir!\n Hesabinizda kalan miktar:%d\n",bakiye);
		printf("Baska Islem yapmak isterseniz lutfen 1'e basiniz");
		scanf("%d",&geri);
		{
	int islem, tutar, bakiye = 1000, geri=1;
	printf("Islemler:\n 1)Para Cekme\n 2)Para Yatirma\n 3)Havale Yapma\n 4)Bakiye Sorgulama\n 5)Kart Iade\n");
	printf("Islem seciniz: ");
	scanf("%d",&islem);
	if( islem >= 6)
	{
		printf("Mal boyle bi islem mi var? bi tusa bas da kapansin program.");
	}
	
	else if( islem == 1)
	{
	printf("Bakiyeniz:%d\n",bakiye);
	printf("Cekmek istediginiz miktari giriniz:");
	scanf("%d",&tutar);
	bakiye = bakiye - tutar; 
	printf("Yeni bakiyeniz: %d\n",bakiye);
	printf("Baska Islem yapmak isterseniz lutfen 1'e basiniz");
		scanf("%d",&geri);
	
	}
	else if( islem == 2)
	{
		printf("Bakiyeniz:%d\n",bakiye);
		printf("Yatirmak Istediginiz Miktari Giriniz:");
		scanf("%d",&tutar);
		bakiye= tutar + bakiye;
		printf("Isleminiz Tamamlanmistir!\n");
		printf("Yeni bakiyeniz:%d\n",bakiye);
		printf("Baska Islem yapmak isterseniz lutfen 1'e basiniz");
		scanf("%d",&geri);
	}
	else if( islem == 3)
	{
		printf("Bakiyeniz:%d\n",bakiye);
		printf("Havale yapmak istediginiz miktari giriniz:");
		scanf("%d",&tutar);
		bakiye = bakiye - tutar;
		printf("Isleminiz Tamamlanmistir!\n Hesabinizda kalan miktar:%d\n",bakiye);
		printf("Baska Islem yapmak isterseniz lutfen 1'e basiniz");
		scanf("%d",&geri);
		
	}
	else if( islem == 4)
	{
		printf("Hesabinizdaki bakiye:%d\n",bakiye);
		printf("Baska Islem yapmak isterseniz lutfen 1'e basiniz");
		scanf("%d",&geri);
		
	}
	else if( islem == 5)
	{
		printf("Kartinizi Almayi Unutmayin :)\n");
		printf("Baska Islem yapmak isterseniz lutfen 1'e basiniz");
		scanf("%d",&geri);
		
		
	}
		
	return 0;
}
		
	}
	else if( islem == 4)
	{
		printf("Hesabinizdaki bakiye:%d\n",bakiye);
		printf("Baska Islem yapmak isterseniz lutfen 1'e basiniz");
		scanf("%d",&geri);
		{
	int islem, tutar, bakiye = 1000, geri=1;
	printf("Islemler:\n 1)Para Cekme\n 2)Para Yatirma\n 3)Havale Yapma\n 4)Bakiye Sorgulama\n 5)Kart Iade\n");
	printf("Islem seciniz: ");
	scanf("%d",&islem);
	if( islem >= 6)
	{
		printf("Mal boyle bi islem mi var? bi tusa bas da kapansin program.");
	}
	
	else if( islem == 1)
	{
	printf("Bakiyeniz:%d\n",bakiye);
	printf("Cekmek istediginiz miktari giriniz:");
	scanf("%d",&tutar);
	bakiye = bakiye - tutar; 
	printf("Yeni bakiyeniz: %d\n",bakiye);
	printf("Baska Islem yapmak isterseniz lutfen 1'e basiniz");
		scanf("%d",&geri);
	
	}
	else if( islem == 2)
	{
		printf("Bakiyeniz:%d\n",bakiye);
		printf("Yatirmak Istediginiz Miktari Giriniz:");
		scanf("%d",&tutar);
		bakiye= tutar + bakiye;
		printf("Isleminiz Tamamlanmistir!\n");
		printf("Yeni bakiyeniz:%d\n",bakiye);
		printf("Baska Islem yapmak isterseniz lutfen 1'e basiniz");
		scanf("%d",&geri);
	}
	else if( islem == 3)
	{
		printf("Bakiyeniz:%d\n",bakiye);
		printf("Havale yapmak istediginiz miktari giriniz:");
		scanf("%d",&tutar);
		bakiye = bakiye - tutar;
		printf("Isleminiz Tamamlanmistir!\n Hesabinizda kalan miktar:%d\n",bakiye);
		printf("Baska Islem yapmak isterseniz lutfen 1'e basiniz");
		scanf("%d",&geri);
		
	}
	else if( islem == 4)
	{
		printf("Hesabinizdaki bakiye:%d\n",bakiye);
		printf("Baska Islem yapmak isterseniz lutfen 1'e basiniz");
		scanf("%d",&geri);
		
	}
	else if( islem == 5)
	{
		printf("Kartinizi Almayi Unutmayin :)\n");
		printf("Baska Islem yapmak isterseniz lutfen 1'e basiniz");
		scanf("%d",&geri);
		
		
	}
		
	return 0;
}
		
	}
	else if( islem == 5)
	{
		printf("Kartinizi Almayi Unutmayin :)\n");
		printf("Baska Islem yapmak isterseniz lutfen 1'e basiniz");
		scanf("%d",&geri);
		
		
	}
		
	return 0;
}
