#pragma once

#include "Circulo.h"
using namespace std;


ref class Red
{
public:
	Circulo^ Arequipa;
	Circulo^ Armenia;
	Circulo^ Barcelona;
	Circulo^ Barrancabermeja;
	Circulo^ Barranquilla;
	Circulo^ Belice;
	Circulo^ Bogota;
	Circulo^ Bucaramanga;
	Circulo^ Cali;
	Circulo^ Cancun;
	Circulo^ Caracas;
	Circulo^ Cartagena;
	Circulo^ Chiclayo;
	Circulo^ CiudadDeGuatemala;
	Circulo^ CiudadDeMexico;
	Circulo^ CiudadDePanama;
	Circulo^ Cucuta;
	Circulo^ Cusco;
	Circulo^ Flores;
	Circulo^ Florencia;
	Circulo^ Guayaquil;
	Circulo^ Ibague;
	Circulo^ Iquitos;
	Circulo^ Juliaca;
	Circulo^ LaCeiba;
	Circulo^ LaHabana;
	Circulo^ Leticia;
	Circulo^ Liberia;
	Circulo^ Lima;
	Circulo^ Londres;
	Circulo^ Madrid;
	Circulo^ Managua;
	Circulo^ Manizales;
	Circulo^ Medellin;
	Circulo^ Monteria;
	Circulo^ Neiva;
	Circulo^ Pasto;
	Circulo^ Pereira;
	Circulo^ Piura;
	Circulo^ Popayan;
	Circulo^ PuertoMaldonado;
	Circulo^ PuntaCana;
	Circulo^ Quito;
	Circulo^ Riohacha;
	Circulo^ Roatan;
	Circulo^ SanAndres;
	Circulo^ SanJoseDeCostaRica;
	Circulo^ SanJuan;
	Circulo^ SanPedroDeSula;
	Circulo^ SanSalvador;
	Circulo^ SantaMarta;
	Circulo^ SantoDomingo;
	Circulo^ Tegucigalpa;
	Circulo^ Trujillo;
	Circulo^ Tumaco;
	Circulo^ Valledupar;
	Circulo^ Villavicencio;
	Circulo^ Yopal;

	Red() {
		Arequipa = gcnew Circulo(160, 550, "1");
		Armenia = gcnew Circulo(480, 610, "2");
		Barcelona = gcnew Circulo(350, 620, "3");
		Barrancabermeja = gcnew Circulo(320, 540, "4");
		Barranquilla = gcnew Circulo(210, 420, "5");
		Belice = gcnew Circulo(40, 80, "6");
		Bogota = gcnew Circulo(440, 340, "7");
		Bucaramanga = gcnew Circulo(460, 120, "8");
		Cali = gcnew Circulo(540, 400, "9");
		Cancun = gcnew Circulo(120, 360, "10");
		Caracas = gcnew Circulo(510, 40, "11");
		Cartagena = gcnew Circulo(540, 120, "12");
		Chiclayo = gcnew Circulo(70, 620, "13");
		CiudadDeGuatemala = gcnew Circulo(540, 160, "14");
		CiudadDeMexico = gcnew Circulo(210, 560, "15");
		CiudadDePanama = gcnew Circulo(230, 180, "16");
		Cucuta = gcnew Circulo(510, 620, "17");
		Cusco = gcnew Circulo(130, 620, "18");
		Flores = gcnew Circulo(190, 30, "19");
		Florencia = gcnew Circulo(260, 570, "20");
		Guayaquil = gcnew Circulo(30, 460, "21");
		Ibague = gcnew Circulo(250, 440, "22");
		Iquitos = gcnew Circulo(30, 550, "23");
		Juliaca = gcnew Circulo(100, 620, "24");
		LaCeiba = gcnew Circulo(120, 30, "25");
		LaHabana = gcnew Circulo(65, 430, "26");
		Leticia = gcnew Circulo(260, 400, "27");
		Liberia = gcnew Circulo(160, 30, "28");
		Lima = gcnew Circulo(85, 530, "29");
		Londres = gcnew Circulo(410, 190, "30");
		Madrid = gcnew Circulo(540, 470, "31");
		Managua = gcnew Circulo(210, 130, "32");
		Manizales = gcnew Circulo(440, 620, "33");
		Medellin = gcnew Circulo(300, 220, "34");
		Monteria = gcnew Circulo(160, 510, "35");
		Neiva = gcnew Circulo(540, 340, "36");
		Pasto = gcnew Circulo(390, 230, "37");
		Pereira = gcnew Circulo(540, 620, "38");
		Piura = gcnew Circulo(35, 620, "39");
		Popayan = gcnew Circulo(540, 230, "40");
		PuertoMaldonado = gcnew Circulo(210, 620, "41");
		PuntaCana = gcnew Circulo(400, 620, "42");
		Quito = gcnew Circulo(105, 460, "43");
		Riohacha = gcnew Circulo(150, 460, "44");
		Roatan = gcnew Circulo(80, 30, "45");
		SanAndres = gcnew Circulo(540, 290, "46");
		SanJoseDeCostaRica = gcnew Circulo(440, 40, "47");
		SanJuan = gcnew Circulo(310, 620, "48");
		SanPedroDeSula = gcnew Circulo(310, 80, "49");
		SanSalvador = gcnew Circulo(50, 160, "50");
		SantaMarta = gcnew Circulo(540, 520, "51");
		SantoDomingo = gcnew Circulo(270, 320, "52");
		Tegucigalpa = gcnew Circulo(300, 30, "53");
		Trujillo = gcnew Circulo(35, 520, "54");
		Tumaco = gcnew Circulo(230, 30, "55");
		Valledupar = gcnew Circulo(540, 570, "56");
		Villavicencio = gcnew Circulo(540, 600, "57");
		Yopal = gcnew Circulo(540, 40, "58");
	}

	void Generacion(Graphics^ papel, System::Drawing::Font^ fuente) {
		Arequipa->dibujar(papel, fuente);
		Armenia->dibujar(papel, fuente);
		Barcelona->dibujar(papel, fuente);
		Barrancabermeja->dibujar(papel, fuente);
		Barranquilla->dibujar(papel, fuente);
		Belice->dibujar(papel, fuente);
		Bogota->dibujar(papel, fuente);
		Bucaramanga->dibujar(papel, fuente);
		Cali->dibujar(papel, fuente);
		Cancun->dibujar(papel, fuente);
		Caracas->dibujar(papel, fuente);
		Cartagena->dibujar(papel, fuente);
		Chiclayo->dibujar(papel, fuente);
		CiudadDeGuatemala->dibujar(papel, fuente);
		CiudadDeMexico->dibujar(papel, fuente);
		CiudadDePanama->dibujar(papel, fuente);
		Cucuta->dibujar(papel, fuente);
		Cusco->dibujar(papel, fuente);
		Flores->dibujar(papel, fuente);
		Florencia->dibujar(papel, fuente);
		Guayaquil->dibujar(papel, fuente);
		Ibague->dibujar(papel, fuente);
		Iquitos->dibujar(papel, fuente);
		Juliaca->dibujar(papel, fuente);
		LaCeiba->dibujar(papel, fuente);
		LaHabana->dibujar(papel, fuente);
		Leticia->dibujar(papel, fuente);
		Liberia->dibujar(papel, fuente);
		Lima->dibujar(papel, fuente);
		Londres->dibujar(papel, fuente);
		Madrid->dibujar(papel, fuente);
		Managua->dibujar(papel, fuente);
		Manizales->dibujar(papel, fuente);
		Medellin->dibujar(papel, fuente);
		Monteria->dibujar(papel, fuente);
		Neiva->dibujar(papel, fuente);
		Pasto->dibujar(papel, fuente);
		Pereira->dibujar(papel, fuente);
		Piura->dibujar(papel, fuente);
		Popayan->dibujar(papel, fuente);
		PuertoMaldonado->dibujar(papel, fuente);
		PuntaCana->dibujar(papel, fuente);
		Quito->dibujar(papel, fuente);
		Riohacha->dibujar(papel, fuente);
		Roatan->dibujar(papel, fuente);
		SanAndres->dibujar(papel, fuente);
		SanJoseDeCostaRica->dibujar(papel, fuente);
		SanJuan->dibujar(papel, fuente);
		SanPedroDeSula->dibujar(papel, fuente);
		SanSalvador->dibujar(papel, fuente);
		SantaMarta->dibujar(papel, fuente);
		SantoDomingo->dibujar(papel, fuente);
		Tegucigalpa->dibujar(papel, fuente);
		Trujillo->dibujar(papel, fuente);
		Tumaco->dibujar(papel, fuente);
		Valledupar->dibujar(papel, fuente);
		Villavicencio->dibujar(papel, fuente);
		Yopal->dibujar(papel, fuente);
		

	}

	Circulo^ obtenerCirculoPorNombre(string nombre) {
			if (nombre == "Arequipa") return Arequipa;
			if (nombre == "Armenia") return Armenia;
			if (nombre == "Barcelona") return Barcelona;
			if (nombre == "Barrancabermeja") return Barrancabermeja;
			if (nombre == "Barranquilla") return Barranquilla;
			if (nombre == "Belice") return Belice;
			if (nombre == "Bogota") return Bogota;
			if (nombre == "Bucaramanga") return Bucaramanga;
			if (nombre == "Cali") return Cali;
			if (nombre == "Cancun") return Cancun;
			if (nombre == "Caracas") return Caracas;
			if (nombre == "Cartagena") return Cartagena;
			if (nombre == "Chiclayo") return Chiclayo;
			if (nombre == "Ciudad de Guatemala") return CiudadDeGuatemala;
			if (nombre == "Ciudad de Mexico") return CiudadDeMexico;
			if (nombre == "Ciudad de Panama") return CiudadDePanama;
			if (nombre == "Cucuta") return Cucuta;
			if (nombre == "Cusco") return Cusco;
			if (nombre == "Flores") return Flores;
			if (nombre == "Florencia") return Florencia;
			if (nombre == "Guayaquil") return Guayaquil;
			if (nombre == "Ibague") return Ibague;
			if (nombre == "Iquitos") return Iquitos;
			if (nombre == "Juliaca") return Juliaca;
			if (nombre == "La Ceiba") return LaCeiba;
			if (nombre == "La Habana") return LaHabana;
			if (nombre == "Leticia") return Leticia;
			if (nombre == "Liberia") return Liberia;
			if (nombre == "Lima") return Lima;
			if (nombre == "Londres") return Londres;
			if (nombre == "Madrid") return Madrid;
			if (nombre == "Managua") return Managua;
			if (nombre == "Manizales") return Manizales;
			if (nombre == "Medellin") return Medellin;
			if (nombre == "Monteria") return Monteria;
			if (nombre == "Neiva") return Neiva;
			if (nombre == "Pasto") return Pasto;
			if (nombre == "Pereira") return Pereira;
			if (nombre == "Piura") return Piura;
			if (nombre == "Popayan") return Popayan;
			if (nombre == "Puerto Maldonado") return PuertoMaldonado;
			if (nombre == "Punta Cana") return PuntaCana;
			if (nombre == "Quito") return Quito;
			if (nombre == "Riohacha") return Riohacha;
			if (nombre == "Roatan") return Roatan;
			if (nombre == "San Andres") return SanAndres;
			if (nombre == "San Jose de Costa Rica") return SanJoseDeCostaRica;
			if (nombre == "San Juan") return SanJuan;
			if (nombre == "San Pedro de Sula") return SanPedroDeSula;
			if (nombre == "San Salvador") return SanSalvador;
			if (nombre == "Santa Marta") return SantaMarta;
			if (nombre == "Santo Domingo") return SantoDomingo;
			if (nombre == "Tegucigalpa") return Tegucigalpa;
			if (nombre == "Trujillo") return Trujillo;
			if (nombre == "Tumaco") return Tumaco;
			if (nombre == "Valledupar") return Valledupar;
			if (nombre == "Villavicencio") return Villavicencio;
			if (nombre == "Yopal") return Yopal;

			return nullptr; 
		}

	void dibujarConexion(Graphics^ papel, Circulo^ c1, Circulo^ c2, Color color, int grosor) {
		Pen^ lapiz = gcnew Pen(color, (float)grosor);

		int x1 = c1->x + 10;
		int y1 = c1->y + 10;
		int x2 = c2->x + 10;
		int y2 = c2->y + 10;

		papel->DrawLine(lapiz, x1, y1, x2, y2);
	}

	void Conexiones(Graphics^ g) {
		Color cLinea = Color::Silver;
		int grosor = 2;
		dibujarConexion(g, Arequipa, Lima, cLinea, grosor);
		dibujarConexion(g, Arequipa, Cusco, cLinea, grosor);
		dibujarConexion(g, Belice, SanSalvador, cLinea, grosor);
		dibujarConexion(g, Bogota, SanJoseDeCostaRica, cLinea, grosor);
		dibujarConexion(g, Bogota, SanSalvador, cLinea, grosor);
		dibujarConexion(g, Bogota, SanJuan, cLinea, grosor);
		dibujarConexion(g, Bogota, PuntaCana, cLinea, grosor);
		dibujarConexion(g, Bogota, Cancun, cLinea, grosor);
		dibujarConexion(g, Bogota, CiudadDePanama, cLinea, grosor);
		dibujarConexion(g, Bogota, Medellin, cLinea, grosor);
		dibujarConexion(g, Bogota, Cali, cLinea, grosor);
		dibujarConexion(g, Bogota, Madrid, cLinea, grosor);
		dibujarConexion(g, Bogota, Barcelona, cLinea, grosor);
		dibujarConexion(g, Bogota, Londres, cLinea, grosor);
		dibujarConexion(g, Bogota, Riohacha, cLinea, grosor);
		dibujarConexion(g, Bogota, SantaMarta, cLinea, grosor);
		dibujarConexion(g, Bogota, Barranquilla, cLinea, grosor);
		dibujarConexion(g, Bogota, Cartagena, cLinea, grosor);
		dibujarConexion(g, Bogota, SanAndres, cLinea, grosor);
		dibujarConexion(g, Bogota, Valledupar, cLinea, grosor);
		dibujarConexion(g, Bogota, Monteria, cLinea, grosor);
		dibujarConexion(g, Bogota, Manizales, cLinea, grosor);
		dibujarConexion(g, Bogota, Pereira, cLinea, grosor);
		dibujarConexion(g, Bogota, Armenia, cLinea, grosor);
		dibujarConexion(g, Bogota, Ibague, cLinea, grosor);
		dibujarConexion(g, Bogota, Neiva, cLinea, grosor);
		dibujarConexion(g, Bogota, Popayan, cLinea, grosor);
		dibujarConexion(g, Bogota, Pasto, cLinea, grosor);
		dibujarConexion(g, Bogota, Florencia, cLinea, grosor);
		dibujarConexion(g, Bogota, Villavicencio, cLinea, grosor);
		dibujarConexion(g, Bogota, Yopal, cLinea, grosor);
		dibujarConexion(g, Bogota, Leticia, cLinea, grosor);
		dibujarConexion(g, Bogota, Barrancabermeja, cLinea, grosor);
		dibujarConexion(g, Bogota, Bucaramanga, cLinea, grosor);
		dibujarConexion(g, Bogota, Cucuta, cLinea, grosor);
		dibujarConexion(g, Bogota, CiudadDeMexico, cLinea, grosor);
		dibujarConexion(g, Bogota, CiudadDeGuatemala, cLinea, grosor);
		dibujarConexion(g, Bogota, SantoDomingo, cLinea, grosor);
		dibujarConexion(g, Cancun, SanSalvador, cLinea, grosor);
		dibujarConexion(g, Caracas, SanJoseDeCostaRica, cLinea, grosor);
		dibujarConexion(g, Chiclayo, Lima, cLinea, grosor);
		dibujarConexion(g, CiudadDeGuatemala, SanSalvador, cLinea, grosor);
		dibujarConexion(g, CiudadDeGuatemala, Flores, cLinea, grosor);
		dibujarConexion(g, CiudadDeGuatemala, SanJoseDeCostaRica, cLinea, grosor);
		dibujarConexion(g, CiudadDeGuatemala, Tegucigalpa, cLinea, grosor);
		dibujarConexion(g, CiudadDeGuatemala, SanPedroDeSula, cLinea, grosor);
		dibujarConexion(g, CiudadDeMexico, SanSalvador, cLinea, grosor);
		dibujarConexion(g, CiudadDeMexico, Lima, cLinea, grosor);
		dibujarConexion(g, CiudadDeMexico, SanJoseDeCostaRica, cLinea, grosor);
		dibujarConexion(g, CiudadDePanama, SanJoseDeCostaRica, cLinea, grosor);
		dibujarConexion(g, CiudadDePanama, SanSalvador, cLinea, grosor);
		dibujarConexion(g, Cusco, Lima, cLinea, grosor);
		dibujarConexion(g, Cusco, PuertoMaldonado, cLinea, grosor);
		dibujarConexion(g, Guayaquil, SanSalvador, cLinea, grosor);
		dibujarConexion(g, Guayaquil, Lima, cLinea, grosor);
		dibujarConexion(g, Iquitos, Lima, cLinea, grosor);
		dibujarConexion(g, Juliaca, Lima, cLinea, grosor);
		dibujarConexion(g, LaCeiba, Tegucigalpa, cLinea, grosor);
		dibujarConexion(g, LaHabana, SanSalvador, cLinea, grosor);
		dibujarConexion(g, Liberia, SanSalvador, cLinea, grosor);
		dibujarConexion(g, Piura, Lima, cLinea, grosor);
		dibujarConexion(g, Trujillo, Lima, cLinea, grosor);
		dibujarConexion(g, Tumaco, Cali, cLinea, grosor);
		dibujarConexion(g, Lima, SanSalvador, cLinea, grosor);
		dibujarConexion(g, Lima, SanJoseDeCostaRica, cLinea, grosor);
		dibujarConexion(g, Lima, Quito, cLinea, grosor);
		dibujarConexion(g, Lima, SantoDomingo, cLinea, grosor);
		dibujarConexion(g, Quito, SanJoseDeCostaRica, cLinea, grosor);
		dibujarConexion(g, Quito, Medellin, cLinea, grosor);
		dibujarConexion(g, Quito, SanSalvador, cLinea, grosor);
		dibujarConexion(g, SanJoseDeCostaRica, SanPedroDeSula, cLinea, grosor);
		dibujarConexion(g, SanJoseDeCostaRica, Managua, cLinea, grosor);
		dibujarConexion(g, SanJoseDeCostaRica, Tegucigalpa, cLinea, grosor);
		dibujarConexion(g, SanJoseDeCostaRica, Medellin, cLinea, grosor);
		dibujarConexion(g, SanSalvador, Managua, cLinea, grosor);
		dibujarConexion(g, SanSalvador, Medellin, cLinea, grosor);
		dibujarConexion(g, SanSalvador, Roatan, cLinea, grosor);
		dibujarConexion(g, SanSalvador, SanPedroDeSula, cLinea, grosor);
		dibujarConexion(g, Medellin, Cali, cLinea, grosor);
		dibujarConexion(g, Medellin, Bucaramanga, cLinea, grosor);
		dibujarConexion(g, Medellin, Madrid, cLinea, grosor);
		dibujarConexion(g, Medellin, Barranquilla, cLinea, grosor);
		dibujarConexion(g, Medellin, Cartagena, cLinea, grosor);
		dibujarConexion(g, Medellin, SantaMarta, cLinea, grosor);
		dibujarConexion(g, Cali, Cartagena, cLinea, grosor);
		dibujarConexion(g, Cali, Pasto, cLinea, grosor);
		dibujarConexion(g, Cali, Madrid, cLinea, grosor);
		dibujarConexion(g, Cali, Barranquilla, cLinea, grosor);
	}


	void dibujarConexionita(Graphics^ papel, string origen, string destino, Color color, int grosor) {

		Circulo^ circuorigen = obtenerCirculoPorNombre(origen);
		Circulo^ circudestino = obtenerCirculoPorNombre(destino);

		if (circuorigen != nullptr && circudestino != nullptr) {
			dibujarConexion(papel, circuorigen, circudestino, color, grosor);
		}
	}
};

