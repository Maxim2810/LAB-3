CFLAGS = -Wall -Werror
OBJ = g++ $(CFLAGS) -c $< -o $@
TEST = g++ $(GFAGS) -I thirtdparty/catch2 -c $< -o $@

.PHONY: clean

all: folder1 folder2 folder3 folder4 bin/geometry.exe

folder1:
	mkdir -p build

folder2:
	mkdir -p bin

folder3:
	mkdir -p build/src

folder4:
	mkdir -p build/test

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

bin/geometry-test: build/test/test.o build/test/circle_intersects.o build/test/printCircle.o build/test/printPoligon.o build/test/printTriangle.o build/test/proverka.o  build/test/input_data.o build/test/areCollinear.o build/test/getMin.o build/test/getMax.o build/test/prijectionsIntersect.o build/test/getSlope.o build/test/getYIntercept.o build/test/getCos.o build/test/testing.o build/test/perpendicular.o build/test/distan.o build/test/prov_data.o 
	g++ $(CFLAGS) -I thirtdparty/catch2  $^ -o $@

build/test/test.o: test/test.c test/geometry.h test/figure.h 
	$(TEST)

build/test/circle_intersects.o: test/circle_interspects-test.c test/geometry.h test/figure.h 
	$(TEST)

build/test/printCircle.o: test/printCircle-test.c test/geometry.h test/figure.h
	$(TEST)

build/test/printPoligon.o: test/poligon-test.c test/geometry.h test/figure.h 
	$(TEST)

build/test/printTriangle.o: test/triangle-test.c test/geometry.h test/figure.h 
	$(TEST)

build/test/proverka.o: test/proverka-test.c src/geometry.h test/figure.h 
	$(TEST)


build/test/input_data.o: test/input_data-test.c test/geometry.h test/figure.h
	$(TEST)  

build/test/areCollinear.o: test/areCollinear-test.c test/geometry.h test/figure.h 
	$(TEST)

build/test/getMin.o: test/getMin-test.c test/geometry.h test/figure.h 
	$(TEST)

build/test/getMax.o: test/getMax-test.c test/geometry.h test/figure.h
	$(TEST)

build/test/prijectionsIntersect.o: test/pI-test.c test/geometry.h test/figure.h 
	$(TEST)

build/test/getSlope.o: test/getSlope-test.c test/geometry.h test/figure.h 
	$(TEST)

build/test/getYIntercept.o: test/getY-test.c test/geometry.h test/figure.h 
	$(TEST)

build/test/getCos.o: test/getCos-test.c test/geometry.h test/figure.h 
	$(TEST)

build/test/distan.o: test/distan-test.c test/geometry.h test/figure.h 
	$(TEST)

build/test/perpendicular.o: test/perpendicular-test.c test/geometry.h test/figure.h
	$(TEST)

build/test/testing.o: test/testing-test.c test/geometry.h test/figure.h 
	$(TEST)

build/test/prov_data.o: test/prov_data-test.c test/geometry.h test/figure.h  	
	$(TEST)

clean:
	rm -r build
	rm -r bin
