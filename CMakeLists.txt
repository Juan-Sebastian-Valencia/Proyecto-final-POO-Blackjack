cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(Blackjack)

# Estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Incluir directorios de encabezados
include_directories(
    ${PROJECT_SOURCE_DIR}/Controlador
    ${PROJECT_SOURCE_DIR}/Modelo
    ${PROJECT_SOURCE_DIR}/Modelo/DataBase
    ${PROJECT_SOURCE_DIR}/Vista
)

# Buscar todos los archivos .cpp del proyecto
file(GLOB_RECURSE SOURCES
    "${PROJECT_SOURCE_DIR}/*.cpp"
)

# Excluir el ejecutable existente para evitar errores
list(REMOVE_ITEM SOURCES "${PROJECT_SOURCE_DIR}/ejecutable.exe")

# Crear ejecutable
add_executable(Blackjack ${SOURCES})
