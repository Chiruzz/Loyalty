#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() { 

    int nonno;

    cout<<"[1]--> Pacifica\n[2]--> Normale\n[3]--> Difficile\nSelezione modalita: ";    
    cin>>nonno;
    cout<<"\n\n";

    while(nonno>3){

        cout<<"Modalità inesistente, selezionane una tra quelle seguenti: ";
        cin>>nonno;

    }


    if(nonno==1){
        srand(time(0));

  bool casaN = false;

  string giorni;
  string scommesse;
  string casascelta;

  string cibi[16] = {"Acqua",    "Pollo",        "Mela",      "Pasta",
                     "Pizza",    "Bistecca",     "Salmone",   "Torta",
                     "Taralli",  "Fritti misti", "Hamburger", "Baccalà",
                     "Biscotti", "Pane",         "Sushi",     "Hot Dog"};
  string residenze[5] = {"tenda", "camper", "casetta in legno", "appartamento",
                         "?"};

  int prezziCase[5] = {500, 5000, 10000, 50000, 140000};
  int prezzi[16] = {10, 60, 20, 30, 60, 40,  30, 30,
                    20, 30, 50, 20, 40, 150, 40, 30};
  int aumentofami[16] = {1, 4, 1, 3, 4, 2, 3, 2, 1, 3, 4, 1, 2, 5, 3, 2};

  int contadown = 0;
  int portafoglio = 10000;
  int salute = 10;
  int fame = 10;
  int c = 0;
  int appariscimento = 0;
  int r = 0;

  int ciborandom1, ciborandom2, d, ore, orescelte;

  int a;

  cout << "| P              LOYALTY             B |\n\n"
          "  (un gioco di Pugliesi e Bernabucci)\n\n";

  cout << "'In una fredda serata d'inverno, mentre sfogliavi le foto della "
          "gioventù del nonno ti imbattesti in una un pò particolare... era "
          "una cartolina con una foto di una casa e dietro con su scritto: "
          "manca sempre di meno al tuo acquisto. E da li ti ritornò in mente "
          "che tuo nonno ti parlava ripetutamente di quella casa, e di quanto "
          "gli mancava...'";

cout<<"\n\nMODALITÀ: PACIFICA\n\n";

  do {

    if (casaN == true) {
      break;
    }
    fame--;
    c++;
    ore = 16;
    orescelte = 0;

    if (contadown > 0) {
      contadown--;
      cout << "\n\nLa tua dimora durerà ancora per " << contadown << " giorni";
    }

    if (contadown == 0) {
      salute--;
    }

    cout << "\n\nGiorno " << c << "...\n";
    cout << "Ore 8...\nOre rimanenti alla fine della giornata: " << ore << "h"
         << endl;
    cout << "Saldo: " << portafoglio << "€";
    cout << "\nFame: " << fame << "/10";
    cout << "\nSalute: " << salute << "/10";

    if (salute == 0) {
      break;
    }
    if (fame == 0) {
      break;
    }

    if (portafoglio > 100000) {
      appariscimento++;
    }
    if (appariscimento == 1) {
      cout << "\n\nOH, NELLA LISTA DELLE CASE IN VENDITA È APPARSO QUALCOSA...";
    }

    while (ore > 0) {
      if (portafoglio == 0) {
        cout << "\n\nCosa vuoi fare?\n[1]--> Comprare da mangiare\n[2]--> "
                "Comprare una casa\n[3]--> Lavorare";
        cout << "\n\nINSERISCI: ";
        cin >> d;
        while (d != 1 && d != 2 && d != 3 && d != 104) {
          cout << "opzione non valida, inseriscine una tra quelle date: ";
          cin >> d;
        }
      } else if (portafoglio > 0) {

        cout << "\n\nCosa vuoi fare?\n[1]--> Comprare da mangiare\n[2]--> "
                "Comprare una casa\n[3]--> Lavorare\n[4]--> Scommetti";
        cout << "\n\nINSERISCI: ";
        cin >> d;
        while (d != 1 && d != 2 && d != 3 && d != 4 && d != 104) {
          cout << "\nOpzione non valida, inseriscine una tra quelle date: ";
          cin >> d;
        }
      }

      if (d == 104) {
        portafoglio = portafoglio + 140000;
        ore = ore - 16;
      }

      if (d == 1) {

        ciborandom1 = rand() % 15;
        ciborandom2 = rand() % 15;

        while (ciborandom1 == ciborandom2) {

          ciborandom2 = rand() % 15;
        }

        cout << "Ecco le scelte alimentari di oggi:(maggiore è il costo e "
                "maggiori saranno i benefici...)\n"
             << "1) " << cibi[ciborandom1] << " --> " << prezzi[ciborandom1]
             << "€" << endl
             << "2) " << cibi[ciborandom2] << " --> " << prezzi[ciborandom2]
             << "€" << endl
             << "Se non hai soldi sufficenti per uscire premi [5]\n";

        cin >> a;

        while (prezzi[ciborandom1] > portafoglio ||
               prezzi[ciborandom2] > portafoglio) {

          cout << "\nMi dispiace, ma non puoi comprare questo oggetto perche "
                  "non "
                  "hai soldi suffiecenti...";
        }

        if (a == 1) {

          fame = fame + aumentofami[ciborandom1];
          portafoglio = portafoglio - prezzi[ciborandom1];

        } else if (a == 2) {

          fame = fame + aumentofami[ciborandom2];
          portafoglio = portafoglio - prezzi[ciborandom2];

        } else if (a != 1 && a != 2) {
          cout << "\nArrivederci attento alla fame...";
        }
      }

      if (d == 4) {
        cout << "\nA cosa vuoi giocare?\n[1]--> 1 su 90\n[2]--> Red & Black\nINSERISCI: ";
        int zec;
        int number;
        int s;
        int random=rand () % 90 + 1;
        cin>>zec;

        while(zec>2){

            cout<<"\n\nNumero non valido: ";

            cin>>zec;

        }

        if(zec==1){

            cout<<"\n\nOttima scelta il gioco 1 su 90. Consiste nel giocare parte del tuo portafoglio ed indovinare 1 numero che va da 1 a 90.\n";
            cout<<"INSERISCI IL NUMERO: ";
            cin>>number;


            while(number>90 || number < 1){

                cout<<"\n\nNumero inserito non valido: ";
                cin>>number;

            }

            cout<<"\nQuanti soldi vuoi giocare? ";
            cin>>s;

            while(s>portafoglio){

                cout<<"\n\nNumero troppo grande, ti ricordo che il tuo saldo è di: "<<portafoglio<<"€";
                cin>>s;

            }

            portafoglio=portafoglio-s;

            cout<<random;

            if(number==random){

                cout<<"\nComplimeti, hai indovinato il numero.";
                s=s*36;
                portafoglio=portafoglio+s;
                cout<<"Ora il tuo saldo è di: "<<portafoglio;

            }
            else{

                cout<<"\nMi dispiace ma non hai indovinato...";

            }
        }
        if(zec==2){

            cout<<"\nOttimo, hai scelto il Red & Black.";
            int h;
            int sas;
            int zecollo=rand () % 1;
            int hfg=rand () % 90 + 1;
            string colore;
            string color[2]={"Red", "Black"};

            cout<<"Su cosa vuoi giocare: \n[1]--> Red\n[2]--> Black\n";
            cin>>h;

            while(h>2){

                cout<<"\nNumero inserito non valido: ";
                cin>>h;

            }

            if(h==1){

                colore="Red";

            }
            else{

                colore="Black";

            }

            cout<<"\nQuanti soldi vuoi giocare: ";

            cin>>sas;

            while(sas>portafoglio){

                cout<<"\n\nNumero troppo grande, ti ricordo che il tuo saldo è di: "<<portafoglio<<"€\nINSERISCI:";
                cin>>sas;

            }

            portafoglio=portafoglio-sas;

            cout<<"\nIl numero che è uscito è il: "<<hfg;
            cout<<"\nColore: "<<color[zecollo];

            if(colore==color[zecollo]){

                portafoglio=portafoglio+sas;

                sas=sas * 50;
                sas=sas/100;

                portafoglio=portafoglio+sas;

                cout<<"\nIl tuo saldo è di: "<<portafoglio<<"€\nHai vinto: "<<sas<<"€";

            }

        }

        ore--;
      }

      if (d == 2) {

        cout << "\n\nEcco le case disponibili:\n";

        if (appariscimento >= 1) {

          for (int i = 0; i < 5; i++) {

            cout << i << ") " << residenze[i] << " --> " << prezziCase[i] << "€"
                 << endl;
          }
        } else {
          for (int i = 0; i < 4; i++) {

            cout << i << ") " << residenze[i] << " --> " << prezziCase[i] << "€"
                 << endl;
          }
        }

        cout << "\nInserisci il numero della casa che vuoi comprare: ";
        cin >> a;

        while (portafoglio < prezziCase[a]) {

          cout << "\nMi dispiace, ma non puoi comprare questa casa perche non "
                  "hai abbastanza soldi...";
          cout << "\nSe non puoi comprare nulla inserisci il numero [7]...";
          cin >> a;
        }

        while (a != 0 && a != 1 && a != 2 && a != 3 && a != 4 && a != 7) {
          cout << "opzione non valida, inseriscine una tra quelle date: ";
          cin >> a;
        }
        if (a == 7) {

          cout << "SEI USCITO DALLA SCELTA DELLE CASE...";
        }

        if (a == 0 && portafoglio >= prezziCase[a]) {

          cout << "\nCongratulazioni l'oggetto tenda ora è tuo\n";
          portafoglio = portafoglio - prezziCase[a];
          casascelta = residenze[a];
          contadown = 15;
          salute = salute + 4;
          ore--;
        }
        if (a == 1 && portafoglio >= prezziCase[a]) {

          cout << "\nCongratulazioni l'oggetto camper ora è tuo\n";

          portafoglio = portafoglio - prezziCase[a];

          casascelta = residenze[a];
          contadown = 30;
          salute = salute + 7;
          ore--;
        }

        if (a == 2 && portafoglio >= prezziCase[a]) {

          cout << "\nCongratulazioni l'oggetto casa de legna ora è tuo\n";

          portafoglio = portafoglio - prezziCase[a];

          casascelta = residenze[a];
          contadown = 40;
          salute = 10;
          ore--;
        }

        if (a == 3 && portafoglio >= prezziCase[a]) {

          cout << "\nCongratulazioni l'oggetto appartamento ora è tuo\n";

          portafoglio = portafoglio - prezziCase[a];
          casascelta = residenze[a];
          contadown = 55;
          ore--;
        }
        if (a == 4 && portafoglio >= prezziCase[a]) {

          cout << "\nHAI APPENA COMPRATO UNA CASA, E GUARDANDO DALLE FOTO DI "
                  "TUO "
                  "NONNO è PROPRIO LEI, HAI TROVATO LA CASA CHE AVEVI PROMESSO "
                  "A "
                  "TUO NONNO!!!\n";

          portafoglio = portafoglio - prezziCase[a];
          casascelta = residenze[a];
          casaN = true;
          break;
        }
      }

      if (d == 3) {

        r++;

        if (r == 1) {

          cout << "Benvenuto nel tuo 1° giorno di lavoro, inizia a lavorare!\n";
          cout<<"Il tuo lavoro è il programmatore e guadagni 100€ all'ora...\n";
        }

        cout << "Quante ore vorresti lavorare?\n";
        cin >> orescelte;

        while (orescelte > ore) {
          cout << "Non puoi lavorare piu delle ore che ti rimangono della "
                  "giornata, reinserisci un numero valido: ";
          cin >> orescelte;
        }

        portafoglio = portafoglio + (orescelte * 100);
        ore = ore - orescelte;
      }
      if (ore > 0) {
        cout << "\n\nprima di finire il giorno sono rimaste: " << ore
             << "h \n\n";
        cout << "Saldo: " << portafoglio << "€" << endl;
        cout << "Fame: " << fame << "/10" << endl;
        cout << "Salute: " << salute << "/10" << endl;
      }
      if (ore == 0) {
        cout << "\nSEI TROPPO STANCO E TI SEI ADDORMENTATO, FINISCE COSI IL "
                "GIORNO \n";
      }
    }

  } while (fame > 0 && salute > 0);

  if (casaN == true) {

    cout << "\n\nCOMPLIMENTI, HAI COMPLETATO IL GIOCO, HAI RISPETTATO LA "
            "PROMESSA "
            "DEL NONNO.";
    cout<<"\n\nCERTO CHE PERÒ PACIFICA...\n\n";

    cout<<"\nOh... Guarda un pò il nonno che ti ha lasciato scritto...\n\n ";

cout<<"Caro nipote se stai leggendo questa lettera, significa che hai rispetteto la promessa fattami, non ho mai dubitato sulla tua riuscita nell'impresa, ti auguro tanta felicità... e     goditi questa casa di famiglia. Un abbraccio nonno.";

  }
  if (salute <= 0 || fame <= 0) {
    cout << "\n\nSEI MORTO, HAI PERSO IL GIOCO";
  }
}

    if(nonno==2){

     srand(time(0));

  bool casaN = false;

  string giorni;
  string scommesse;
  string casascelta;

  string cibi[16] = {"Acqua",    "Pollo",        "Mela",      "Pasta",
                     "Pizza",    "Bistecca",     "Salmone",   "Torta",
                     "Taralli",  "Fritti misti", "Hamburger", "Baccalà",
                     "Biscotti", "Pane",         "Sushi",     "Hot Dog"};
  string residenze[5] = {"tenda", "camper", "casetta in legno", "appartamento",
                         "?"};

  int prezziCase[5] = {500, 5000, 10000, 50000, 140000};
  int prezzi[16] = {10, 60, 20, 30, 60, 40,  30, 30,
                    20, 30, 50, 20, 40, 150, 40, 30};
  int aumentofami[16] = {1, 4, 1, 3, 4, 2, 3, 2, 1, 3, 4, 1, 2, 5, 3, 2};

  int contadown = 0;
  int portafoglio = 5000;
  int salute = 10;
  int fame = 10;
  int c = 0;
  int appariscimento = 0;
  int r = 0;

  int ciborandom1, ciborandom2, d, ore, orescelte;

  int a;

  cout << "| P              LOYALTY             B |\n\n"
          "  (un gioco di Pugliesi e Bernabucci)\n\n";

  cout << "'In una fredda serata d'inverno, mentre sfogliavi le foto della "
          "gioventù del nonno ti imbattesti in una un pò particolare... era "
          "una cartolina con una foto di una casa e dietro con su scritto: "
          "manca sempre di meno al tuo acquisto. E da li ti ritornò in mente "
          "che tuo nonno ti parlava ripetutamente di quella casa, e di quanto "
          "gli mancava...'";

cout<<"\n\nMODALITÀ: NORMALE\n\n";

  do {

    if (casaN == true) {
      break;
    }
    fame--;
    c++;
    ore = 16;
    orescelte = 0;

    if (contadown > 0) {
      contadown--;
      cout << "\n\nLa tua dimora durerà ancora per " << contadown << " giorni";
    }

    if (contadown == 0) {
      salute--;
    }

    cout << "\n\nGiorno " << c << "...\n";
    cout << "Ore 8...\nOre rimanenti alla fine della giornata: " << ore << "h"
         << endl;
    cout << "Saldo: " << portafoglio << "€";
    cout << "\nFame: " << fame << "/10";
    cout << "\nSalute: " << salute << "/10";

    if (salute == 0) {
      break;
    }
    if (fame == 0) {
      break;
    }

    if (portafoglio > 100000) {
      appariscimento++;
    }
    if (appariscimento == 1) {
      cout << "\n\nOH, NELLA LISTA DELLE CASE IN VENDITA È APPARSO QUALCOSA...";
    }

    while (ore > 0) {
      if (portafoglio == 0) {
        cout << "\n\nCosa vuoi fare?\n[1]--> Comprare da mangiare\n[2]--> "
                "Comprare una casa\n[3]--> Lavorare";
        cout << "\n\nINSERISCI: ";
        cin >> d;
        while (d != 1 && d != 2 && d != 3 && d != 104) {
          cout << "opzione non valida, inseriscine una tra quelle date: ";
          cin >> d;
        }
      } else if (portafoglio > 0) {

        cout << "\n\nCosa vuoi fare?\n[1]--> Comprare da mangiare\n[2]--> "
                "Comprare una casa\n[3]--> Lavorare\n[4]--> Scommetti";
        cout << "\n\nINSERISCI: ";
        cin >> d;
        while (d != 1 && d != 2 && d != 3 && d != 4 && d != 104) {
          cout << "\nOpzione non valida, inseriscine una tra quelle date: ";
          cin >> d;
        }
      }

      if (d == 104) {
        portafoglio = portafoglio + 140000;
        ore = ore - 16;
      }

      if (d == 1) {

        ciborandom1 = rand() % 15;
        ciborandom2 = rand() % 15;

        while (ciborandom1 == ciborandom2) {

          ciborandom2 = rand() % 15;
        }

        cout << "Ecco le scelte alimentari di oggi:(maggiore è il costo e "
                "maggiori saranno i benefici...)\n"
             << "1) " << cibi[ciborandom1] << " --> " << prezzi[ciborandom1]
             << "€" << endl
             << "2) " << cibi[ciborandom2] << " --> " << prezzi[ciborandom2]
             << "€" << endl
             << "Se non hai soldi sufficenti per uscire premi [5]\n";

        cin >> a;

        while (prezzi[ciborandom1] > portafoglio ||
               prezzi[ciborandom2] > portafoglio) {

          cout << "\nMi dispiace, ma non puoi comprare questo oggetto perche "
                  "non "
                  "hai soldi suffiecenti...";
        }

        if (a == 1) {

          fame = fame + aumentofami[ciborandom1];
          portafoglio = portafoglio - prezzi[ciborandom1];

        } else if (a == 2) {

          fame = fame + aumentofami[ciborandom2];
          portafoglio = portafoglio - prezzi[ciborandom2];

        } else if (a != 1 && a != 2) {
          cout << "\nArrivederci attento alla fame...";
        }
      }

      if (d == 4) {
        cout << "\nA cosa vuoi giocare?\n[1]--> 1 su 90\n[2]--> Red & Black\nINSERISCI: ";
        int zec;
        int number;
        int s;
        int random=rand () % 90 + 1;
        cin>>zec;

        while(zec>2){

            cout<<"\n\nNumero non valido: ";

            cin>>zec;

        }

        if(zec==1){

            cout<<"\n\nOttima scelta il gioco 1 su 90. Consiste nel giocare parte del tuo portafoglio ed indovinare 1 numero che va da 1 a 90.\n";
            cout<<"INSERISCI IL NUMERO: ";
            cin>>number;


            while(number>90 || number < 1){

                cout<<"\n\nNumero inserito non valido: ";
                cin>>number;

            }

            cout<<"\nQuanti soldi vuoi giocare? ";
            cin>>s;

            while(s>portafoglio){

                cout<<"\n\nNumero troppo grande, ti ricordo che il tuo saldo è di: "<<portafoglio<<"€";
                cin>>s;

            }

            portafoglio=portafoglio-s;

            cout<<random;

            if(number==random){

                cout<<"\nComplimeti, hai indovinato il numero.";
                s=s*36;
                portafoglio=portafoglio+s;
                cout<<"Ora il tuo saldo è di: "<<portafoglio;

            }
            else{

                cout<<"\nMi dispiace ma non hai indovinato...";

            }
        }
        if(zec==2){

            cout<<"\nOttimo, hai scelto il Red & Black.";
            int h;
            int sas;
            int zecollo=rand () % 1;
            int hfg=rand () % 90 + 1;
            string colore;
            string color[2]={"Red", "Black"};

            cout<<"Su cosa vuoi giocare: \n[1]--> Red\n[2]--> Black\n";
            cin>>h;

            while(h>2){

                cout<<"\nNumero inserito non valido: ";
                cin>>h;

            }

            if(h==1){

                colore="Red";

            }
            else{

                colore="Black";

            }

            cout<<"\nQuanti soldi vuoi giocare: ";

            cin>>sas;

            while(sas>portafoglio){

                cout<<"\n\nNumero troppo grande, ti ricordo che il tuo saldo è di: "<<portafoglio<<"€\nINSERISCI:";
                cin>>sas;

            }

            portafoglio=portafoglio-sas;

            cout<<"\nIl numero che è uscito è il: "<<hfg;
            cout<<"\nColore: "<<color[zecollo];

            if(colore==color[zecollo]){

                portafoglio=portafoglio+sas;

                sas=sas * 50;
                sas=sas/100;

                portafoglio=portafoglio+sas;

                cout<<"\nIl tuo saldo è di: "<<portafoglio<<"€\nHai vinto: "<<sas<<"€";

            }

        }

        ore--;
      }

      if (d == 2) {

        cout << "\n\nEcco le case disponibili:\n";

        if (appariscimento >= 1) {

          for (int i = 0; i < 5; i++) {

            cout << i << ") " << residenze[i] << " --> " << prezziCase[i] << "€"
                 << endl;
          }
        } else {
          for (int i = 0; i < 4; i++) {

            cout << i << ") " << residenze[i] << " --> " << prezziCase[i] << "€"
                 << endl;
          }
        }

        cout << "\nInserisci il numero della casa che vuoi comprare: ";
        cin >> a;

        while (portafoglio < prezziCase[a]) {

          cout << "\nMi dispiace, ma non puoi comprare questa casa perche non "
                  "hai abbastanza soldi...";
          cout << "\nSe non puoi comprare nulla inserisci il numero [7]...";
          cin >> a;
        }

        while (a != 0 && a != 1 && a != 2 && a != 3 && a != 4 && a != 7) {
          cout << "opzione non valida, inseriscine una tra quelle date: ";
          cin >> a;
        }
        if (a == 7) {

          cout << "SEI USCITO DALLA SCELTA DELLE CASE...";
        }

        if (a == 0 && portafoglio >= prezziCase[a]) {

          cout << "\nCongratulazioni l'oggetto tenda ora è tuo\n";
          portafoglio = portafoglio - prezziCase[a];
          casascelta = residenze[a];
          contadown = 10;
          salute = salute + 4;
          ore--;
        }
        if (a == 1 && portafoglio >= prezziCase[a]) {

          cout << "\nCongratulazioni l'oggetto camper ora è tuo\n";

          portafoglio = portafoglio - prezziCase[a];

          casascelta = residenze[a];
          contadown = 20;
          salute = salute + 7;
          ore--;
        }

        if (a == 2 && portafoglio >= prezziCase[a]) {

          cout << "\nCongratulazioni l'oggetto casa de legna ora è tuo\n";

          portafoglio = portafoglio - prezziCase[a];

          casascelta = residenze[a];
          contadown = 30;
          salute = 10;
          ore--;
        }

        if (a == 3 && portafoglio >= prezziCase[a]) {

          cout << "\nCongratulazioni l'oggetto appartamento ora è tuo\n";

          portafoglio = portafoglio - prezziCase[a];
          casascelta = residenze[a];
          contadown = 45;
          ore--;
        }
        if (a == 4 && portafoglio >= prezziCase[a]) {

          cout << "\nHAI APPENA COMPRATO UNA CASA, E GUARDANDO DALLE FOTO DI "
                  "TUO "
                  "NONNO è PROPRIO LEI, HAI TROVATO LA CASA CHE AVEVI PROMESSO "
                  "A "
                  "TUO NONNO!!!\n";

          portafoglio = portafoglio - prezziCase[a];
          casascelta = residenze[a];
          casaN = true;
          break;
        }
      }

      if (d == 3) {

        r++;

        if (r == 1) {

          cout << "Benvenuto nel tuo 1° giorno di lavoro, inizia a lavorare!\n";
          cout<<"Il tuo lavoro è venditore di auto, lavori per la Bernabucci s.n.c. auto e guadagni 50€ all'ora...\n";
        }

        cout << "Quante ore vorresti lavorare?\n";
        cin >> orescelte;

        while (orescelte > ore) {
          cout << "Non puoi lavorare piu delle ore che ti rimangono della "
                  "giornata, reinserisci un numero valido: ";
          cin >> orescelte;
        }

        portafoglio = portafoglio + (orescelte * 50);
        ore = ore - orescelte;
      }
      if (ore > 0) {
        cout << "\n\nprima di finire il giorno sono rimaste: " << ore
             << "h \n\n";
        cout << "Saldo: " << portafoglio << "€" << endl;
        cout << "Fame: " << fame << "/10" << endl;
        cout << "Salute: " << salute << "/10" << endl;
      }
      if (ore == 0) {
        cout << "\nSEI TROPPO STANCO E TI SEI ADDORMENTATO, FINISCE COSI IL "
                "GIORNO \n";
      }
    }

  } while (fame > 0 && salute > 0);

  if (casaN == true) {

    cout << "\n\nCOMPLIMENTI, HAI COMPLETATO IL GIOCO, HAI RISPETTATO LA "
            "PROMESSA "
            "DEL NONNO.";
    cout<<"\n\nBRAVO HAI VINTO IN MODALITÀ NORMALE ORA PROVA DIFFICILE...\n\n";

    cout<<"\nOh... Guarda un pò il nonno che ti ha lasciato scritto...\n\n ";

cout<<"Caro nipote se stai leggendo questa lettera, significa che hai rispetteto la promessa fattami, non ho mai dubitato sulla tua riuscita nell'impresa, ti auguro tanta felicità... e     goditi questa casa di famiglia. Un abbraccio nonno.";

  }
  if (salute <= 0 || fame <= 0) {
    cout << "\n\nSEI MORTO, HAI PERSO IL GIOCO";
  }    

    }

    if(nonno==3){    

  srand(time(0));

  bool casaN = false;

  string giorni;
  string scommesse;
  string casascelta;

  string cibi[16] = {"Acqua",    "Pollo",        "Mela",      "Pasta",
                     "Pizza",    "Bistecca",     "Salmone",   "Torta",
                     "Taralli",  "Fritti misti", "Hamburger", "Baccalà",
                     "Biscotti", "Pane",         "Sushi",     "Hot Dog"};
  string residenze[5] = {"tenda", "camper", "casetta in legno", "appartamento",
                         "?"};

  int prezziCase[5] = {500, 5000, 10000, 50000, 140000};
  int prezzi[16] = {10, 60, 20, 30, 60, 40,  30, 30,
                    20, 30, 50, 20, 40, 150, 40, 30};
  int aumentofami[16] = {1, 4, 1, 3, 4, 2, 3, 2, 1, 3, 4, 1, 2, 5, 3, 2};

  int contadown = 0;
  int portafoglio = 0;
  int salute = 10;
  int fame = 10;
  int c = 0;
  int appariscimento = 0;
  int r = 0;
  int pd = 0;
  int stanchezza = 10;

  int ciborandom1, ciborandom2,d, ore, orescelte;

  int a;

  cout << "| P              LOYALTY             B |\n\n"
          "  (un gioco di Pugliesi e Bernabucci)\n\n";

  cout << "'In una fredda serata d'inverno, mentre sfogliavi le foto della "
          "gioventù del nonno ti imbattesti in una un pò particolare... era "
          "una cartolina con una foto di una casa e dietro con su scritto: "
          "manca sempre di meno al tuo acquisto. E da li ti ritornò in mente "
          "che tuo nonno ti parlava ripetutamente di quella casa, e di quanto "
          "gli mancava...'";;

cout<<"\n\nMODALITÀ: DIFFICILE\n\n";

  do {

    if (casaN == true) {
      break;
    }
    fame--;
    c++;
    ore = 16;
    orescelte = 0;

    if (contadown > 0) {
      contadown--;
      cout << "\n\nLa tua dimora durerà ancora per " << contadown << " giorni";
    }

    if (contadown == 0) {
      salute--;
    }

    cout << "\n\nGiorno " << c << "...\n";
    cout << "Ore 8...\nOre rimanenti alla fine della giornata: " << ore << "h"
         << endl;
    cout << "Saldo: " << portafoglio << "€";
    cout << "\nFame: " << fame << "/10";
    cout << "\nSalute: " << salute << "/10";
    cout << "\nStanchezza: " << stanchezza << "/10";

    if (salute == 0) {
      break;
    }
    if (fame == 0) {
      break;
    }
    if(stanchezza == 0)
    {
      cout << "\nSei troppo stanco, le tue statistiche hanno subito dei danni, oltre al fatto che hai perso un giorno...\n";
      
      fame = fame - 3;
      salute = salute - 3;

      continue;
      
    }

    if (portafoglio > 100000) {
      appariscimento++;
    }
    if (appariscimento == 1) {
      cout << "\n\nOH, NELLA LISTA DELLE CASE IN VENDITA È APPARSO QUALCOSA...";
    }

    while (ore > 0) {
      if (portafoglio == 0) {
        cout << "\n\nCosa vuoi fare?\n[1]--> Comprare da mangiare\n[2]--> "
                "Comprare una casa\n[3]--> Lavorare\n[4]--> dormire";
        cout << "\n\nINSERISCI: ";
        cin >> d;
        while (d != 1 && d != 2 && d != 3 && d != 4 && d != 104) {
          cout << "opzione non valida, inseriscine una tra quelle date: ";
          cin >> d;
        }
      } else if (portafoglio > 0) {

        cout << "\n\nCosa vuoi fare?\n[1]--> Comprare da mangiare\n[2]--> "
                "Comprare una casa\n[3]--> Lavorare\n[4]--> Dormire\n[5]--> Scommetti";
        cout << "\n\nINSERISCI: ";
        cin >> d;
        while (d != 1 && d != 2 && d != 3 && d != 4 && d != 5 && d != 104) {
          cout << "\nOpzione non valida, inseriscine una tra quelle date: ";
          cin >> d;
        }
      }

      if (d == 104) {
        portafoglio = portafoglio + 140000;
        ore = ore - 16;
        pd++;
      }

      if (d == 1) {

        ciborandom1 = rand() % 15;
        ciborandom2 = rand() % 15;

        while (ciborandom1 == ciborandom2) {

          ciborandom2 = rand() % 15;
        }

        cout << "Ecco le scelte alimentari di oggi:(maggiore è il costo e "
                "maggiori saranno i benefici...)\n"
             << "1) " << cibi[ciborandom1] << " --> " << prezzi[ciborandom1]
             << "€" << endl
             << "2) " << cibi[ciborandom2] << " --> " << prezzi[ciborandom2]
             << "€" << endl
             << "Se non hai soldi sufficenti per uscire premi [5]\n";

        cin >> a;

        while (prezzi[ciborandom1] > portafoglio ||
               prezzi[ciborandom2] > portafoglio) {

          cout << "\nMi dispiace, ma non puoi comprare questo oggetto perche "
                  "non "
                  "hai soldi suffiecenti...";
        }

        if (a == 1) {

          fame = fame + aumentofami[ciborandom1];
          portafoglio = portafoglio - prezzi[ciborandom1];

        } else if (a == 2) {

          fame = fame + aumentofami[ciborandom2];
          portafoglio = portafoglio - prezzi[ciborandom2];

        } else if (a != 1 && a != 2) {
          cout << "\nArrivederci attento alla fame...";
        }
      }

      if (d == 5) {
        cout << "\nA cosa vuoi giocare?\n[1]--> 1 su 90\n[2]--> Red & Black\nINSERISCI: ";
        int zec;
        int number;
        int s;
        int random=rand () % 90 + 1;
        cin>>zec;

        while(zec>2){

            cout<<"\n\nNumero non valido: ";

            cin>>zec;

        }

        if(zec==1){

            cout<<"\n\nOttima scelta il gioco 1 su 90. Consiste nel giocare parte del tuo portafoglio ed indovinare 1 numero che va da 1 a 90.\n";
            cout<<"INSERISCI IL NUMERO: ";
            cin>>number;


            while(number>90 || number < 1){

                cout<<"\n\nNumero inserito non valido: ";
                cin>>number;

            }

            cout<<"\nQuanti soldi vuoi giocare? ";
            cin>>s;

            while(s>portafoglio){

                cout<<"\n\nNumero troppo grande, ti ricordo che il tuo saldo è di: "<<portafoglio<<"€";
                cin>>s;

            }

            portafoglio=portafoglio-s;

            cout << random;

            if(number==random){

                cout<<"\nComplimeti, hai indovinato il numero.";
                s=s*36;
                portafoglio=portafoglio+s;
                cout<<"Ora il tuo saldo è di: "<<portafoglio;

            }
            else{

                cout<<"\nMi dispiace ma non hai indovinato...";

            }
        }
        if(zec==2){

            cout<<"\nOttimo, hai scelto il Red & Black.";
            int h;
            int sas;
            int zecollo=rand () % 1;
            int hfg=rand () % 90 + 1;
            string colore;
            string color[2]={"Red", "Black"};

            cout<<"Su cosa vuoi giocare: \n[1]--> Red\n[2]--> Black\n";
            cin>>h;

            while(h>2){

                cout<<"\nNumero inserito non valido: ";
                cin>>h;

            }

            if(h==1){

                colore="Red";

            }
            else{

                colore="Black";

            }

            cout << "\nQuanti soldi vuoi giocare: ";

            cin >>  sas;

            while(sas>portafoglio){

                cout<<"\n\nNumero troppo grande, ti ricordo che il tuo saldo è di: "<<portafoglio<<"€\nINSERISCI:";
                cin>>sas;

            }

            portafoglio=portafoglio-sas;

            cout << "\nIl numero che è uscito è il: " << hfg;
            cout << "\nColore: " << color[zecollo];

            if(colore==color[zecollo]){

                portafoglio=portafoglio+sas;

                sas=sas * 50;
                sas=sas/100;

                portafoglio=portafoglio+sas;

                cout << "\nIl tuo saldo è di: " << portafoglio << "€\nHai vinto: " << sas << "€";

            }

        }

        ore--;
        stanchezza--;
      }

      if (d == 2) {

        cout << "\n\nEcco le case disponibili:\n";

        if (appariscimento >= 1) {

          for (int i = 0; i < 5; i++) {

            cout << i << ") " << residenze[i] << " --> " << prezziCase[i] << "€"
                 << endl;
          }
        } else {
          for (int i = 0; i < 4; i++) {

            cout << i << ") " << residenze[i] << " --> " << prezziCase[i] << "€"
                 << endl;
          }
        }

        cout << "\nInserisci il numero della casa che vuoi comprare: ";
        cin >> a;

        while (portafoglio < prezziCase[a]) {

          cout << "\nMi dispiace, ma non puoi comprare questa casa perche non "
                  "hai abbastanza soldi...";
          cout << "\nSe non puoi comprare nulla inserisci il numero [7]...";
          cin >> a;
        }

        while (a != 0 && a != 1 && a != 2 && a != 3 && a != 4 && a != 7) {
          cout << "opzione non valida, inseriscine una tra quelle date: ";
          cin >> a;
        }
        if (a == 7) {

          cout << "SEI USCITO DALLA SCELTA DELLE CASE...";
        }

        if (a == 0 && portafoglio >= prezziCase[a]) {

          cout << "\nCongratulazioni l'oggetto tenda ora è tuo\n";
          portafoglio = portafoglio - prezziCase[a];
          casascelta = residenze[a];
          contadown = 7;
          salute = salute + 4;
          ore--;
          stanchezza--;
        }
        if (a == 1 && portafoglio >= prezziCase[a]) {

          cout << "\nCongratulazioni l'oggetto camper ora è tuo\n";

          portafoglio = portafoglio - prezziCase[a];

          casascelta = residenze[a];
          contadown = 14;
          salute = salute + 7;
          ore--;
          stanchezza--;
        }

        if (a == 2 && portafoglio >= prezziCase[a]) {

          cout << "\nCongratulazioni l'oggetto casa de legna ora è tuo\n";

          portafoglio = portafoglio - prezziCase[a];

          casascelta = residenze[a];
          contadown = 21;
          salute = 10;
          ore--;
          stanchezza--;
        }

        if (a == 3 && portafoglio >= prezziCase[a]) {

          cout << "\nCongratulazioni l'oggetto appartamento ora è tuo\n";

          portafoglio = portafoglio - prezziCase[a];
          casascelta = residenze[a];
          contadown = 28;
          ore--;
          stanchezza--;
        }
        if (a == 4 && portafoglio >= prezziCase[a]) {

          cout << "\nHAI APPENA COMPRATO UNA CASA, E GUARDANDO DALLE FOTO DI "
                  "TUO "
                  "NONNO è PROPRIO LEI, HAI TROVATO LA CASA CHE AVEVI PROMESSO "
                  "A "
                  "TUO NONNO!!!\n";

          portafoglio = portafoglio - prezziCase[a];
          casascelta = residenze[a];
          casaN = true;
          break;
        }
      }

      if (d == 3) {

        r++;

        if (r == 1) {

          cout << "Benvenuto nel tuo 1° giorno di lavoro, inizia a lavorare!\n";
          cout<<"Il tuo lavoro è postino e guadagni 13€ all'ora...\n";
        }

        cout << "quante ore vorresti lavorare?\n";
        cin >> orescelte;

        while (orescelte > ore) {
          cout << "non puoi lavorare piu delle ore che ti rimangono della "
                  "giornata, reinserisci un numero valido: ";
          cin >> orescelte;
        }

        portafoglio = portafoglio + (orescelte * 13);
        ore = ore - orescelte;
        stanchezza = stanchezza - (orescelte / 3);
      }
      if (d == 4)
      {
        cout << "\nBenvenuto nella stanza del riposo, questa stanza è speciale perche in cambio di alcune ore può parzialmente ripristinare la tua stanchezza\n";
        cout << "\nQuante ore vorresti dormire?\n";
        cin >> orescelte;
        
        while(orescelte > 4)
        {
          cout << "Mi dispiace, non è concesso dormire più di 4 ore in questa stanza, ricorda che chi dorme non piglia pesci, reinserisci\n";
          cin >> orescelte;
        }

        stanchezza = stanchezza + (orescelte * 2);
        ore = ore - orescelte;
      }
      if (ore > 0) {
        cout << "\n\nprima di finire il giorno sono rimaste: " << ore
             << "h \n\n";
        cout << "Saldo: " << portafoglio << "€" << endl;
        cout << "Fame: " << fame << "/10" << endl;
        cout << "Salute: " << salute << "/10" << endl;
        cout << "stanchezza: " << stanchezza << "/10\n";
      }
      if (ore == 0) {
        cout << "\nSEI TROPPO STANCO E TI SEI ADDORMENTATO, FINISCE COSI IL "
                "GIORNO \n";
      }
    }

  } while (fame > 0 && salute > 0);

  if (casaN == true) {

    cout << "\n\nCOMPLIMENTI, HAI COMPLETATO IL GIOCO, HAI RISPETTATO LA "
            "PROMESSA "
            "DEL NONNO.";

  if(pd>0){

    cout<<"\n\nSe lo devi finire cheetando a questo punto fallo in pacifica...\n\n";
    
  }
  else{

    cout<<"\n\nLivello goat: sei riuscito a finire il gioco in modalità difficile e senza cheet\n\n";
    
  }



    cout<<"\nOh... Guarda un pò il nonno che ti ha lasciato scritto...\n\n ";

cout<<"Caro nipote se stai leggendo questa lettera, significa che hai rispetteto la promessa fattami, non ho mai dubitato sulla tua riuscita nell'impresa, ti auguro tanta felicità... e goditi questa casa di famiglia. Un abbraccio nonno.";

  }
  if (salute <= 0 || fame <= 0) {
    cout << "\n\nSEI MORTO, HAI PERSO IL GIOCO";
  }
  }

}
