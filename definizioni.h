#ifndef DEFINIZIONI_H_INCLUDED
#define DEFINIZIONI_H_INCLUDED

#define PAOLA 1
#define TINA  2

char tasto;

//Definizioni percorso Paola
int spazio_P = 39;
float velocita_P ;
unsigned int h,m;
int m3 = 0;

//Definizioni percorso Tina
int h_partenza,m_partenza,h_arrivo;
int spazio_T = 32;
float velocita_T;
int limite_di_velocita_max = 90;
int limite_di_velocita_min = 50;
int m_arrivo=0;


typedef struct {
char* nome;
char* cognome;
int eta;
char* citta;
char* universita;
char* facolta;
}Alunno;

typedef struct{
char*proprietario;
char* alimentazione;
float costo;
float litro;
int chilometri;
float consumo;
float costi_extra;
float tot;
}macchina;








#endif // DEFINIZIONI_H_INCLUDED
