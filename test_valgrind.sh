#!/bin/bash

# Colores para la salida
RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m' # Sin color

echo -e "${GREEN}🧹 Limpiando proyecto...${NC}"
make fclean clean

echo -e "${GREEN}🔧 Compilando con debug...${NC}"
make CFLAGS="-Wall -Wextra -Werror -g"

if [ $? -ne 0 ]; then
	echo -e "${RED}❌ Error al compilar el proyecto${NC}"
	exit 1
fi

echo -e "${GREEN}🧪 Compilando main.c con libftprintf.a...${NC}"
make -f test

if [ $? -ne 0 ]; then
	echo -e "${RED}❌ Error al compilar main.c${NC}"
	exit 1
fi

#echo -e "${GREEN}🚀 Ejecutando ./test_printf...${NC}"
#./test_printf

echo -e "${GREEN}🔍 Ejecutando Valgrind...${NC}"
valgrind --leak-check=full --track-origins=yes ./test_printf


