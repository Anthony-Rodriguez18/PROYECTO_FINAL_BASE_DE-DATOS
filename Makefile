application=program

clean:
	rm -rf build/;

build:
	mkdir -p build; cd build; cmake ../.; make; cd ../.;

run:
	cd build; ./$(application);

start:
	$(MAKE) clean; $(MAKE) build; $(MAKE) run;