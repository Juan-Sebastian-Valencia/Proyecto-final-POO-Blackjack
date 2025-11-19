#include "VistaConsola.h"

// Métodos para pedir datos (inputs)
std::string VistaConsola::pedirNombre(){
    std::string nombreAux;
    std::cout<< "Digite su nombre: ";
    std::cin>>nombreAux;

    while(validaciones->validarNombre(nombreAux)){
        std::cout<<"Nombre no valido, porfavor digite su nombre nuevamente: ";
        std::cin>>nombreAux;
    }

    return nombreAux;
}

int VistaConsola::pedirEdad(){
    int edadAux;
    std::cout<< "Digite su edad: ";
    std::cin>>edadAux;

    while(!validaciones->validarEdad(edadAux)){
        std::cout<<"Edad fuera de rango, porfavor digitela nuevamente: ";
        std::cin>>edadAux;
    }

    return edadAux;
}

double VistaConsola::pedirApuesta(const Jugador& jugador){
    double apuestaAux;
    std::cout<<"Digite su apuesta: ";
    std::cin>>apuestaAux;

    while(!validaciones->validarApuesta(apuestaAux, jugador)){
        std::cout<<"Apuesta mayor que el saldo. Porfavor digite su apuesta nuevamente: ";
        std::cin>>apuestaAux;
    }

    return apuestaAux;
}

int VistaConsola::menuPrincipal(){
    int opcion;
    std::cout<<"\n\n===== BIENVENIDO A BLACKJACK PARADICE =====\n\n";
    std::cout<<"Elija una opción\n";
    std::cout<<"1. Iniciar partida. \n";
    std::cout<<"2. Ver puntuación maxima\n";
    std::cout<<"3. Ver los ultimos 5 puntajes.\n";
    std::cout<<"4. Salir.\n";
    std::cout<<"Digite su elección: ";
    std::cin>>opcion;
    return opcion;
}

int VistaConsola::menuJuego(){
    int opcion;
    std::cout<<"Elija una opción\n";
    std::cout<<"1. Pedir.\n";
    std::cout<<"2. Plantarse.\n";
    std::cout<<"3. Doblar.\n";
    std::cout<<"4. Dividir.\n";
    std::cout<<"Digite su elección: ";
    std::cin>>opcion;
    return opcion;
}

bool VistaConsola::continuarJugando(){
    bool continuarJugando;
    std::cout<<"¿Desea iniciar otra partida? (si-1, no-0): ";
    return continuarJugando;
}

// Métodos para mostrar datos (ouputs)
void VistaConsola::mostrarCarta(const Carta& carta){
    std::cout<<"Palo: "<<carta.getPalo()<<std::endl;
    std::cout<<"número: "<<carta.getNumero()<<std::endl;
    std::cout<<"Valor: "<<carta.getValor()<<std::endl;
}

void VistaConsola::mostrarMano(const std::vector<Carta>& mano){
    for(Carta carta : mano){
        mostrarCarta(carta);
        std::cout<<"\n";
    }
}

void VistaConsola::mostrarJugador(const Jugador& jugador){
    std::cout<<"===== Jugador ====="<<std::endl;
    std::cout<<"Nombre: "<<jugador.getNombre()<<std::endl;
    std::cout<<"Saldo: "<<jugador.getSaldo()<<std::endl;
    std::cout<<"Apuesta: "<<jugador.getApuesta()<<std::endl;
    std::cout<<"Mano: "<<std::endl;
    mostrarMano(jugador.getMano());
}

void VistaConsola::mostrarCrupier(const Crupier& crupier){
    std::cout<<"===== Crupier ====="<<std::endl;
    std::cout<<"Mano: "<<std::endl;
    mostrarMano(crupier.getMano());
}

void VistaConsola::mensajeGanador(){
    std::cout<<"  ¡FELICITACIONES!"<<std::endl;
    std::cout<<"¡GANASTE LA PARTIDA!"<<std::endl;
}

void VistaConsola::mensajeGanadorPorBlackjack(){
    std::cout<<"        ¡FELICITACIONES!"<<std::endl;
    std::cout<<"¡GANASTE LA PARTIDA POR BLACKJACK!"<<std::endl;
}

void VistaConsola::mensajePerdedor(){
    std::cout<<"      Perdiste la partida ;("<<std::endl;
    std::cout<<"¡MAS SUERTE EN LA PROXIMA PARTIDA!"<<std::endl;
}

void VistaConsola::mensajeEmpate(){
    std::cout<<"Empataste la partida con el crupier"<<std::endl;
    std::cout<<"¡MÁS SUERTE EN LA PROXIMA PARTIDA!"<<std::endl;
}

void VistaConsola::mostrarValidacionDoblar(Jugador& jugador){
    if(validaciones->validarDoblar(jugador)){
        jugador.doblarApuesta();
    }else{
        std::cout<<"Saldo Insuficiente"<<std::endl;
    }
}

int VistaConsola::menuDividir(){
    int opcion;
    std::cout<<"Elija una opción\n";
    std::cout<<"1. Pedir.\n";
    std::cout<<"2. Plantarse.\n";
    std::cout<<"3. Doblar.\n";
    std::cout<<"4. Cambiar de mano\n";
    std::cout<<"Digite su elección: ";
    std::cin>>opcion;
    return opcion;
}

int VistaConsola::menuDividirCambioMano(){
    int opcion;
    std::cout<<"Elija una opción\n";
    std::cout<<"1. Pedir.\n";
    std::cout<<"2. Plantarse.\n";
    std::cout<<"3. Doblar.\n";
    std::cout<<"Digite su elección: ";
    std::cin>>opcion;
    return opcion;
}

void VistaConsola::mostrarOpcionInvalida(){
    std::cout<<"Opción no valida"<<std::endl;
}

void VistaConsola::limpiarConsola(){
    #ifndef _WIN32
        system("cls");
    #else   
      //  system("clear");
    #endif
}

void VistaConsola::saliendo(){
    std::cout<<"Saliendo juego... "<<std::endl;
}