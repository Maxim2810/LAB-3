CFLAGS = -Wall -Werror
OBJ = g++ $(CFLAGS) -c $< -o $@

.PHONY: clean

all: folder1 folder2 bin/geometry.exe

folder1:
	mkdir -p build

folder2:
	mkdir -p bin

bin/geometry.exe: build/main.o build/circle_intersects.o build/printCircle.o build/poligon.o build/triangle.o build/proverka.o build/proverka_perecech_otrezkov.o build/input_data.o build/areCollinear.o build/getMin.o build/getMax.o build/pI.o build/getSlope.o build/getY.o build/getCos.o build/testing.o build/perpendicular.o build/distan.o build/prov_data.o build/prov_print.o

	g++ $(CFLAGS) $^ -o $@

build/main.o: src/main.c src/geometry.h src/figure.h  
	$(OBJ)

build/circle_intersects.o: src/circle_interspects.c src/geometry.h
	$(OBJ)

build/printCircle.o: src/printCircle.c src/geometry.h
	$(OBJ)

build/poligon.o: src/poligon.c src/geometry.h
	$(OBJ)

build/triangle.o: src/triangle.c src/geometry.h
	$(OBJ)

build/proverka.o: src/proverka.c src/geometry.h
	$(OBJ)

build/proverka_perecech_otrezkov.o: src/peresech.c src/geometry.h
	$(OBJ)	

build/input_data.o: src/input_data.c src/geometry.h
	$(OBJ)	

build/areCollinear.o: src/areCollinear.c src/geometry.h
	$(OBJ)

build/getMin.o: src/getMin.c src/geometry.h
	$(OBJ)

build/getMax.o: src/getMax.c src/geometry.h
	$(OBJ)

build/pI.o: src/pI.c src/geometry.h
	$(OBJ)

build/getSlope.o: src/getSlope.c src/geometry.h
	$(OBJ)

build/getY.o: src/getY.c src/geometry.h
	$(OBJ)

build/getCos.o: src/getCos.c src/geometry.h
	$(OBJ)

build/distan.o: src/distan.c src/geometry.h
	$(OBJ)

build/perpendicular.o: src/perpendicular.c src/geometry.h
	$(OBJ)

build/testing.o: src/testing.c src/geometry.h
	$(OBJ)

build/prov_data.o: src/prov_data.c src/geometry.h src/figure.h
	$(OBJ)

build/prov_print.o: src/prov_print.c src/geometry.h src/figure.h
	$(OBJ)


clean:
	rm -f build/*.o
	rm -f bin/*.exe
	rm -R build
	rm -R bin
