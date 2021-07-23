#include <iostream.h>
#include <conio.h>

main ()
{

 int dizi[10]={4,-85,10,5,3,5,-55,3,0,1974};
 unsigned int eleman_sayisi=10, enk_indis=0, siradaki=0, bulunan=0;
 int gecici;
 for (unsigned int say=0; say<eleman_sayisi; say++)
 cout<<dizi[say]<<",";
 cout<<endl;

  while (enk_indis<(eleman_sayisi-1))
 {
	 while (++siradaki<eleman_sayisi)
	 {  if(dizi[bulunan]>dizi[siradaki])
					   bulunan=siradaki;
	 }
	 if(bulunan>enk_indis)
	  {
		  cout<<"dizi["<<enk_indis<<"]="<<dizi[enk_indis]<<" <--> dizi["<<bulunan<<"]="<<dizi[bulunan]<<" ile yer degistirdi"<<endl;
		  gecici=dizi[enk_indis];
		  dizi[enk_indis]=dizi[bulunan];
		  dizi[bulunan]=gecici;
	  }
   siradaki=bulunan=++enk_indis;

 }

   cout<<endl<<"dizinin sirali hali:"<<endl;
   for (unsigned int say=0; say<eleman_sayisi; say++)
   cout<<dizi[say]<<",";


getch();
}

