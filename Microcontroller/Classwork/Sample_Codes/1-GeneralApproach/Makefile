CC := xc8
CHIP := 18F4580
FLASH_REGION := 0-3000 
PROG := /usr/share/tinybldlin/tinybldlin.py
PORT := /dev/ttyUSB0

main.hex: main.c
	${CC} --ROM=${FLASH_REGION} --chip=${CHIP} main.c

burn: main.hex
	${PROG} --port ${PORT} --file $^ 
