#include "CargadorRutas.h"
void CargadorRutas::cargarTodo(Grafo* grafo)
{
    cargarCiudades(grafo);
    cargarRutasTACA(grafo);
    cargarRutasAvianca(grafo);
}

void CargadorRutas::cargarCiudades(Grafo* grafo)
{
    // Ciudades TACA
    grafo->agregarNombreCiudad("Arequipa");
    grafo->agregarNombreCiudad("Belice");
    grafo->agregarNombreCiudad("Bogota");
    grafo->agregarNombreCiudad("Cancun");
    grafo->agregarNombreCiudad("Caracas");
    grafo->agregarNombreCiudad("Chiclayo");
    grafo->agregarNombreCiudad("Ciudad de Guatemala");
    grafo->agregarNombreCiudad("Ciudad de Mexico");
    grafo->agregarNombreCiudad("Ciudad de Panama");
    grafo->agregarNombreCiudad("Cusco");
    grafo->agregarNombreCiudad("Flores");
    grafo->agregarNombreCiudad("Guayaquil");
    grafo->agregarNombreCiudad("Iquitos");
    grafo->agregarNombreCiudad("Juliaca");
    grafo->agregarNombreCiudad("La Ceiba");
    grafo->agregarNombreCiudad("La Habana");
    grafo->agregarNombreCiudad("Liberia");
    grafo->agregarNombreCiudad("Lima");
    grafo->agregarNombreCiudad("Managua");
    grafo->agregarNombreCiudad("Medellin");
    grafo->agregarNombreCiudad("Piura");
    grafo->agregarNombreCiudad("Puerto Maldonado");
    grafo->agregarNombreCiudad("Quito");
    grafo->agregarNombreCiudad("Roatan");
    grafo->agregarNombreCiudad("San Jose de Costa Rica");
    grafo->agregarNombreCiudad("San Pedro de Sula");
    grafo->agregarNombreCiudad("San Salvador");
    grafo->agregarNombreCiudad("Santo Domingo");
    grafo->agregarNombreCiudad("Tegucigalpa");
    grafo->agregarNombreCiudad("Trujillo");

    // Ciudades Avianca
    grafo->agregarNombreCiudad("Armenia");
    grafo->agregarNombreCiudad("Barcelona");
    grafo->agregarNombreCiudad("Barrancabermeja");
    grafo->agregarNombreCiudad("Barranquilla");
    grafo->agregarNombreCiudad("Bucaramanga");
    grafo->agregarNombreCiudad("Cali");
    grafo->agregarNombreCiudad("Cartagena");
    grafo->agregarNombreCiudad("Cucuta");
    grafo->agregarNombreCiudad("Florencia");
    grafo->agregarNombreCiudad("Ibague");
    grafo->agregarNombreCiudad("Leticia");
    grafo->agregarNombreCiudad("Londres");
    grafo->agregarNombreCiudad("Madrid");
    grafo->agregarNombreCiudad("Manizales");
    grafo->agregarNombreCiudad("Monteria");
    grafo->agregarNombreCiudad("Neiva");
    grafo->agregarNombreCiudad("Pasto");
    grafo->agregarNombreCiudad("Pereira");
    grafo->agregarNombreCiudad("Popayan");
    grafo->agregarNombreCiudad("Punta Cana");
    grafo->agregarNombreCiudad("Riohacha");
    grafo->agregarNombreCiudad("San Andres");
    grafo->agregarNombreCiudad("San Juan");
    grafo->agregarNombreCiudad("Santa Marta");
    grafo->agregarNombreCiudad("Tumaco");
    grafo->agregarNombreCiudad("Valledupar");
    grafo->agregarNombreCiudad("Villavicencio");
    grafo->agregarNombreCiudad("Yopal");
}



void CargadorRutas::cargarRutasTACA(Grafo* grafo)
{
    // Arequipa
    grafo->agregarRuta("Arequipa", "Lima");
    grafo->agregarRuta("Arequipa", "Cusco");

    // Belice
    grafo->agregarRuta("Belice", "San Salvador");

    // Bogota
    grafo->agregarRuta("Bogota", "San Jose de Costa Rica");
    grafo->agregarRuta("Bogota", "San Salvador");

    // Cancun
    grafo->agregarRuta("Cancun", "San Salvador");

    // Caracas
    grafo->agregarRuta("Caracas", "San Jose de Costa Rica");

    // Chiclayo
    grafo->agregarRuta("Chiclayo", "Lima");

    // Ciudad de Guatemala
    grafo->agregarRuta("Ciudad de Guatemala", "San Salvador");
    grafo->agregarRuta("Ciudad de Guatemala", "Flores");
    grafo->agregarRuta("Ciudad de Guatemala", "San Jose de Costa Rica");
    grafo->agregarRuta("Ciudad de Guatemala", "Tegucigalpa");
    grafo->agregarRuta("Ciudad de Guatemala", "San Pedro de Sula");

    // Ciudad de Mexico
    grafo->agregarRuta("Ciudad de Mexico", "San Salvador");
    grafo->agregarRuta("Ciudad de Mexico", "Lima");
    grafo->agregarRuta("Ciudad de Mexico", "San Jose de Costa Rica");

    // Ciudad de Panama
    grafo->agregarRuta("Ciudad de Panama", "San Jose de Costa Rica");
    grafo->agregarRuta("Ciudad de Panama", "San Salvador");

    // Cusco
    grafo->agregarRuta("Cusco", "Lima");
    grafo->agregarRuta("Cusco", "Puerto Maldonado");
    grafo->agregarRuta("Cusco", "Arequipa");

    // Flores
    grafo->agregarRuta("Flores", "Ciudad de Guatemala");

    // Guayaquil
    grafo->agregarRuta("Guayaquil", "San Salvador");
    grafo->agregarRuta("Guayaquil", "Lima");

    // Iquitos
    grafo->agregarRuta("Iquitos", "Lima");

    // Juliaca
    grafo->agregarRuta("Juliaca", "Lima");

    // La Ceiba
    grafo->agregarRuta("La Ceiba", "Tegucigalpa");

    // La Habana
    grafo->agregarRuta("La Habana", "San Salvador");

    // Liberia
    grafo->agregarRuta("Liberia", "San Salvador");

    // Lima
    grafo->agregarRuta("Lima", "San Salvador");
    grafo->agregarRuta("Lima", "Ciudad de Mexico");
    grafo->agregarRuta("Lima", "San Jose de Costa Rica");
    grafo->agregarRuta("Lima", "Guayaquil");
    grafo->agregarRuta("Lima", "Quito");
    grafo->agregarRuta("Lima", "Santo Domingo");
    grafo->agregarRuta("Lima", "Iquitos");
    grafo->agregarRuta("Lima", "Piura");
    grafo->agregarRuta("Lima", "Chiclayo");
    grafo->agregarRuta("Lima", "Trujillo");
    grafo->agregarRuta("Lima", "Cusco");
    grafo->agregarRuta("Lima", "Juliaca");
    grafo->agregarRuta("Lima", "Arequipa");

    // Managua
    grafo->agregarRuta("Managua", "San Salvador");
    grafo->agregarRuta("Managua", "San Jose de Costa Rica");

    // Piura
    grafo->agregarRuta("Piura", "Lima");

    // Puerto Maldonado
    grafo->agregarRuta("Puerto Maldonado", "Cusco");

    // Quito
    grafo->agregarRuta("Quito", "San Jose de Costa Rica");
    grafo->agregarRuta("Quito", "Lima");
    grafo->agregarRuta("Quito", "Medellin");
    grafo->agregarRuta("Quito", "San Salvador");

    // Roatan
    grafo->agregarRuta("Roatan", "San Salvador");
    grafo->agregarRuta("Roatan", "San Pedro de Sula");
    grafo->agregarRuta("Roatan", "Tegucigalpa");

    // San Jose de Costa Rica
    grafo->agregarRuta("San Jose de Costa Rica", "San Pedro de Sula");
    grafo->agregarRuta("San Jose de Costa Rica", "San Salvador");
    grafo->agregarRuta("San Jose de Costa Rica", "Managua");
    grafo->agregarRuta("San Jose de Costa Rica", "Tegucigalpa");
    grafo->agregarRuta("San Jose de Costa Rica", "Ciudad de Panama");
    grafo->agregarRuta("San Jose de Costa Rica", "Lima");
    grafo->agregarRuta("San Jose de Costa Rica", "Caracas");
    grafo->agregarRuta("San Jose de Costa Rica", "Quito");
    grafo->agregarRuta("San Jose de Costa Rica", "Ciudad de Guatemala");
    grafo->agregarRuta("San Jose de Costa Rica", "Ciudad de Mexico");
    grafo->agregarRuta("San Jose de Costa Rica", "Santo Domingo");
    grafo->agregarRuta("San Jose de Costa Rica", "Medellin");

    // San Pedro de Sula
    grafo->agregarRuta("San Pedro de Sula", "San Salvador");
    grafo->agregarRuta("San Pedro de Sula", "Roatan");
    grafo->agregarRuta("San Pedro de Sula", "Ciudad de Guatemala");
    grafo->agregarRuta("San Pedro de Sula", "Tegucigalpa");

    // San Salvador
    grafo->agregarRuta("San Salvador", "Ciudad de Mexico");
    grafo->agregarRuta("San Salvador", "Cancun");
    grafo->agregarRuta("San Salvador", "La Habana");
    grafo->agregarRuta("San Salvador", "Belice");
    grafo->agregarRuta("San Salvador", "Roatan");
    grafo->agregarRuta("San Salvador", "San Pedro de Sula");
    grafo->agregarRuta("San Salvador", "Managua");
    grafo->agregarRuta("San Salvador", "San Jose de Costa Rica");
    grafo->agregarRuta("San Salvador", "Ciudad de Panama");
    grafo->agregarRuta("San Salvador", "Medellin");
    grafo->agregarRuta("San Salvador", "Quito");
    grafo->agregarRuta("San Salvador", "Guayaquil");
    grafo->agregarRuta("San Salvador", "Lima");
    grafo->agregarRuta("San Salvador", "Liberia");

    // Tegucigalpa
    grafo->agregarRuta("Tegucigalpa", "San Jose de Costa Rica");
    grafo->agregarRuta("Tegucigalpa", "Ciudad de Guatemala");
    grafo->agregarRuta("Tegucigalpa", "Roatan");
    grafo->agregarRuta("Tegucigalpa", "La Ceiba");

    // Trujillo
    grafo->agregarRuta("Trujillo", "Lima");
}

void CargadorRutas::cargarRutasAvianca(Grafo* grafo)
{
    // Armenia
    grafo->agregarRuta("Armenia", "Bogota");

    // Barcelona
    grafo->agregarRuta("Barcelona", "Bogota");

    // Barrancabermeja
    grafo->agregarRuta("Barrancabermeja", "Bogota");

    // Barranquilla
    grafo->agregarRuta("Barranquilla", "Bogota");
    grafo->agregarRuta("Barranquilla", "Medellin");
    grafo->agregarRuta("Barranquilla", "Cali");

    // Bogota
    grafo->agregarRuta("Bogota", "San Juan");
    grafo->agregarRuta("Bogota", "Punta Cana");
    grafo->agregarRuta("Bogota", "Cancun");
    grafo->agregarRuta("Bogota", "Ciudad de Panama");
    grafo->agregarRuta("Bogota", "Medellin");
    grafo->agregarRuta("Bogota", "Cali");
    grafo->agregarRuta("Bogota", "Madrid");
    grafo->agregarRuta("Bogota", "Barcelona");
    grafo->agregarRuta("Bogota", "Londres");
    grafo->agregarRuta("Bogota", "Riohacha");
    grafo->agregarRuta("Bogota", "Santa Marta");
    grafo->agregarRuta("Bogota", "Barranquilla");
    grafo->agregarRuta("Bogota", "Cartagena");
    grafo->agregarRuta("Bogota", "San Andres");
    grafo->agregarRuta("Bogota", "Valledupar");
    grafo->agregarRuta("Bogota", "Monteria");
    grafo->agregarRuta("Bogota", "Manizales");
    grafo->agregarRuta("Bogota", "Pereira");
    grafo->agregarRuta("Bogota", "Armenia");
    grafo->agregarRuta("Bogota", "Ibague");
    grafo->agregarRuta("Bogota", "Neiva");
    grafo->agregarRuta("Bogota", "Popayan");
    grafo->agregarRuta("Bogota", "Pasto");
    grafo->agregarRuta("Bogota", "Florencia");
    grafo->agregarRuta("Bogota", "Villavicencio");
    grafo->agregarRuta("Bogota", "Yopal");
    grafo->agregarRuta("Bogota", "Leticia");
    grafo->agregarRuta("Bogota", "Barrancabermeja");
    grafo->agregarRuta("Bogota", "Bucaramanga");
    grafo->agregarRuta("Bogota", "Cucuta");
    grafo->agregarRuta("Bogota", "Ciudad de Mexico");
    grafo->agregarRuta("Bogota", "Ciudad de Guatemala");
    grafo->agregarRuta("Bogota", "Santo Domingo");

    // Bucaramanga
    grafo->agregarRuta("Bucaramanga", "Bogota");
    grafo->agregarRuta("Bucaramanga", "Medellin");

    // Cali
    grafo->agregarRuta("Cali", "Bogota");
    grafo->agregarRuta("Cali", "Medellin");
    grafo->agregarRuta("Cali", "Cartagena");
    grafo->agregarRuta("Cali", "Pasto");
    grafo->agregarRuta("Cali", "Tumaco");
    grafo->agregarRuta("Cali", "Madrid");
    grafo->agregarRuta("Cali", "Barranquilla");

    // Cancun
    grafo->agregarRuta("Cancun", "Bogota");

    // Cartagena
    grafo->agregarRuta("Cartagena", "Bogota");
    grafo->agregarRuta("Cartagena", "Medellin");
    grafo->agregarRuta("Cartagena", "Cali");

    // Ciudad de Guatemala
    grafo->agregarRuta("Ciudad de Guatemala", "Bogota");

    // Ciudad de Mexico
    grafo->agregarRuta("Ciudad de Mexico", "Bogota");

    // Ciudad de Panama
    grafo->agregarRuta("Ciudad de Panama", "Bogota");

    // Cucuta
    grafo->agregarRuta("Cucuta", "Bogota");
    grafo->agregarRuta("Cucuta", "Medellin");

    // Florencia
    grafo->agregarRuta("Florencia", "Bogota");

    // Ibague
    grafo->agregarRuta("Ibague", "Bogota");

    // Leticia
    grafo->agregarRuta("Leticia", "Bogota");

    // Londres
    grafo->agregarRuta("Londres", "Bogota");

    // Madrid
    grafo->agregarRuta("Madrid", "Bogota");
    grafo->agregarRuta("Madrid", "Medellin");
    grafo->agregarRuta("Madrid", "Cali");

    // Manizales
    grafo->agregarRuta("Manizales", "Bogota");

    // Medellin
    grafo->agregarRuta("Medellin", "Bogota");
    grafo->agregarRuta("Medellin", "Cali");
    grafo->agregarRuta("Medellin", "Bucaramanga");
    grafo->agregarRuta("Medellin", "Madrid");
    grafo->agregarRuta("Medellin", "Barranquilla");
    grafo->agregarRuta("Medellin", "Cartagena");
    grafo->agregarRuta("Medellin", "Santa Marta");

    // Monteria
    grafo->agregarRuta("Monteria", "Bogota");

    // Neiva
    grafo->agregarRuta("Neiva", "Bogota");

    // Pasto
    grafo->agregarRuta("Pasto", "Bogota");
    grafo->agregarRuta("Pasto", "Cali");

    // Pereira
    grafo->agregarRuta("Pereira", "Bogota");

    // Popayan
    grafo->agregarRuta("Popayan", "Bogota");

    // Punta Cana
    grafo->agregarRuta("Punta Cana", "Bogota");

    // Riohacha
    grafo->agregarRuta("Riohacha", "Bogota");

    // San Andres
    grafo->agregarRuta("San Andres", "Bogota");

    // San Juan
    grafo->agregarRuta("San Juan", "Bogota");

    // Santa Marta
    grafo->agregarRuta("Santa Marta", "Bogota");
    grafo->agregarRuta("Santa Marta", "Medellin");

    // Santo Domingo
    grafo->agregarRuta("Santo Domingo", "Bogota");

    // Tumaco
    grafo->agregarRuta("Tumaco", "Cali");

    // Valledupar
    grafo->agregarRuta("Valledupar", "Bogota");

    // Villavicencio
    grafo->agregarRuta("Villavicencio", "Bogota");

    // Yopal
    grafo->agregarRuta("Yopal", "Bogota");
}