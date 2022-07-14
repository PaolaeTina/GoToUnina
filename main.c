#include <stdio.h>
#include <stdlib.h>
#include "definizioni.h"



int main ()
{
 //Percorso di Paola per andare all'università

Alunno Paola = {"Paola", "Lancellotti.", 22, "Nocera Inferiore.","Federico II.", "Ingegneria Aerospaziale"};
stampa_alunno(Paola);
scanf("tasto");
printf("Paola alle ore 9 dovra' fare l'esame di Informatica.\n");
printf("Per giungere all'universita' usera' la macchina e prendera' l'autostrada.\n");
printf("Arrivera' in tempo per l'esame? \n");

int m2=0;

while ( velocita_P <90 || velocita_P>130)
{
  printf("\nInserire la velocita' in autostrada:  ",velocita_P);
  scanf("%f", &velocita_P);

if( velocita_P >=90 && velocita_P <=130)
{
  float tempo_P = (spazio_P / velocita_P)*60;
  printf("\nA questa velocita' impieghera': %5.2f! minuti.\n", tempo_P);

do
{
  printf("Paola partira' alle   ", h,m);
  scanf("%u .",&h);
  scanf("%u",&m);
  m2= tempo_P+ m;

if (m2 == 60)
{
  int h2=h+1;
  printf("Arrivera' alle ore %d.%d .\n", h2,m3);
  printf("Quindi arrivera' giusto in tempo per sostenere l'esame.\n\n");
}
else if (m2>60 && h==8)
{
  int h3=h+1;
  int m4=-(60-m2);
  printf("Arrivera' alle ore %d.%d .\n", h3,m4);
  printf("Quindi non arrivera' in tempo per sostenere l'esame.Riprova!\n\n");
}
else if(m2 < 60)

{
  printf("Arrivera' alle ore %d.%d .\n", h,m2);
  printf("Quindi arrivera' in tempo per sostenere l'esame.\n\n");
  scanf("%c",&tasto);
}
}
while(m2>60);
}
else
{
  printf ("La velocita' non e' adatta in autostrada.\nPuoi viaggiare con velocita' minima di 90 km/h e velocita' massima di 130 km/h.\nRiprova!");
}
}

macchina paoletta={"Paola","GPL",0.90,11.5,39,3.05,2.10,5.15};
stampa_macchina(paoletta);




     //Percorso Tina per andare all'universita'


    Alunno Tina = {"Tina", "Nappo.", 22., "Poggiomarino.","Federico II.", "Ingegneria Aerospaziale"};
    stampa_alunno(Tina);


    printf("Anche Tina alle ore 9 dovra' sostenere l'esame di Informatica.\n");
    printf("Per giungere all'universita' usera' la macchina e prendera' la SS268. \n");
    float tempo_T = (spazio_T / velocita_T)*60;
    while(velocita_T< limite_di_velocita_min || velocita_T > limite_di_velocita_max)

{
    printf("\nInserire la velocita' in SS268: ",velocita_T);
    scanf("%f", &velocita_T);


    if (velocita_T >=limite_di_velocita_min &&velocita_T<= limite_di_velocita_max )

{
    tempo_T= (spazio_T / velocita_T)*60;
    printf( "\n\n A questa velocita' impieghera': %5.2f! minuti .\n", tempo_T);
    printf("Arrivera' in tempo per l'esame? \n");
}

    else
{
    printf ("Non e' possibile viaggiare a questa velocita'.\n");
    printf("Puoi viaggiare in SS268 con una velocita minima di 50 km/h e con una velocita massima di 90 km/h.");
}
}

    do
{

    printf("\nInserire orario di partenza:   ",h_partenza, m_partenza);
    scanf("%d", &h_partenza);
    scanf("%d", &m_partenza);
    m_arrivo=m_partenza+tempo_T;


    if(m_arrivo<=59 && h_partenza<=8)

{
    printf("Arrivera' alle %d.%d.\n",h_partenza, m_arrivo);
    printf("Tina arrivera' in tempo per sostenere l'esame.\n\n");
}

    else if (m_arrivo>59 && h_partenza==7)

{
    h_arrivo= h_partenza+1;
    int m3_arrivo= -(60-m_arrivo);
    printf("Arrivera' alle %d.%d\n",h_arrivo,m3_arrivo);
    printf("Tina arrivera' in tempo per sostenere l'esame.\n\n");
}

    else if (m_arrivo>59 && h_partenza==8)

{
    h_arrivo=h_partenza+1;
    int m2_arrivo= -(60- m_arrivo);
    printf ("Tina arrivera' alle %d.%d\n", h_arrivo,m2_arrivo);
    printf("Tina non arrivera' in tempo per sostenere l'esame.\nRiprova!");

}

}
   while(m_arrivo>59 && h_arrivo==9);
   macchina concetta={"Tina","benzina",2.00,13.5,32,4.74,0,4.74};
   stampa_macchina(concetta);

   printf("\t\t\t\t\tQUIZ!\n");

    int alunno;

    printf("Se Paola e Tina partono allo stesso orario e viaggiano alla massima velocita' consentita sui rispettivi percorsi:\n");
    printf("Chi arriva prima all' Universita'? \n");
    printf("Scegli il numero:\n");
    printf("1)PAOLA\n2)TINA\n");
    scanf("%d", &alunno);
    switch(alunno)

{
    case PAOLA :
    printf("HAI INDOVINATO!\n\n\n ");
    break;

    case TINA :
    printf("HAI SBAGLIATO!\a\nTina impieghera' 3 minuti in piu'.\n\n\n");
    break;

}

}


void stampa_alunno(  Alunno alunno_1)
   {
     printf("L'alunna si chiama %s %s\n",alunno_1.nome,alunno_1.cognome);
     printf("Ha %d anni\n", alunno_1.eta);
     printf("Proviene da %s\n", alunno_1.citta);
     printf("E' iscritta all' universita' %s\n", alunno_1.universita);
     printf("Alla facolta' di %s.\n", alunno_1.facolta);

   }

  void stampa_macchina(macchina studente)
   {
       printf("%s usera' la macchina a %s.\n",studente.proprietario,studente.alimentazione);
       printf("La macchina consuma euro %1.2f ogni %1.2f km.\n",studente.costo, studente.litro);
       printf("Percorrera' %d km.\n", studente.chilometri);
       printf("Consumera' euro %1.2f\n",studente.consumo);
       printf("Costi extra: euro %1.2f\n", studente.costi_extra);
       printf("spese totali: euro %1.2f.\n",studente.tot);
       scanf("tasto");
   }







